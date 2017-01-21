#pragma once
// MESSAGE CAP_STATUS PACKING

#define MAVLINK_MSG_ID_CAP_STATUS 180

MAVPACKED(
typedef struct __mavlink_cap_status_t {
 double home_latitude; /*< Home latitude*/
 double home_longitude; /*< Home longitude*/
 double home_altitude; /*< Home altitude*/
 uint16_t number_of_photos; /*< Number of photos taken in a mission*/
 uint16_t air_time; /*< Time since take-off*/
 uint16_t battery_voltage; /*< Battery voltage*/
 uint16_t battery_current; /*< Battery current*/
 uint16_t battery_remaining; /*< Battery remaining*/
 uint16_t global_status; /*< 0-airspeed-cal, 1-parachute, 2-home init, 3-landed, 4-speed override, 5-altitude ovveride, 6--failsafe, 7-battery low, 8-battery critical, 9-failsafe rc loss, 10-failsafe GPS loss, 11-failsafe data link loss, 12-failsafe mission,  13-failsafe offboard loss*/
}) mavlink_cap_status_t;

#define MAVLINK_MSG_ID_CAP_STATUS_LEN 36
#define MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN 36
#define MAVLINK_MSG_ID_180_LEN 36
#define MAVLINK_MSG_ID_180_MIN_LEN 36

#define MAVLINK_MSG_ID_CAP_STATUS_CRC 178
#define MAVLINK_MSG_ID_180_CRC 178



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAP_STATUS { \
    180, \
    "CAP_STATUS", \
    9, \
    {  { "home_latitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_cap_status_t, home_latitude) }, \
         { "home_longitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_cap_status_t, home_longitude) }, \
         { "home_altitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_cap_status_t, home_altitude) }, \
         { "number_of_photos", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_cap_status_t, number_of_photos) }, \
         { "air_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_cap_status_t, air_time) }, \
         { "battery_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_cap_status_t, battery_voltage) }, \
         { "battery_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_cap_status_t, battery_current) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_cap_status_t, battery_remaining) }, \
         { "global_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_cap_status_t, global_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAP_STATUS { \
    "CAP_STATUS", \
    9, \
    {  { "home_latitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 0, offsetof(mavlink_cap_status_t, home_latitude) }, \
         { "home_longitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_cap_status_t, home_longitude) }, \
         { "home_altitude", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_cap_status_t, home_altitude) }, \
         { "number_of_photos", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_cap_status_t, number_of_photos) }, \
         { "air_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_cap_status_t, air_time) }, \
         { "battery_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_cap_status_t, battery_voltage) }, \
         { "battery_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_cap_status_t, battery_current) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_cap_status_t, battery_remaining) }, \
         { "global_status", NULL, MAVLINK_TYPE_UINT16_T, 0, 34, offsetof(mavlink_cap_status_t, global_status) }, \
         } \
}
#endif

/**
 * @brief Pack a cap_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param number_of_photos Number of photos taken in a mission
 * @param air_time Time since take-off
 * @param battery_voltage Battery voltage
 * @param battery_current Battery current
 * @param battery_remaining Battery remaining
 * @param global_status 0-airspeed-cal, 1-parachute, 2-home init, 3-landed, 4-speed override, 5-altitude ovveride, 6--failsafe, 7-battery low, 8-battery critical, 9-failsafe rc loss, 10-failsafe GPS loss, 11-failsafe data link loss, 12-failsafe mission,  13-failsafe offboard loss
 * @param home_latitude Home latitude
 * @param home_longitude Home longitude
 * @param home_altitude Home altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cap_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t number_of_photos, uint16_t air_time, uint16_t battery_voltage, uint16_t battery_current, uint16_t battery_remaining, uint16_t global_status, double home_latitude, double home_longitude, double home_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAP_STATUS_LEN];
    _mav_put_double(buf, 0, home_latitude);
    _mav_put_double(buf, 8, home_longitude);
    _mav_put_double(buf, 16, home_altitude);
    _mav_put_uint16_t(buf, 24, number_of_photos);
    _mav_put_uint16_t(buf, 26, air_time);
    _mav_put_uint16_t(buf, 28, battery_voltage);
    _mav_put_uint16_t(buf, 30, battery_current);
    _mav_put_uint16_t(buf, 32, battery_remaining);
    _mav_put_uint16_t(buf, 34, global_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAP_STATUS_LEN);
#else
    mavlink_cap_status_t packet;
    packet.home_latitude = home_latitude;
    packet.home_longitude = home_longitude;
    packet.home_altitude = home_altitude;
    packet.number_of_photos = number_of_photos;
    packet.air_time = air_time;
    packet.battery_voltage = battery_voltage;
    packet.battery_current = battery_current;
    packet.battery_remaining = battery_remaining;
    packet.global_status = global_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAP_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAP_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAP_STATUS_LEN, MAVLINK_MSG_ID_CAP_STATUS_CRC);
}

/**
 * @brief Pack a cap_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param number_of_photos Number of photos taken in a mission
 * @param air_time Time since take-off
 * @param battery_voltage Battery voltage
 * @param battery_current Battery current
 * @param battery_remaining Battery remaining
 * @param global_status 0-airspeed-cal, 1-parachute, 2-home init, 3-landed, 4-speed override, 5-altitude ovveride, 6--failsafe, 7-battery low, 8-battery critical, 9-failsafe rc loss, 10-failsafe GPS loss, 11-failsafe data link loss, 12-failsafe mission,  13-failsafe offboard loss
 * @param home_latitude Home latitude
 * @param home_longitude Home longitude
 * @param home_altitude Home altitude
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cap_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t number_of_photos,uint16_t air_time,uint16_t battery_voltage,uint16_t battery_current,uint16_t battery_remaining,uint16_t global_status,double home_latitude,double home_longitude,double home_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAP_STATUS_LEN];
    _mav_put_double(buf, 0, home_latitude);
    _mav_put_double(buf, 8, home_longitude);
    _mav_put_double(buf, 16, home_altitude);
    _mav_put_uint16_t(buf, 24, number_of_photos);
    _mav_put_uint16_t(buf, 26, air_time);
    _mav_put_uint16_t(buf, 28, battery_voltage);
    _mav_put_uint16_t(buf, 30, battery_current);
    _mav_put_uint16_t(buf, 32, battery_remaining);
    _mav_put_uint16_t(buf, 34, global_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAP_STATUS_LEN);
#else
    mavlink_cap_status_t packet;
    packet.home_latitude = home_latitude;
    packet.home_longitude = home_longitude;
    packet.home_altitude = home_altitude;
    packet.number_of_photos = number_of_photos;
    packet.air_time = air_time;
    packet.battery_voltage = battery_voltage;
    packet.battery_current = battery_current;
    packet.battery_remaining = battery_remaining;
    packet.global_status = global_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAP_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAP_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAP_STATUS_LEN, MAVLINK_MSG_ID_CAP_STATUS_CRC);
}

/**
 * @brief Encode a cap_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cap_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cap_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cap_status_t* cap_status)
{
    return mavlink_msg_cap_status_pack(system_id, component_id, msg, cap_status->number_of_photos, cap_status->air_time, cap_status->battery_voltage, cap_status->battery_current, cap_status->battery_remaining, cap_status->global_status, cap_status->home_latitude, cap_status->home_longitude, cap_status->home_altitude);
}

/**
 * @brief Encode a cap_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cap_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cap_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cap_status_t* cap_status)
{
    return mavlink_msg_cap_status_pack_chan(system_id, component_id, chan, msg, cap_status->number_of_photos, cap_status->air_time, cap_status->battery_voltage, cap_status->battery_current, cap_status->battery_remaining, cap_status->global_status, cap_status->home_latitude, cap_status->home_longitude, cap_status->home_altitude);
}

/**
 * @brief Send a cap_status message
 * @param chan MAVLink channel to send the message
 *
 * @param number_of_photos Number of photos taken in a mission
 * @param air_time Time since take-off
 * @param battery_voltage Battery voltage
 * @param battery_current Battery current
 * @param battery_remaining Battery remaining
 * @param global_status 0-airspeed-cal, 1-parachute, 2-home init, 3-landed, 4-speed override, 5-altitude ovveride, 6--failsafe, 7-battery low, 8-battery critical, 9-failsafe rc loss, 10-failsafe GPS loss, 11-failsafe data link loss, 12-failsafe mission,  13-failsafe offboard loss
 * @param home_latitude Home latitude
 * @param home_longitude Home longitude
 * @param home_altitude Home altitude
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cap_status_send(mavlink_channel_t chan, uint16_t number_of_photos, uint16_t air_time, uint16_t battery_voltage, uint16_t battery_current, uint16_t battery_remaining, uint16_t global_status, double home_latitude, double home_longitude, double home_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAP_STATUS_LEN];
    _mav_put_double(buf, 0, home_latitude);
    _mav_put_double(buf, 8, home_longitude);
    _mav_put_double(buf, 16, home_altitude);
    _mav_put_uint16_t(buf, 24, number_of_photos);
    _mav_put_uint16_t(buf, 26, air_time);
    _mav_put_uint16_t(buf, 28, battery_voltage);
    _mav_put_uint16_t(buf, 30, battery_current);
    _mav_put_uint16_t(buf, 32, battery_remaining);
    _mav_put_uint16_t(buf, 34, global_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_STATUS, buf, MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAP_STATUS_LEN, MAVLINK_MSG_ID_CAP_STATUS_CRC);
#else
    mavlink_cap_status_t packet;
    packet.home_latitude = home_latitude;
    packet.home_longitude = home_longitude;
    packet.home_altitude = home_altitude;
    packet.number_of_photos = number_of_photos;
    packet.air_time = air_time;
    packet.battery_voltage = battery_voltage;
    packet.battery_current = battery_current;
    packet.battery_remaining = battery_remaining;
    packet.global_status = global_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_STATUS, (const char *)&packet, MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAP_STATUS_LEN, MAVLINK_MSG_ID_CAP_STATUS_CRC);
#endif
}

/**
 * @brief Send a cap_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cap_status_send_struct(mavlink_channel_t chan, const mavlink_cap_status_t* cap_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cap_status_send(chan, cap_status->number_of_photos, cap_status->air_time, cap_status->battery_voltage, cap_status->battery_current, cap_status->battery_remaining, cap_status->global_status, cap_status->home_latitude, cap_status->home_longitude, cap_status->home_altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_STATUS, (const char *)cap_status, MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAP_STATUS_LEN, MAVLINK_MSG_ID_CAP_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAP_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cap_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t number_of_photos, uint16_t air_time, uint16_t battery_voltage, uint16_t battery_current, uint16_t battery_remaining, uint16_t global_status, double home_latitude, double home_longitude, double home_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_double(buf, 0, home_latitude);
    _mav_put_double(buf, 8, home_longitude);
    _mav_put_double(buf, 16, home_altitude);
    _mav_put_uint16_t(buf, 24, number_of_photos);
    _mav_put_uint16_t(buf, 26, air_time);
    _mav_put_uint16_t(buf, 28, battery_voltage);
    _mav_put_uint16_t(buf, 30, battery_current);
    _mav_put_uint16_t(buf, 32, battery_remaining);
    _mav_put_uint16_t(buf, 34, global_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_STATUS, buf, MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAP_STATUS_LEN, MAVLINK_MSG_ID_CAP_STATUS_CRC);
#else
    mavlink_cap_status_t *packet = (mavlink_cap_status_t *)msgbuf;
    packet->home_latitude = home_latitude;
    packet->home_longitude = home_longitude;
    packet->home_altitude = home_altitude;
    packet->number_of_photos = number_of_photos;
    packet->air_time = air_time;
    packet->battery_voltage = battery_voltage;
    packet->battery_current = battery_current;
    packet->battery_remaining = battery_remaining;
    packet->global_status = global_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_STATUS, (const char *)packet, MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAP_STATUS_LEN, MAVLINK_MSG_ID_CAP_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAP_STATUS UNPACKING


/**
 * @brief Get field number_of_photos from cap_status message
 *
 * @return Number of photos taken in a mission
 */
static inline uint16_t mavlink_msg_cap_status_get_number_of_photos(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field air_time from cap_status message
 *
 * @return Time since take-off
 */
static inline uint16_t mavlink_msg_cap_status_get_air_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field battery_voltage from cap_status message
 *
 * @return Battery voltage
 */
static inline uint16_t mavlink_msg_cap_status_get_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field battery_current from cap_status message
 *
 * @return Battery current
 */
static inline uint16_t mavlink_msg_cap_status_get_battery_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Get field battery_remaining from cap_status message
 *
 * @return Battery remaining
 */
static inline uint16_t mavlink_msg_cap_status_get_battery_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field global_status from cap_status message
 *
 * @return 0-airspeed-cal, 1-parachute, 2-home init, 3-landed, 4-speed override, 5-altitude ovveride, 6--failsafe, 7-battery low, 8-battery critical, 9-failsafe rc loss, 10-failsafe GPS loss, 11-failsafe data link loss, 12-failsafe mission,  13-failsafe offboard loss
 */
static inline uint16_t mavlink_msg_cap_status_get_global_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  34);
}

/**
 * @brief Get field home_latitude from cap_status message
 *
 * @return Home latitude
 */
static inline double mavlink_msg_cap_status_get_home_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  0);
}

/**
 * @brief Get field home_longitude from cap_status message
 *
 * @return Home longitude
 */
static inline double mavlink_msg_cap_status_get_home_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field home_altitude from cap_status message
 *
 * @return Home altitude
 */
static inline double mavlink_msg_cap_status_get_home_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Decode a cap_status message into a struct
 *
 * @param msg The message to decode
 * @param cap_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_cap_status_decode(const mavlink_message_t* msg, mavlink_cap_status_t* cap_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cap_status->home_latitude = mavlink_msg_cap_status_get_home_latitude(msg);
    cap_status->home_longitude = mavlink_msg_cap_status_get_home_longitude(msg);
    cap_status->home_altitude = mavlink_msg_cap_status_get_home_altitude(msg);
    cap_status->number_of_photos = mavlink_msg_cap_status_get_number_of_photos(msg);
    cap_status->air_time = mavlink_msg_cap_status_get_air_time(msg);
    cap_status->battery_voltage = mavlink_msg_cap_status_get_battery_voltage(msg);
    cap_status->battery_current = mavlink_msg_cap_status_get_battery_current(msg);
    cap_status->battery_remaining = mavlink_msg_cap_status_get_battery_remaining(msg);
    cap_status->global_status = mavlink_msg_cap_status_get_global_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAP_STATUS_LEN? msg->len : MAVLINK_MSG_ID_CAP_STATUS_LEN;
        memset(cap_status, 0, MAVLINK_MSG_ID_CAP_STATUS_LEN);
    memcpy(cap_status, _MAV_PAYLOAD(msg), len);
#endif
}
