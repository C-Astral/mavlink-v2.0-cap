#pragma once
// MESSAGE TERRAIN_ELEVATION PACKING

#define MAVLINK_MSG_ID_TERRAIN_ELEVATION 184

MAVPACKED(
typedef struct __mavlink_terrain_elevation_t {
 int16_t terrain_elevation; /*< Terrain elevation*/
 uint8_t target_system; /*< System which should execute the command*/
 uint8_t target_component; /*< Component which should execute the command, 0 for all components*/
}) mavlink_terrain_elevation_t;

#define MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN 4
#define MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN 4
#define MAVLINK_MSG_ID_184_LEN 4
#define MAVLINK_MSG_ID_184_MIN_LEN 4

#define MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC 242
#define MAVLINK_MSG_ID_184_CRC 242



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TERRAIN_ELEVATION { \
    184, \
    "TERRAIN_ELEVATION", \
    3, \
    {  { "terrain_elevation", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_terrain_elevation_t, terrain_elevation) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_terrain_elevation_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_terrain_elevation_t, target_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TERRAIN_ELEVATION { \
    "TERRAIN_ELEVATION", \
    3, \
    {  { "terrain_elevation", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_terrain_elevation_t, terrain_elevation) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_terrain_elevation_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_terrain_elevation_t, target_component) }, \
         } \
}
#endif

/**
 * @brief Pack a terrain_elevation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param terrain_elevation Terrain elevation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_terrain_elevation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, int16_t terrain_elevation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN];
    _mav_put_int16_t(buf, 0, terrain_elevation);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN);
#else
    mavlink_terrain_elevation_t packet;
    packet.terrain_elevation = terrain_elevation;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TERRAIN_ELEVATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC);
}

/**
 * @brief Pack a terrain_elevation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param terrain_elevation Terrain elevation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_terrain_elevation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,int16_t terrain_elevation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN];
    _mav_put_int16_t(buf, 0, terrain_elevation);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN);
#else
    mavlink_terrain_elevation_t packet;
    packet.terrain_elevation = terrain_elevation;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TERRAIN_ELEVATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC);
}

/**
 * @brief Encode a terrain_elevation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param terrain_elevation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_terrain_elevation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_terrain_elevation_t* terrain_elevation)
{
    return mavlink_msg_terrain_elevation_pack(system_id, component_id, msg, terrain_elevation->target_system, terrain_elevation->target_component, terrain_elevation->terrain_elevation);
}

/**
 * @brief Encode a terrain_elevation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param terrain_elevation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_terrain_elevation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_terrain_elevation_t* terrain_elevation)
{
    return mavlink_msg_terrain_elevation_pack_chan(system_id, component_id, chan, msg, terrain_elevation->target_system, terrain_elevation->target_component, terrain_elevation->terrain_elevation);
}

/**
 * @brief Send a terrain_elevation message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param terrain_elevation Terrain elevation
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_terrain_elevation_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, int16_t terrain_elevation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN];
    _mav_put_int16_t(buf, 0, terrain_elevation);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TERRAIN_ELEVATION, buf, MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC);
#else
    mavlink_terrain_elevation_t packet;
    packet.terrain_elevation = terrain_elevation;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TERRAIN_ELEVATION, (const char *)&packet, MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC);
#endif
}

/**
 * @brief Send a terrain_elevation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_terrain_elevation_send_struct(mavlink_channel_t chan, const mavlink_terrain_elevation_t* terrain_elevation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_terrain_elevation_send(chan, terrain_elevation->target_system, terrain_elevation->target_component, terrain_elevation->terrain_elevation);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TERRAIN_ELEVATION, (const char *)terrain_elevation, MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_terrain_elevation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, int16_t terrain_elevation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, terrain_elevation);
    _mav_put_uint8_t(buf, 2, target_system);
    _mav_put_uint8_t(buf, 3, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TERRAIN_ELEVATION, buf, MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC);
#else
    mavlink_terrain_elevation_t *packet = (mavlink_terrain_elevation_t *)msgbuf;
    packet->terrain_elevation = terrain_elevation;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TERRAIN_ELEVATION, (const char *)packet, MAVLINK_MSG_ID_TERRAIN_ELEVATION_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN, MAVLINK_MSG_ID_TERRAIN_ELEVATION_CRC);
#endif
}
#endif

#endif

// MESSAGE TERRAIN_ELEVATION UNPACKING


/**
 * @brief Get field target_system from terrain_elevation message
 *
 * @return System which should execute the command
 */
static inline uint8_t mavlink_msg_terrain_elevation_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field target_component from terrain_elevation message
 *
 * @return Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_terrain_elevation_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field terrain_elevation from terrain_elevation message
 *
 * @return Terrain elevation
 */
static inline int16_t mavlink_msg_terrain_elevation_get_terrain_elevation(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Decode a terrain_elevation message into a struct
 *
 * @param msg The message to decode
 * @param terrain_elevation C-struct to decode the message contents into
 */
static inline void mavlink_msg_terrain_elevation_decode(const mavlink_message_t* msg, mavlink_terrain_elevation_t* terrain_elevation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    terrain_elevation->terrain_elevation = mavlink_msg_terrain_elevation_get_terrain_elevation(msg);
    terrain_elevation->target_system = mavlink_msg_terrain_elevation_get_target_system(msg);
    terrain_elevation->target_component = mavlink_msg_terrain_elevation_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN? msg->len : MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN;
        memset(terrain_elevation, 0, MAVLINK_MSG_ID_TERRAIN_ELEVATION_LEN);
    memcpy(terrain_elevation, _MAV_PAYLOAD(msg), len);
#endif
}
