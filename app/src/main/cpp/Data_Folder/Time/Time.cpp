#include <stdio.h>
#include <sstream>
#include <iomanip>
#include <climits>
#include <ctime>
#include <Data_Folder/Helper/define.h>
#include "pstring.h"
#include "Data_Folder/imgui/imgui.h"
#include "Time.h"

Time *time_instance = nullptr;

const int TIME_MULTIPLIER = 1000;

const int TM_START_YEAR = 1900;
const int MONTH_COUNT = 12;
const int SECS_IN_MINUTE = 60;
const int SECS_IN_HOUR = SECS_IN_MINUTE * 60;
const int SECS_IN_DAY = SECS_IN_HOUR * 24;
const long long MILLISECS_IN_DAY = SECS_IN_DAY * TIME_MULTIPLIER;
const long long IDENTITY_THRESHOLD = SECS_IN_MINUTE * TIME_MULTIPLIER;
const long long MILLISECS_IN_HOUR = SECS_IN_HOUR * TIME_MULTIPLIER;
const long long MILLISECS_IN_MINUTE = SECS_IN_MINUTE * TIME_MULTIPLIER;
const long long TIME_T_ZERO = 62167132800000;

const int MONTH_LENGTHS[]      =     {31, 28, 31, 30,   31,  30,  31,  31,  30,  31,  30,  31};
const int MONTH_LENGTHS_LEAP[] =     {31, 29, 31, 30,   31,  30,  31,  31,  30,  31,  30,  31};
const int MONTH_STARTS[]       =     { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const int MONTH_STARTS_LEAP[]  =     {-1, 30, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

pstring ToTimeUnit(const TimeUnit & timeunit, long duration, bool prefix)
{
    pstring out;
    switch (timeunit)
    {
    case YEARS:
        return out << std::setw(4) << duration << (prefix ? "y " : " Years ");
    case MONTHS:
        return out << std::setw(2) << duration << (prefix ? "m " : " Months ");
    case WEEKS:
        return out << std::setw(2) << duration << (prefix ? "w " : " Weeks ");
    case DAYS:
        return out << std::setw(2) << duration << (prefix ? "d " : " Days ");
    case HOURS:
        return out << std::setw(2) << duration << (prefix ? "h " : " Hours ");
    case MINUTES:
        return out << std::setw(2) << duration << (prefix ? "m " : " Minutes ");
    case SECONDS:
        return out << std::setw(2) << duration << (prefix ? "s " : " Seconds ");
    case MILLISECONDS:
        return out << duration << (prefix ? "ms " : " Milliseconds ");
    case MICROSECONDS:
        return out << duration << (prefix ? "mcs " : " Microseconds ");
    default:
        return out << "Unknown TimeUnit";
    }
}

/******************************************************************************

                                 Time

******************************************************************************/

Time::Time () {
    m_time = LLONG_MIN; // Invalid date-time by default
}

Time::Time(const Time &value) : m_time(value.m_time) {}

Time::Time(const std::string &value) {
    Set(value);
}

Time::Time(const time_t &time) {
    Set(time);
}

Time::Time(const tm *time) {
    Set(time);
}

void Time::Set(const std::string & value) {
    SecondTime time(value);
    m_time = time.getTime();
}

void Time::Set(const time_t & time) {
    if (time > 0) {
        m_time = (long long) time * TIME_MULTIPLIER + TIME_T_ZERO;
    } else {
        m_time = LLONG_MIN;
    }
}

void Time::Set(const tm * time) {
    SecondTime t(time);
    m_time = t.getTime();
}

int Time::GetDiffDays(const Time &date1, const Time &date2) {
    if (date1.m_time == LLONG_MIN || date2.m_time == LLONG_MIN)
        return -1;
        
    long long diff = date1.m_time - date2.m_time;
    if (diff < 0)
        diff = -diff;
    return static_cast<int>(diff / MILLISECS_IN_DAY);
}

int Time::GetDiffMonths(const Time &date1, const Time &date2) {
    if (date1.m_time == LLONG_MIN || date2.m_time == LLONG_MIN)
        return -1;
    if (date1 == date2) 
        return 0;
    
    SecondTime d1(date1.m_time);
    SecondTime d2(date2.m_time);

    if (date1 < date2)
        return d2.monthsAfter(d1);
    else
        return d1.monthsAfter(d2);
}

int Time::GetDiffYears(const Time &date1, const Time &date2) {
    int months = GetDiffMonths(date1, date2);
    if (months <= 0)
        return months;
    else
        return months / MONTH_COUNT;
}

int Time::GetDiffHours(const Time &date1, const Time &date2) {
    long long diff = date1.m_time - date2.m_time;
    if (diff < 0)
        diff = -diff;
    //long Hours = diff / (60 * 60 * 1000) % 24;
    return static_cast<int>(diff / MILLISECS_IN_HOUR);
}

int Time::GetDiffMinutes(const Time &date1, const Time &date2) {
    long long diff = date1.m_time - date2.m_time;
    if (diff < 0)
        diff = -diff;
    return static_cast<int>(diff / MILLISECS_IN_MINUTE);
}

int Time::GetDiffSeconds(const Time &date1, const Time &date2) {
    long long diff = date1.m_time - date2.m_time;
    if (diff < 0)
        diff = -diff;
    return static_cast<int>(diff / TIME_MULTIPLIER);
}

std::string Time::CountDownTimer(const Time *end, ImColor* col, bool prefix, bool bInfoTime)
{
    std::string temp, s_days, s_hour, s_min, s_sec;
    SecondTime *current = new SecondTime(m_time);
    SecondTime *exp_event = new SecondTime(end->m_time);
   // this->m_time = current->get();
    if (current->checkFutureDate(exp_event))
    {
        long long diff = exp_event->getTime() - current->getTime();
        
        long day_t = diff / (24 * 60 * 60 * 1000);
        long hour_t = diff / (60 * 60 * 1000) % 24;
        long min_t = diff / (60 * 1000) % 60;
        long sec_t = diff / 1000 % 60;
        
        s_days = ToDays(day_t, prefix);
        s_hour = ToHours(hour_t, prefix);
        s_min = ToMinutes(min_t, prefix);
        s_sec = ToSeconds(sec_t, prefix);
        
        if (day_t == 0) {
            // Yellow
            *col = ImColor(255, 255, 0, 255);
            if (bInfoTime) {
                temp = "Token will expire on today: ";
            }
            temp += s_hour;
            temp += s_min;
            temp += s_sec;
        } else {
            // Law Green
            *col = ImColor(124, 252, 0, 255);
            temp = s_days;
            temp += s_hour;
            temp += s_min;
            temp += s_sec;
        }
    } else {
        // Red
        *col = ImColor(255, 0, 0, 255);
        if (bInfoTime)
            temp = "Token has expired.";
        else
            temp = "Token expired.";
    }
    return temp;
}

/******************************************************************************

                                 Second Time

******************************************************************************/

long long getTimezone()
{
    static bool inited(false);
    static long long tz(0);

    if (!inited)
    {
        // Point is converting current time_t to UTC in struct tm, then back to localtime
        time_t t = time(nullptr);
        tm utc;
        if (gmtime_r(&t, &utc) == 0)
        {
            // Unknown state of daylight saving (supposing the state is not changing while the application works):
            utc.tm_isdst = -1;

            time_t tu = mktime(&utc);
            tz = (tu - t) * TIME_MULTIPLIER;
        }
        inited = true;
    }
    return tz;
}

inline bool isLeap (int year) {
  // Gregorian
  return (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
}

/*
 * Count leap days in the years
 */
inline int getLeapDays(int years) {
  // Gregorian
  return years / 4 - years / 100 + years / 400;
}

SecondTime::SecondTime() : year(0), month(0), day(0), hour(0), minute(0), second(0), millisecond(0), valid(true) {}

SecondTime::SecondTime(const tm * time)
{
    if (time)
    {
        year = time->tm_year + TM_START_YEAR;
        month = time->tm_mon;
        day = time->tm_mday;
        hour = time->tm_hour;
        minute = time->tm_min;
        second = time->tm_sec;
        millisecond = 0;

        valid = year >= TM_START_YEAR && day > 0 && day <= MONTH_LENGTHS[month] && hour >= 0 && minute >= 0 && second >= 0;
    }
    else
    {
        memset(this, 0, sizeof(SecondTime));
        valid = false;
    }
}

SecondTime::SecondTime(const std::string & value)
{
    // Read the fields from a string
    memset(this, 0, sizeof(SecondTime));
    char dummy;
    std::istringstream str(value);

    str >> year;
    valid = !str.fail();

    str >> dummy >> month;
    valid &= !str.fail();

    str >> dummy >> day;
    valid &= !str.fail();

    if (!str.eof())
    {
        // The string includes time portion
        if (!(str >> hour) || !(str >> dummy >> minute) || !(str >> dummy >> second))
            valid = false;

        str >> dummy >> millisecond;
    }

    // Month starts from zero:
    month--;
}

SecondTime::SecondTime(long long time):valid(true)
{
    millisecond = time % TIME_MULTIPLIER;
    // Milliseconds ingnored
    time /= TIME_MULTIPLIER;

    // Seconds since the day start
    second = time % SECS_IN_DAY;

    hour = second / SECS_IN_HOUR;
    second %= SECS_IN_HOUR;

    minute = second / SECS_IN_MINUTE;
    second %= SECS_IN_MINUTE;
    // ... now everything within the day is correct

    // Amount of days since 1.01.01
    time /= SECS_IN_DAY;

    // Maximum possible years count for this amount of days:
    year = static_cast < int >(time / 365);
    year -= getLeapDays(year) / 365;

    // The year changed, leap days count may be changed also:
    int leap = getLeapDays(year);

    // Day of the year for these year and leap days count:
    long long days = time - (long long)year * 365 - leap;

    // Adjusting the year to achieve days being in [0; 365]
    // Down:
    while (days < 0)
    {
        year--;
        leap = getLeapDays(year);
        days = time - (long long)year *365 - leap;
    }

    // Up:
    while (days > 365)
    {
        year++;
        leap = getLeapDays(year);
        days = time - (long long)year *365 - leap;
    }

    // Split day-of-the year onto month and day
    if (isLeap(year))
        setYearsDay(MONTH_STARTS_LEAP, MONTH_LENGTHS_LEAP, static_cast < int >(days));
    else
        setYearsDay(MONTH_STARTS, MONTH_LENGTHS, static_cast < int >(days));
}

void SecondTime::setYearsDay(const int *monthTable, const int *lengths, int yearDay)
{
    for (int i = 1; i < 13; i++)
    {
        if (yearDay <= monthTable[i])
        {
            month = i - 1;
            day = yearDay - monthTable[i - 1] + 1;
            break;
        }
    }

    // Lame date correction for the cases like Jan, 32
    if (day > lengths[month])
    {
        day = 1;
        month++;
        if (month > 11)
        {
            year++;
            month = 0;
        }
    }
}

long long SecondTime::getTime()
{
    if (!valid)
        return LLONG_MIN;

    // By chance, month may be more than 11...
    year += month / MONTH_COUNT;
    month %= MONTH_COUNT;

    int mdays;
    if (isLeap(year))
        mdays = MONTH_STARTS_LEAP[month];
    else
        mdays = MONTH_STARTS[month];

    // Days amount from Jan, 1 of the 1'st year
    long long result = year * 365   // in non-leap years
        + getLeapDays(year)     // days in leap years
        + mdays                 // the day on which the month starts
        + day                   // month's day
        - 1;                    // since month starts with day 1 (not 0)

    result *= SECS_IN_DAY;
    result += hour * SECS_IN_HOUR;
    result += minute * SECS_IN_MINUTE;
    result += second;
    result *= TIME_MULTIPLIER;
    result += millisecond;

    return result;
}

std::string SecondTime::formatDate() const
{
    pstring res;
    res << std::setfill('0') << year << '-' << std::setw(2) << (month + 1) << '-' << std::setw(2) << day;
    return res;
}

std::string SecondTime::formatDateTime() const
{
    pstring res;
    res << std::setfill('0') << year << '-' << std::setw(2) << (month + 1) << '-' << std::setw(2) << day << ' ' << std::setw(2) << hour << ':' << std::setw(2) << minute << ':' << std::setw(2) << second;

    if (millisecond)
        res << '.' << std::setw(3) << millisecond;

    return res;
}

int SecondTime::dayOfYear() const
{
    if (isLeap(year))
        return MONTH_STARTS_LEAP[month] + day;
    else
        return MONTH_STARTS[month] + day;
}

int SecondTime::monthsAfter(const SecondTime & from)
{
    // * * * > *
    // * * * * *
    // * < * * *
    int result = (year - from.year) * MONTH_COUNT;
    result -= from.month - month;

    if (day < from.day)
        return result - 1;

    if (day == from.day)
    {
        int time = (hour * SECS_IN_HOUR + minute * SECS_IN_MINUTE + second) * TIME_MULTIPLIER + millisecond;
        int ftime = (from.hour * SECS_IN_HOUR + from.minute * SECS_IN_MINUTE + from.second) * TIME_MULTIPLIER + from.millisecond;
        if (ftime > time)
            return result - 1;
    }
    return result;
}

void SecondTime::aSecondTime(tm * time)
{
    time->tm_year = year - TM_START_YEAR;
    time->tm_mon = month;
    time->tm_mday = day;
    time->tm_hour = hour;
    time->tm_min = minute;
    time->tm_sec = second;
}

bool SecondTime::checkFutureDate(SecondTime * _time)
{
    // Check Years, Months, Days
    bool valid_years = (_time->year > this->year) || (_time->year == this->year) ? true : false;
    bool valid_months = (_time->month > this->month) || (_time->month == this->month) ? true : false;
    bool valid_days = (_time->day > this->day) || (_time->day == this->day) ? true : false;
    bool is_year_month = valid_years ? valid_months : false;
    bool is_year_month_day = is_year_month ? valid_days : false;
    //return is_year_month_day;
    
    // final result :)
    bool isValidTime = (_time->getTime() > this->getTime()) || (_time->getTime() == this->getTime()) ? true : false;
    return isValidTime;
}

