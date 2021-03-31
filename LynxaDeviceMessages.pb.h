/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_LYNXADEVICEMESSAGES_PB_H_INCLUDED
#define PB_LYNXADEVICEMESSAGES_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _GnggaMessage_100 {
    uint32_t timeHours;
    uint32_t timeMinutes;
    uint32_t timeSeconds;
    float latitudeMinutes;
    uint32_t latitudeDegrees;
    uint32_t latitudeCardinalAscii;
    float longitudeMinutes;
    uint32_t longitudeDegrees;
    uint32_t longitudeCardinalAscii;
    uint32_t numberOfSatellitesInUse;
} GnggaMessage_100;

typedef struct _LogMessage_101 {
    uint32_t timestamp;
    char logMessage[129];
} LogMessage_101;

typedef struct _ModemParameters_103 {
    char cell_id[17];
    uint32_t phys_cell_id;
} ModemParameters_103;

typedef struct _WifiStation {
    pb_byte_t bssid[6];
    int32_t rssi;
} WifiStation;

typedef struct _WifiStationList_102 {
    pb_size_t wifiStations_count;
    WifiStation wifiStations[12];
} WifiStationList_102;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define GnggaMessage_100_init_default            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define LogMessage_101_init_default              {0, ""}
#define WifiStation_init_default                 {{0}, 0}
#define WifiStationList_102_init_default         {0, {WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default, WifiStation_init_default}}
#define ModemParameters_103_init_default         {"", 0}
#define GnggaMessage_100_init_zero               {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define LogMessage_101_init_zero                 {0, ""}
#define WifiStation_init_zero                    {{0}, 0}
#define WifiStationList_102_init_zero            {0, {WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero, WifiStation_init_zero}}
#define ModemParameters_103_init_zero            {"", 0}

/* Field tags (for use in manual encoding/decoding) */
#define GnggaMessage_100_timeHours_tag           1
#define GnggaMessage_100_timeMinutes_tag         2
#define GnggaMessage_100_timeSeconds_tag         3
#define GnggaMessage_100_latitudeMinutes_tag     4
#define GnggaMessage_100_latitudeDegrees_tag     5
#define GnggaMessage_100_latitudeCardinalAscii_tag 6
#define GnggaMessage_100_longitudeMinutes_tag    7
#define GnggaMessage_100_longitudeDegrees_tag    8
#define GnggaMessage_100_longitudeCardinalAscii_tag 9
#define GnggaMessage_100_numberOfSatellitesInUse_tag 10
#define LogMessage_101_timestamp_tag             1
#define LogMessage_101_logMessage_tag            2
#define ModemParameters_103_cell_id_tag          1
#define ModemParameters_103_phys_cell_id_tag     2
#define WifiStation_bssid_tag                    1
#define WifiStation_rssi_tag                     2
#define WifiStationList_102_wifiStations_tag     1

/* Struct field encoding specification for nanopb */
#define GnggaMessage_100_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   timeHours,         1) \
X(a, STATIC,   REQUIRED, UINT32,   timeMinutes,       2) \
X(a, STATIC,   REQUIRED, UINT32,   timeSeconds,       3) \
X(a, STATIC,   REQUIRED, FLOAT,    latitudeMinutes,   4) \
X(a, STATIC,   REQUIRED, UINT32,   latitudeDegrees,   5) \
X(a, STATIC,   REQUIRED, UINT32,   latitudeCardinalAscii,   6) \
X(a, STATIC,   REQUIRED, FLOAT,    longitudeMinutes,   7) \
X(a, STATIC,   REQUIRED, UINT32,   longitudeDegrees,   8) \
X(a, STATIC,   REQUIRED, UINT32,   longitudeCardinalAscii,   9) \
X(a, STATIC,   REQUIRED, UINT32,   numberOfSatellitesInUse,  10)
#define GnggaMessage_100_CALLBACK NULL
#define GnggaMessage_100_DEFAULT NULL

#define LogMessage_101_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   timestamp,         1) \
X(a, STATIC,   REQUIRED, STRING,   logMessage,        2)
#define LogMessage_101_CALLBACK NULL
#define LogMessage_101_DEFAULT NULL

#define WifiStation_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, FIXED_LENGTH_BYTES, bssid,             1) \
X(a, STATIC,   REQUIRED, INT32,    rssi,              2)
#define WifiStation_CALLBACK NULL
#define WifiStation_DEFAULT NULL

#define WifiStationList_102_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, MESSAGE,  wifiStations,      1)
#define WifiStationList_102_CALLBACK NULL
#define WifiStationList_102_DEFAULT NULL
#define WifiStationList_102_wifiStations_MSGTYPE WifiStation

#define ModemParameters_103_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, STRING,   cell_id,           1) \
X(a, STATIC,   REQUIRED, UINT32,   phys_cell_id,      2)
#define ModemParameters_103_CALLBACK NULL
#define ModemParameters_103_DEFAULT NULL

extern const pb_msgdesc_t GnggaMessage_100_msg;
extern const pb_msgdesc_t LogMessage_101_msg;
extern const pb_msgdesc_t WifiStation_msg;
extern const pb_msgdesc_t WifiStationList_102_msg;
extern const pb_msgdesc_t ModemParameters_103_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define GnggaMessage_100_fields &GnggaMessage_100_msg
#define LogMessage_101_fields &LogMessage_101_msg
#define WifiStation_fields &WifiStation_msg
#define WifiStationList_102_fields &WifiStationList_102_msg
#define ModemParameters_103_fields &ModemParameters_103_msg

/* Maximum encoded size of messages (where known) */
#define GnggaMessage_100_size                    58
#define LogMessage_101_size                      137
#define WifiStation_size                         19
#define WifiStationList_102_size                 252
#define ModemParameters_103_size                 24

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
