﻿/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.7 */

#ifndef PB_MSG_PB_H_INCLUDED
#define PB_MSG_PB_H_INCLUDED
#include "pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _SensorType {
    SensorType_None = 0,
    SensorType_IN_CONTROL = 1,
    SensorType_SET_HUM_TEMP_TICK = 2,
    SensorType_LED_SWITCH = 3,
    SensorType_BEEP = 4
} SensorType;

/* Struct definitions */
/* temperature and humidity */
typedef struct _TemperatureAndHumidity {
    float temperature;
    float humidity;
} TemperatureAndHumidity;

typedef struct _LedSwitch {
    bool on;
} LedSwitch;

typedef struct _SensorIn {
    SensorType type;
    bool has_tick;
    int32_t tick;
} SensorIn;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _SensorType_MIN SensorType_None
#define _SensorType_MAX SensorType_BEEP
#define _SensorType_ARRAYSIZE ((SensorType)(SensorType_BEEP+1))



#define SensorIn_type_ENUMTYPE SensorType


/* Initializer values for message structs */
#define TemperatureAndHumidity_init_default      {0, 0}
#define LedSwitch_init_default                   {0}
#define SensorIn_init_default                    {_SensorType_MIN, false, 0}
#define TemperatureAndHumidity_init_zero         {0, 0}
#define LedSwitch_init_zero                      {0}
#define SensorIn_init_zero                       {_SensorType_MIN, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define TemperatureAndHumidity_temperature_tag   1
#define TemperatureAndHumidity_humidity_tag      2
#define LedSwitch_on_tag                         1
#define SensorIn_type_tag                        1
#define SensorIn_tick_tag                        2

/* Struct field encoding specification for nanopb */
#define TemperatureAndHumidity_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    temperature,       1) \
X(a, STATIC,   SINGULAR, FLOAT,    humidity,          2)
#define TemperatureAndHumidity_CALLBACK NULL
#define TemperatureAndHumidity_DEFAULT NULL

#define LedSwitch_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     on,                1)
#define LedSwitch_CALLBACK NULL
#define LedSwitch_DEFAULT NULL

#define SensorIn_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    type,              1) \
X(a, STATIC,   OPTIONAL, INT32,    tick,              2)
#define SensorIn_CALLBACK NULL
#define SensorIn_DEFAULT NULL

extern const pb_msgdesc_t TemperatureAndHumidity_msg;
extern const pb_msgdesc_t LedSwitch_msg;
extern const pb_msgdesc_t SensorIn_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define TemperatureAndHumidity_fields &TemperatureAndHumidity_msg
#define LedSwitch_fields &LedSwitch_msg
#define SensorIn_fields &SensorIn_msg

/* Maximum encoded size of messages (where known) */
#define LedSwitch_size                           2
#define SensorIn_size                            13
#define TemperatureAndHumidity_size              10

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
