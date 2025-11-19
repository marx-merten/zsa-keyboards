#define CHORDAL_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 199

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "bln45/yowPwo"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 1
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60

