#pragma once
// MESSAGE MISSION_HASH PACKING

#define MAVLINK_MSG_ID_MISSION_HASH 183

MAVPACKED(
typedef struct __mavlink_mission_hash_t {
 uint32_t hash; /*< Hash value*/
 uint8_t target_system; /*< System which should execute the command*/
 uint8_t target_component; /*< Component which should execute the command, 0 for all components*/
 uint8_t request; /*< Set to 1 for request, 0 for sending the value*/
}) mavlink_mission_hash_t;

#define MAVLINK_MSG_ID_MISSION_HASH_LEN 7
#define MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN 7
#define MAVLINK_MSG_ID_183_LEN 7
#define MAVLINK_MSG_ID_183_MIN_LEN 7

#define MAVLINK_MSG_ID_MISSION_HASH_CRC 207
#define MAVLINK_MSG_ID_183_CRC 207



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MISSION_HASH { \
    183, \
    "MISSION_HASH", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mission_hash_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mission_hash_t, target_component) }, \
         { "request", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mission_hash_t, request) }, \
         { "hash", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mission_hash_t, hash) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MISSION_HASH { \
    "MISSION_HASH", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mission_hash_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_mission_hash_t, target_component) }, \
         { "request", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_mission_hash_t, request) }, \
         { "hash", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mission_hash_t, hash) }, \
         } \
}
#endif

/**
 * @brief Pack a mission_hash message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param request Set to 1 for request, 0 for sending the value
 * @param hash Hash value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_hash_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t request, uint32_t hash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_HASH_LEN];
    _mav_put_uint32_t(buf, 0, hash);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, request);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_HASH_LEN);
#else
    mavlink_mission_hash_t packet;
    packet.hash = hash;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.request = request;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_HASH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_HASH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN, MAVLINK_MSG_ID_MISSION_HASH_LEN, MAVLINK_MSG_ID_MISSION_HASH_CRC);
}

/**
 * @brief Pack a mission_hash message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param request Set to 1 for request, 0 for sending the value
 * @param hash Hash value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mission_hash_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t request,uint32_t hash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_HASH_LEN];
    _mav_put_uint32_t(buf, 0, hash);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, request);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_HASH_LEN);
#else
    mavlink_mission_hash_t packet;
    packet.hash = hash;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.request = request;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MISSION_HASH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MISSION_HASH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN, MAVLINK_MSG_ID_MISSION_HASH_LEN, MAVLINK_MSG_ID_MISSION_HASH_CRC);
}

/**
 * @brief Encode a mission_hash struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mission_hash C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_hash_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mission_hash_t* mission_hash)
{
    return mavlink_msg_mission_hash_pack(system_id, component_id, msg, mission_hash->target_system, mission_hash->target_component, mission_hash->request, mission_hash->hash);
}

/**
 * @brief Encode a mission_hash struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_hash C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mission_hash_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mission_hash_t* mission_hash)
{
    return mavlink_msg_mission_hash_pack_chan(system_id, component_id, chan, msg, mission_hash->target_system, mission_hash->target_component, mission_hash->request, mission_hash->hash);
}

/**
 * @brief Send a mission_hash message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param request Set to 1 for request, 0 for sending the value
 * @param hash Hash value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mission_hash_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t request, uint32_t hash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MISSION_HASH_LEN];
    _mav_put_uint32_t(buf, 0, hash);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, request);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_HASH, buf, MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN, MAVLINK_MSG_ID_MISSION_HASH_LEN, MAVLINK_MSG_ID_MISSION_HASH_CRC);
#else
    mavlink_mission_hash_t packet;
    packet.hash = hash;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.request = request;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_HASH, (const char *)&packet, MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN, MAVLINK_MSG_ID_MISSION_HASH_LEN, MAVLINK_MSG_ID_MISSION_HASH_CRC);
#endif
}

/**
 * @brief Send a mission_hash message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mission_hash_send_struct(mavlink_channel_t chan, const mavlink_mission_hash_t* mission_hash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mission_hash_send(chan, mission_hash->target_system, mission_hash->target_component, mission_hash->request, mission_hash->hash);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_HASH, (const char *)mission_hash, MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN, MAVLINK_MSG_ID_MISSION_HASH_LEN, MAVLINK_MSG_ID_MISSION_HASH_CRC);
#endif
}

#if MAVLINK_MSG_ID_MISSION_HASH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mission_hash_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t request, uint32_t hash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, hash);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, request);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_HASH, buf, MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN, MAVLINK_MSG_ID_MISSION_HASH_LEN, MAVLINK_MSG_ID_MISSION_HASH_CRC);
#else
    mavlink_mission_hash_t *packet = (mavlink_mission_hash_t *)msgbuf;
    packet->hash = hash;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->request = request;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MISSION_HASH, (const char *)packet, MAVLINK_MSG_ID_MISSION_HASH_MIN_LEN, MAVLINK_MSG_ID_MISSION_HASH_LEN, MAVLINK_MSG_ID_MISSION_HASH_CRC);
#endif
}
#endif

#endif

// MESSAGE MISSION_HASH UNPACKING


/**
 * @brief Get field target_system from mission_hash message
 *
 * @return System which should execute the command
 */
static inline uint8_t mavlink_msg_mission_hash_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_component from mission_hash message
 *
 * @return Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_mission_hash_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field request from mission_hash message
 *
 * @return Set to 1 for request, 0 for sending the value
 */
static inline uint8_t mavlink_msg_mission_hash_get_request(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field hash from mission_hash message
 *
 * @return Hash value
 */
static inline uint32_t mavlink_msg_mission_hash_get_hash(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a mission_hash message into a struct
 *
 * @param msg The message to decode
 * @param mission_hash C-struct to decode the message contents into
 */
static inline void mavlink_msg_mission_hash_decode(const mavlink_message_t* msg, mavlink_mission_hash_t* mission_hash)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mission_hash->hash = mavlink_msg_mission_hash_get_hash(msg);
    mission_hash->target_system = mavlink_msg_mission_hash_get_target_system(msg);
    mission_hash->target_component = mavlink_msg_mission_hash_get_target_component(msg);
    mission_hash->request = mavlink_msg_mission_hash_get_request(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MISSION_HASH_LEN? msg->len : MAVLINK_MSG_ID_MISSION_HASH_LEN;
        memset(mission_hash, 0, MAVLINK_MSG_ID_MISSION_HASH_LEN);
    memcpy(mission_hash, _MAV_PAYLOAD(msg), len);
#endif
}
