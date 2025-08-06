#ifndef ANTIHOOK_BRIDGE_H
#define ANTIHOOK_BRIDGE_H

namespace Mundo {
    namespace Integration {
        
        /**
         * Bridge to existing enhanced anti-hook components
         * Allows mundo_core to integrate with completed Phase 1 security features
         */
        class AntiHookBridge {
        public:
            /**
             * Initialize enhanced anti-hook system
             * @return true if initialization successful
             */
            static bool initializeEnhancedAntiHook();
            
            /**
             * Get current threat level from anti-hook system
             * @return threat level (0 = no threats, higher = more threats)
             */
            static int getCurrentThreatLevel();
        };
        
    } // namespace Integration
} // namespace Mundo

#endif // ANTIHOOK_BRIDGE_H
