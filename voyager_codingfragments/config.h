/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 199

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"mmKQX/yva50"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_16BIT
#define COMBO_COUNT 1
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

// additional settings that are not in the default keymap or the Oryx configurator
//

#define PERMISSIVE_HOLD
#define ACHORDION_STREAK
#define QUICK_TAP_TERM_PER_KEY


// Features used in the keymap
// https://getreuer.info/posts/keyboards/achordion/index.html