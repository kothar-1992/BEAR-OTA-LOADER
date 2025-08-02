package com.bearmod;
import android.annotation.SuppressLint;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.provider.Settings;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.Toast;
import android.graphics.drawable.GradientDrawable;
import android.graphics.Color;
import android.widget.TextView;
import android.view.Gravity;
import android.app.Dialog;
import android.os.Handler;
import android.os.Message;
import android.app.Activity;

import java.util.Objects;

public class Launcher {

    private static final String TAG = "Launcher";

    @SuppressLint("StaticFieldLeak")
    public static Activity d_activity;
    private static volatile SharedPreferences gifs;

    // REMOVED: UI String JNI methods - replaced with Plugin module's modern authentication UI
    // These 9 methods were removed as part of Plan-A cleanup:
    // LoginNameNrg(), Pleaselog(), KeyAdd(), Login(), Cancel(), Error(), Pleasecheck(), Ok(), Loging(), Link()
    

    static{
       System.loadLibrary("BearMod");
        System.loadLibrary("BEAR");
    }

    @SuppressLint("SetTextI18n")
    public static void Init(Object object) {
        final Context context = (Context) object;
        Activity m_Activity = (Activity) object;
        final Activity ggActivity = (Activity) object;
        Init(context);
         d_activity = m_Activity;



        if (!Settings.canDrawOverlays(context)) {
            Intent intent = new Intent(Settings.ACTION_MANAGE_OVERLAY_PERMISSION, Uri.parse("package:" + context.getPackageName()));
            m_Activity.startActivity(intent);
        }

        gifs = context.getSharedPreferences(context.getPackageName(), Context.MODE_PRIVATE);

        if (!gifs.contains("USER_KEY")) {

            final SharedPreferences sharedPreferences = context.getSharedPreferences("SavePref", 0);
            sharedPreferences.getString("User", null);
            sharedPreferences.getString("Pass", null);

            //Create LinearLayout
            LinearLayout linearLayout = new LinearLayout(context);
            linearLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
            linearLayout.setOrientation(LinearLayout.VERTICAL);
            GradientDrawable gradientdrawable = new GradientDrawable();
            gradientdrawable.setCornerRadius(30); //Set corner
            gradientdrawable.setColor(Color.parseColor("#FFF1F1F1")); //Set background color
            gradientdrawable.setStroke(0, Color.parseColor("#32cb00")); //Set 
            linearLayout.setBackground(gradientdrawable);



            TextView txt = new TextView(context);
            txt.setGravity(Gravity.CENTER);
            txt.setText("Bear MOD Login"); // Hardcoded - was LoginNameNrg()
            txt.setTextColor(0xFF181818);
            txt.setBackgroundColor(Color.TRANSPARENT);
            txt.setTextSize(19);
            txt.setPadding(1,1,1,1);


            TextView txt1 = new TextView(context);
            txt1.setGravity(Gravity.CENTER);
            txt1.setText("Enter your registered key to log in"); // Hardcoded - was Pleaselog()
            txt1.setTextColor(0xFF151515);
            txt1.setBackgroundColor(Color.TRANSPARENT);
            txt1.setTextSize(9);


            final EditText editTextUser = new EditText(context);
            editTextUser.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT));
            editTextUser.setTextColor(Color.parseColor("#000000bb"));
            editTextUser.setHint("Key..."); // Hardcoded - was KeyAdd()
      //      editTextUser.setTextSize(10);//add
            editTextUser.setGravity(Gravity.CENTER);
            editTextUser.setTextColor(Color.parseColor("#000000")); // Черный текст


            //  editTextUser.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14); // Размер текста в sp

// Установка линии в центре ввода текста
            editTextUser.setBackgroundColor(Color.parseColor("#000000")); // Черный цвет
            editTextUser.setHintTextColor(Color.parseColor("#000000")); // Черный цвет подсказки

// Создание градиента для обводки
            GradientDrawable strokeDrawable = new GradientDrawable();
            strokeDrawable.setShape(GradientDrawable.RECTANGLE);
            strokeDrawable.setColor(Color.parseColor("#fafafa")); // Красный цвет
            strokeDrawable.setCornerRadius(20); //Set corner
            strokeDrawable.setStroke(30, Color.TRANSPARENT); // Толщина обводки 30 и черный цвет

            editTextUser.setBackground(strokeDrawable);

            LinearLayout ln3 = new LinearLayout(context);
            ln3.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, (int)1));
            ln3.setOrientation(LinearLayout.HORIZONTAL);
            ln3.setGravity(Gravity.CENTER);
            ln3.setBackgroundColor(Color.GRAY);


            LinearLayout ln2 = new LinearLayout(context);
            ln2.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, -1));
            ln2.setOrientation(LinearLayout.HORIZONTAL);
            ln2.setGravity(Gravity.CENTER);


            Button button = new Button(context);
            button.setTextColor(Color.BLUE);
            button.setText("                Login                "); // Hardcoded - was Login()
            button.setBackgroundColor(Color.TRANSPARENT);

            LinearLayout ln4 = new LinearLayout(context);
            ln4.setLayoutParams(new LinearLayout.LayoutParams((int)1,LinearLayout.LayoutParams.MATCH_PARENT));
            ln4.setOrientation(LinearLayout.HORIZONTAL);
            ln4.setGravity(Gravity.CENTER);
            ln4.setBackgroundColor(Color.GRAY);

            //Create button
            Button button2 = new Button(context);
            button.setTextColor(Color.BLUE);
            button2.setText("               JOIN               "); // Hardcoded - was Cancel()
            button2.setBackgroundColor(Color.TRANSPARENT);

            linearLayout.addView(txt);
            linearLayout.addView(txt1);
            linearLayout.addView(editTextUser);

            linearLayout.addView(ln3);
            ln2.addView(button2);
            ln2.addView(ln4);
            ln2.addView(button);
            linearLayout.addView(ln2);

            final Dialog builder = new Dialog(context);
            builder.setCancelable(false);
            builder.setContentView(linearLayout);
            Objects.requireNonNull(builder.getWindow()).setBackgroundDrawableResource(android.R.color.transparent);

            button.setOnClickListener(view -> {
                String userKey = editTextUser.getText().toString();
                Login(context, userKey);
                builder.dismiss();
            });
            button2.setOnClickListener(view -> {


                Intent intent = new Intent(Intent.ACTION_VIEW);
                intent.setData(Uri.parse("https://t.me/Bear_Mod")); // Hardcoded - was Link()
                ggActivity.startActivity(intent);

            });
            builder.show();
        } else{
            Login(context, gifs.getString("USER_KEY", null));
        }
    }



    @SuppressLint("SetTextI18n")
    private static void Login(final Context kontes, final String userKey) {
        LinearLayout linearLayout = new LinearLayout(kontes);
        linearLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
        linearLayout.setOrientation(LinearLayout.VERTICAL);

        GradientDrawable gradientdrawable = new GradientDrawable();
        gradientdrawable.setCornerRadius(20); //Set corner
        gradientdrawable.setColor(Color.parseColor("#FFF1F1F1")); //Set background color
        gradientdrawable.setStroke(0, Color.parseColor("#32cb00")); //Set 
        linearLayout.setBackground(gradientdrawable);
        TextView txt = new TextView(kontes);
        txt.setGravity(Gravity.CENTER);
        txt.setText("  Please wait...  "); // Hardcoded - was Loging()

        txt.setTextColor(0xFF181818);
        txt.setBackgroundColor(Color.TRANSPARENT);
        txt.setTextSize(20);
        
    
        
        linearLayout.addView(txt);
        final Dialog builder = new Dialog(kontes);
        builder.setCancelable(false);
        builder.setContentView(linearLayout);
        Objects.requireNonNull(builder.getWindow()).setBackgroundDrawableResource(android.R.color.transparent);
        
        builder.show();

        @SuppressLint("HandlerLeak") final  Handler sagen = new Handler() {
            @SuppressLint("SetTextI18n")
            @Override
            public void handleMessage(Message ems) {
                if (ems.what == 0) {
            Toast.makeText(kontes, "Key Work", Toast.LENGTH_SHORT).show();
                    new ImGui(kontes);
                } else if (ems.what == 1) {
                    LinearLayout linearLayout = new LinearLayout(kontes);
                    linearLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
                    linearLayout.setOrientation(LinearLayout.VERTICAL);

                    GradientDrawable gradientdrawable = new GradientDrawable();
                    gradientdrawable.setCornerRadius(30); //Set corner
                    gradientdrawable.setColor(Color.parseColor("#FFF1F1F1")); //Set background color
                    gradientdrawable.setStroke(0, Color.parseColor("#32cb00")); //Set 
                    linearLayout.setBackground(gradientdrawable);

                    //Create username edittext field
                    TextView txt = new TextView(kontes);
                    txt.setGravity(Gravity.CENTER);
                    txt.setText("Error"); // Hardcoded - was Error()

                    txt.setTextColor(0xFF181818);
                    txt.setBackgroundColor(Color.TRANSPARENT);
                    txt.setTextSize(20);

                    TextView txt1 = new TextView(kontes);
                    txt1.setGravity(Gravity.CENTER);
                    txt1.setText("                               Please check your key                               "); // Hardcoded - was Pleasecheck()
                    txt1.setTextColor(0xFF595959);
                    txt1.setBackgroundColor(Color.TRANSPARENT);
                    txt1.setTextSize(13);

                    final TextView infoText = new TextView(kontes);
                    infoText.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT));
                    infoText.setGravity(Gravity.CENTER);
                    infoText.setBackgroundColor(Color.TRANSPARENT);
                    infoText.setText(ems.obj.toString());


                    LinearLayout ln3 = new LinearLayout(kontes);
                    ln3.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, (int)1));
                    ln3.setOrientation(LinearLayout.HORIZONTAL);
                    ln3.setGravity(Gravity.CENTER);
                    ln3.setBackgroundColor(Color.GRAY);


                    LinearLayout ln2 = new LinearLayout(kontes);
                    ln2.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, -1));
                    ln2.setOrientation(LinearLayout.HORIZONTAL);
                    ln2.setGravity(Gravity.CENTER);


                    Button button = new Button(kontes);
                    button.setTextColor(Color.BLUE);
                    button.setText("                         OK                         "); // Hardcoded - was Ok()
                    button.setBackgroundColor(Color.TRANSPARENT);


                    linearLayout.addView(txt);
                    linearLayout.addView(txt1);
                    linearLayout.addView(infoText);
                    linearLayout.addView(ln3);

                    ln2.addView(button);
                    linearLayout.addView(ln2);

                    final Dialog builder = new Dialog(kontes);
                    builder.setCancelable(false);
                    builder.setContentView(linearLayout);
                    Objects.requireNonNull(builder.getWindow()).setBackgroundDrawableResource(android.R.color.transparent);


                    button.setOnClickListener(view -> System.exit(0));

                    builder.show();


                }
                builder.dismiss();
            }
        };

        new Thread(() -> {
            String result = Check(kontes, userKey);
            if (result.equals("OK")) {
                gifs.edit().putString("USER_KEY", userKey).apply();

                sagen.sendEmptyMessage(0);
            } else {
                gifs.edit().clear().apply();

                Message ems = new Message();
                ems.what = 1;
                ems.obj = result;
                sagen.sendMessage(ems);
            }
        }).start();


    }

    // TODO Plan-B: REPLACEABLE JNI methods - integrate with mundo_core KeyAuth system
    // These methods should be replaced with mundo_core authentication bridge:
    // - Init(Context) -> Replace with MundoCore.getInstance(context).initialize()
    // - Check(Context, String) -> Replace with MundoCore.getInstance(context).authenticateKeyAuth(userKey)
    private static native void Init(Context mContext);
    private static native String Check(Context mContext, String userKey);
    
    }


