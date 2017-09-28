#pragma once
// MESSAGE CAP_PARAMS PACKING

#define MAVLINK_MSG_ID_CAP_PARAMS 185

MAVPACKED(
typedef struct __mavlink_cap_params_t {
 uint32_t NAV_DLL_ACT; /*< Set data link loss failsafe mode*/
 uint32_t COM_DL_LOSS_T; /*< Datalink loss time threshold*/
 float COM_TER_FLS_AGL; /*< Minimum altitude (AGL) for failsafe*/
 float COM_TER_FLS_CLMB; /*< Altitude override for min HAG failsafe*/
 float COM_TER_CRIT_AGL; /*< Altitude override for min HAG failsafe*/
 uint32_t COM_TER_FLS_ENBL; /*< Altitude override for min HAG*/
 uint32_t COM_LOW_BAT_ACT; /*< Battery failsafe mode*/
 float BAT_LOW_THR; /*< Low threshold*/
 float BAT_CRIT_THR; /*< Critical threshold*/
 uint32_t PARAM_1_UINT32; /*< PARAM_1_UINT32*/
 uint32_t PARAM_2_UINT32; /*< PARAM_2_UINT32*/
 float PARAM_1_FLOAT; /*< PARAM_1_FLOAT*/
 float PARAM_2_FLOAT; /*< PARAM_2_FLOAT*/
 uint8_t target_system; /*< System which should execute the command*/
 uint8_t target_component; /*< Component which should execute the command, 0 for all components*/
 uint8_t Set; /*< 1-set, 0-get*/
}) mavlink_cap_params_t;

#define MAVLINK_MSG_ID_CAP_PARAMS_LEN 55
#define MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN 55
#define MAVLINK_MSG_ID_185_LEN 55
#define MAVLINK_MSG_ID_185_MIN_LEN 55

#define MAVLINK_MSG_ID_CAP_PARAMS_CRC 10
#define MAVLINK_MSG_ID_185_CRC 10



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAP_PARAMS { \
    185, \
    "CAP_PARAMS", \
    16, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_cap_params_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_cap_params_t, target_component) }, \
         { "Set", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_cap_params_t, Set) }, \
         { "NAV_DLL_ACT", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cap_params_t, NAV_DLL_ACT) }, \
         { "COM_DL_LOSS_T", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_cap_params_t, COM_DL_LOSS_T) }, \
         { "COM_TER_FLS_AGL", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cap_params_t, COM_TER_FLS_AGL) }, \
         { "COM_TER_FLS_CLMB", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_cap_params_t, COM_TER_FLS_CLMB) }, \
         { "COM_TER_CRIT_AGL", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cap_params_t, COM_TER_CRIT_AGL) }, \
         { "COM_TER_FLS_ENBL", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_cap_params_t, COM_TER_FLS_ENBL) }, \
         { "COM_LOW_BAT_ACT", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_cap_params_t, COM_LOW_BAT_ACT) }, \
         { "BAT_LOW_THR", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_cap_params_t, BAT_LOW_THR) }, \
         { "BAT_CRIT_THR", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_cap_params_t, BAT_CRIT_THR) }, \
         { "PARAM_1_UINT32", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_cap_params_t, PARAM_1_UINT32) }, \
         { "PARAM_2_UINT32", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_cap_params_t, PARAM_2_UINT32) }, \
         { "PARAM_1_FLOAT", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_cap_params_t, PARAM_1_FLOAT) }, \
         { "PARAM_2_FLOAT", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_cap_params_t, PARAM_2_FLOAT) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAP_PARAMS { \
    "CAP_PARAMS", \
    16, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_cap_params_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_cap_params_t, target_component) }, \
         { "Set", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_cap_params_t, Set) }, \
         { "NAV_DLL_ACT", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cap_params_t, NAV_DLL_ACT) }, \
         { "COM_DL_LOSS_T", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_cap_params_t, COM_DL_LOSS_T) }, \
         { "COM_TER_FLS_AGL", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cap_params_t, COM_TER_FLS_AGL) }, \
         { "COM_TER_FLS_CLMB", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_cap_params_t, COM_TER_FLS_CLMB) }, \
         { "COM_TER_CRIT_AGL", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cap_params_t, COM_TER_CRIT_AGL) }, \
         { "COM_TER_FLS_ENBL", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_cap_params_t, COM_TER_FLS_ENBL) }, \
         { "COM_LOW_BAT_ACT", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_cap_params_t, COM_LOW_BAT_ACT) }, \
         { "BAT_LOW_THR", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_cap_params_t, BAT_LOW_THR) }, \
         { "BAT_CRIT_THR", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_cap_params_t, BAT_CRIT_THR) }, \
         { "PARAM_1_UINT32", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_cap_params_t, PARAM_1_UINT32) }, \
         { "PARAM_2_UINT32", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_cap_params_t, PARAM_2_UINT32) }, \
         { "PARAM_1_FLOAT", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_cap_params_t, PARAM_1_FLOAT) }, \
         { "PARAM_2_FLOAT", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_cap_params_t, PARAM_2_FLOAT) }, \
         } \
}
#endif

/**
 * @brief Pack a cap_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param Set 1-set, 0-get
 * @param NAV_DLL_ACT Set data link loss failsafe mode
 * @param COM_DL_LOSS_T Datalink loss time threshold
 * @param COM_TER_FLS_AGL Minimum altitude (AGL) for failsafe
 * @param COM_TER_FLS_CLMB Altitude override for min HAG failsafe
 * @param COM_TER_CRIT_AGL Altitude override for min HAG failsafe
 * @param COM_TER_FLS_ENBL Altitude override for min HAG
 * @param COM_LOW_BAT_ACT Battery failsafe mode
 * @param BAT_LOW_THR Low threshold
 * @param BAT_CRIT_THR Critical threshold
 * @param PARAM_1_UINT32 PARAM_1_UINT32
 * @param PARAM_2_UINT32 PARAM_2_UINT32
 * @param PARAM_1_FLOAT PARAM_1_FLOAT
 * @param PARAM_2_FLOAT PARAM_2_FLOAT
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cap_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t Set, uint32_t NAV_DLL_ACT, uint32_t COM_DL_LOSS_T, float COM_TER_FLS_AGL, float COM_TER_FLS_CLMB, float COM_TER_CRIT_AGL, uint32_t COM_TER_FLS_ENBL, uint32_t COM_LOW_BAT_ACT, float BAT_LOW_THR, float BAT_CRIT_THR, uint32_t PARAM_1_UINT32, uint32_t PARAM_2_UINT32, float PARAM_1_FLOAT, float PARAM_2_FLOAT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAP_PARAMS_LEN];
    _mav_put_uint32_t(buf, 0, NAV_DLL_ACT);
    _mav_put_uint32_t(buf, 4, COM_DL_LOSS_T);
    _mav_put_float(buf, 8, COM_TER_FLS_AGL);
    _mav_put_float(buf, 12, COM_TER_FLS_CLMB);
    _mav_put_float(buf, 16, COM_TER_CRIT_AGL);
    _mav_put_uint32_t(buf, 20, COM_TER_FLS_ENBL);
    _mav_put_uint32_t(buf, 24, COM_LOW_BAT_ACT);
    _mav_put_float(buf, 28, BAT_LOW_THR);
    _mav_put_float(buf, 32, BAT_CRIT_THR);
    _mav_put_uint32_t(buf, 36, PARAM_1_UINT32);
    _mav_put_uint32_t(buf, 40, PARAM_2_UINT32);
    _mav_put_float(buf, 44, PARAM_1_FLOAT);
    _mav_put_float(buf, 48, PARAM_2_FLOAT);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, Set);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAP_PARAMS_LEN);
#else
    mavlink_cap_params_t packet;
    packet.NAV_DLL_ACT = NAV_DLL_ACT;
    packet.COM_DL_LOSS_T = COM_DL_LOSS_T;
    packet.COM_TER_FLS_AGL = COM_TER_FLS_AGL;
    packet.COM_TER_FLS_CLMB = COM_TER_FLS_CLMB;
    packet.COM_TER_CRIT_AGL = COM_TER_CRIT_AGL;
    packet.COM_TER_FLS_ENBL = COM_TER_FLS_ENBL;
    packet.COM_LOW_BAT_ACT = COM_LOW_BAT_ACT;
    packet.BAT_LOW_THR = BAT_LOW_THR;
    packet.BAT_CRIT_THR = BAT_CRIT_THR;
    packet.PARAM_1_UINT32 = PARAM_1_UINT32;
    packet.PARAM_2_UINT32 = PARAM_2_UINT32;
    packet.PARAM_1_FLOAT = PARAM_1_FLOAT;
    packet.PARAM_2_FLOAT = PARAM_2_FLOAT;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.Set = Set;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAP_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAP_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN, MAVLINK_MSG_ID_CAP_PARAMS_LEN, MAVLINK_MSG_ID_CAP_PARAMS_CRC);
}

/**
 * @brief Pack a cap_params message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param Set 1-set, 0-get
 * @param NAV_DLL_ACT Set data link loss failsafe mode
 * @param COM_DL_LOSS_T Datalink loss time threshold
 * @param COM_TER_FLS_AGL Minimum altitude (AGL) for failsafe
 * @param COM_TER_FLS_CLMB Altitude override for min HAG failsafe
 * @param COM_TER_CRIT_AGL Altitude override for min HAG failsafe
 * @param COM_TER_FLS_ENBL Altitude override for min HAG
 * @param COM_LOW_BAT_ACT Battery failsafe mode
 * @param BAT_LOW_THR Low threshold
 * @param BAT_CRIT_THR Critical threshold
 * @param PARAM_1_UINT32 PARAM_1_UINT32
 * @param PARAM_2_UINT32 PARAM_2_UINT32
 * @param PARAM_1_FLOAT PARAM_1_FLOAT
 * @param PARAM_2_FLOAT PARAM_2_FLOAT
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cap_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t Set,uint32_t NAV_DLL_ACT,uint32_t COM_DL_LOSS_T,float COM_TER_FLS_AGL,float COM_TER_FLS_CLMB,float COM_TER_CRIT_AGL,uint32_t COM_TER_FLS_ENBL,uint32_t COM_LOW_BAT_ACT,float BAT_LOW_THR,float BAT_CRIT_THR,uint32_t PARAM_1_UINT32,uint32_t PARAM_2_UINT32,float PARAM_1_FLOAT,float PARAM_2_FLOAT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAP_PARAMS_LEN];
    _mav_put_uint32_t(buf, 0, NAV_DLL_ACT);
    _mav_put_uint32_t(buf, 4, COM_DL_LOSS_T);
    _mav_put_float(buf, 8, COM_TER_FLS_AGL);
    _mav_put_float(buf, 12, COM_TER_FLS_CLMB);
    _mav_put_float(buf, 16, COM_TER_CRIT_AGL);
    _mav_put_uint32_t(buf, 20, COM_TER_FLS_ENBL);
    _mav_put_uint32_t(buf, 24, COM_LOW_BAT_ACT);
    _mav_put_float(buf, 28, BAT_LOW_THR);
    _mav_put_float(buf, 32, BAT_CRIT_THR);
    _mav_put_uint32_t(buf, 36, PARAM_1_UINT32);
    _mav_put_uint32_t(buf, 40, PARAM_2_UINT32);
    _mav_put_float(buf, 44, PARAM_1_FLOAT);
    _mav_put_float(buf, 48, PARAM_2_FLOAT);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, Set);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAP_PARAMS_LEN);
#else
    mavlink_cap_params_t packet;
    packet.NAV_DLL_ACT = NAV_DLL_ACT;
    packet.COM_DL_LOSS_T = COM_DL_LOSS_T;
    packet.COM_TER_FLS_AGL = COM_TER_FLS_AGL;
    packet.COM_TER_FLS_CLMB = COM_TER_FLS_CLMB;
    packet.COM_TER_CRIT_AGL = COM_TER_CRIT_AGL;
    packet.COM_TER_FLS_ENBL = COM_TER_FLS_ENBL;
    packet.COM_LOW_BAT_ACT = COM_LOW_BAT_ACT;
    packet.BAT_LOW_THR = BAT_LOW_THR;
    packet.BAT_CRIT_THR = BAT_CRIT_THR;
    packet.PARAM_1_UINT32 = PARAM_1_UINT32;
    packet.PARAM_2_UINT32 = PARAM_2_UINT32;
    packet.PARAM_1_FLOAT = PARAM_1_FLOAT;
    packet.PARAM_2_FLOAT = PARAM_2_FLOAT;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.Set = Set;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAP_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAP_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN, MAVLINK_MSG_ID_CAP_PARAMS_LEN, MAVLINK_MSG_ID_CAP_PARAMS_CRC);
}

/**
 * @brief Encode a cap_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cap_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cap_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cap_params_t* cap_params)
{
    return mavlink_msg_cap_params_pack(system_id, component_id, msg, cap_params->target_system, cap_params->target_component, cap_params->Set, cap_params->NAV_DLL_ACT, cap_params->COM_DL_LOSS_T, cap_params->COM_TER_FLS_AGL, cap_params->COM_TER_FLS_CLMB, cap_params->COM_TER_CRIT_AGL, cap_params->COM_TER_FLS_ENBL, cap_params->COM_LOW_BAT_ACT, cap_params->BAT_LOW_THR, cap_params->BAT_CRIT_THR, cap_params->PARAM_1_UINT32, cap_params->PARAM_2_UINT32, cap_params->PARAM_1_FLOAT, cap_params->PARAM_2_FLOAT);
}

/**
 * @brief Encode a cap_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cap_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cap_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cap_params_t* cap_params)
{
    return mavlink_msg_cap_params_pack_chan(system_id, component_id, chan, msg, cap_params->target_system, cap_params->target_component, cap_params->Set, cap_params->NAV_DLL_ACT, cap_params->COM_DL_LOSS_T, cap_params->COM_TER_FLS_AGL, cap_params->COM_TER_FLS_CLMB, cap_params->COM_TER_CRIT_AGL, cap_params->COM_TER_FLS_ENBL, cap_params->COM_LOW_BAT_ACT, cap_params->BAT_LOW_THR, cap_params->BAT_CRIT_THR, cap_params->PARAM_1_UINT32, cap_params->PARAM_2_UINT32, cap_params->PARAM_1_FLOAT, cap_params->PARAM_2_FLOAT);
}

/**
 * @brief Send a cap_params message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System which should execute the command
 * @param target_component Component which should execute the command, 0 for all components
 * @param Set 1-set, 0-get
 * @param NAV_DLL_ACT Set data link loss failsafe mode
 * @param COM_DL_LOSS_T Datalink loss time threshold
 * @param COM_TER_FLS_AGL Minimum altitude (AGL) for failsafe
 * @param COM_TER_FLS_CLMB Altitude override for min HAG failsafe
 * @param COM_TER_CRIT_AGL Altitude override for min HAG failsafe
 * @param COM_TER_FLS_ENBL Altitude override for min HAG
 * @param COM_LOW_BAT_ACT Battery failsafe mode
 * @param BAT_LOW_THR Low threshold
 * @param BAT_CRIT_THR Critical threshold
 * @param PARAM_1_UINT32 PARAM_1_UINT32
 * @param PARAM_2_UINT32 PARAM_2_UINT32
 * @param PARAM_1_FLOAT PARAM_1_FLOAT
 * @param PARAM_2_FLOAT PARAM_2_FLOAT
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cap_params_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t Set, uint32_t NAV_DLL_ACT, uint32_t COM_DL_LOSS_T, float COM_TER_FLS_AGL, float COM_TER_FLS_CLMB, float COM_TER_CRIT_AGL, uint32_t COM_TER_FLS_ENBL, uint32_t COM_LOW_BAT_ACT, float BAT_LOW_THR, float BAT_CRIT_THR, uint32_t PARAM_1_UINT32, uint32_t PARAM_2_UINT32, float PARAM_1_FLOAT, float PARAM_2_FLOAT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAP_PARAMS_LEN];
    _mav_put_uint32_t(buf, 0, NAV_DLL_ACT);
    _mav_put_uint32_t(buf, 4, COM_DL_LOSS_T);
    _mav_put_float(buf, 8, COM_TER_FLS_AGL);
    _mav_put_float(buf, 12, COM_TER_FLS_CLMB);
    _mav_put_float(buf, 16, COM_TER_CRIT_AGL);
    _mav_put_uint32_t(buf, 20, COM_TER_FLS_ENBL);
    _mav_put_uint32_t(buf, 24, COM_LOW_BAT_ACT);
    _mav_put_float(buf, 28, BAT_LOW_THR);
    _mav_put_float(buf, 32, BAT_CRIT_THR);
    _mav_put_uint32_t(buf, 36, PARAM_1_UINT32);
    _mav_put_uint32_t(buf, 40, PARAM_2_UINT32);
    _mav_put_float(buf, 44, PARAM_1_FLOAT);
    _mav_put_float(buf, 48, PARAM_2_FLOAT);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, Set);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_PARAMS, buf, MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN, MAVLINK_MSG_ID_CAP_PARAMS_LEN, MAVLINK_MSG_ID_CAP_PARAMS_CRC);
#else
    mavlink_cap_params_t packet;
    packet.NAV_DLL_ACT = NAV_DLL_ACT;
    packet.COM_DL_LOSS_T = COM_DL_LOSS_T;
    packet.COM_TER_FLS_AGL = COM_TER_FLS_AGL;
    packet.COM_TER_FLS_CLMB = COM_TER_FLS_CLMB;
    packet.COM_TER_CRIT_AGL = COM_TER_CRIT_AGL;
    packet.COM_TER_FLS_ENBL = COM_TER_FLS_ENBL;
    packet.COM_LOW_BAT_ACT = COM_LOW_BAT_ACT;
    packet.BAT_LOW_THR = BAT_LOW_THR;
    packet.BAT_CRIT_THR = BAT_CRIT_THR;
    packet.PARAM_1_UINT32 = PARAM_1_UINT32;
    packet.PARAM_2_UINT32 = PARAM_2_UINT32;
    packet.PARAM_1_FLOAT = PARAM_1_FLOAT;
    packet.PARAM_2_FLOAT = PARAM_2_FLOAT;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.Set = Set;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN, MAVLINK_MSG_ID_CAP_PARAMS_LEN, MAVLINK_MSG_ID_CAP_PARAMS_CRC);
#endif
}

/**
 * @brief Send a cap_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cap_params_send_struct(mavlink_channel_t chan, const mavlink_cap_params_t* cap_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cap_params_send(chan, cap_params->target_system, cap_params->target_component, cap_params->Set, cap_params->NAV_DLL_ACT, cap_params->COM_DL_LOSS_T, cap_params->COM_TER_FLS_AGL, cap_params->COM_TER_FLS_CLMB, cap_params->COM_TER_CRIT_AGL, cap_params->COM_TER_FLS_ENBL, cap_params->COM_LOW_BAT_ACT, cap_params->BAT_LOW_THR, cap_params->BAT_CRIT_THR, cap_params->PARAM_1_UINT32, cap_params->PARAM_2_UINT32, cap_params->PARAM_1_FLOAT, cap_params->PARAM_2_FLOAT);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_PARAMS, (const char *)cap_params, MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN, MAVLINK_MSG_ID_CAP_PARAMS_LEN, MAVLINK_MSG_ID_CAP_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAP_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cap_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t Set, uint32_t NAV_DLL_ACT, uint32_t COM_DL_LOSS_T, float COM_TER_FLS_AGL, float COM_TER_FLS_CLMB, float COM_TER_CRIT_AGL, uint32_t COM_TER_FLS_ENBL, uint32_t COM_LOW_BAT_ACT, float BAT_LOW_THR, float BAT_CRIT_THR, uint32_t PARAM_1_UINT32, uint32_t PARAM_2_UINT32, float PARAM_1_FLOAT, float PARAM_2_FLOAT)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, NAV_DLL_ACT);
    _mav_put_uint32_t(buf, 4, COM_DL_LOSS_T);
    _mav_put_float(buf, 8, COM_TER_FLS_AGL);
    _mav_put_float(buf, 12, COM_TER_FLS_CLMB);
    _mav_put_float(buf, 16, COM_TER_CRIT_AGL);
    _mav_put_uint32_t(buf, 20, COM_TER_FLS_ENBL);
    _mav_put_uint32_t(buf, 24, COM_LOW_BAT_ACT);
    _mav_put_float(buf, 28, BAT_LOW_THR);
    _mav_put_float(buf, 32, BAT_CRIT_THR);
    _mav_put_uint32_t(buf, 36, PARAM_1_UINT32);
    _mav_put_uint32_t(buf, 40, PARAM_2_UINT32);
    _mav_put_float(buf, 44, PARAM_1_FLOAT);
    _mav_put_float(buf, 48, PARAM_2_FLOAT);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, Set);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_PARAMS, buf, MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN, MAVLINK_MSG_ID_CAP_PARAMS_LEN, MAVLINK_MSG_ID_CAP_PARAMS_CRC);
#else
    mavlink_cap_params_t *packet = (mavlink_cap_params_t *)msgbuf;
    packet->NAV_DLL_ACT = NAV_DLL_ACT;
    packet->COM_DL_LOSS_T = COM_DL_LOSS_T;
    packet->COM_TER_FLS_AGL = COM_TER_FLS_AGL;
    packet->COM_TER_FLS_CLMB = COM_TER_FLS_CLMB;
    packet->COM_TER_CRIT_AGL = COM_TER_CRIT_AGL;
    packet->COM_TER_FLS_ENBL = COM_TER_FLS_ENBL;
    packet->COM_LOW_BAT_ACT = COM_LOW_BAT_ACT;
    packet->BAT_LOW_THR = BAT_LOW_THR;
    packet->BAT_CRIT_THR = BAT_CRIT_THR;
    packet->PARAM_1_UINT32 = PARAM_1_UINT32;
    packet->PARAM_2_UINT32 = PARAM_2_UINT32;
    packet->PARAM_1_FLOAT = PARAM_1_FLOAT;
    packet->PARAM_2_FLOAT = PARAM_2_FLOAT;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->Set = Set;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAP_PARAMS, (const char *)packet, MAVLINK_MSG_ID_CAP_PARAMS_MIN_LEN, MAVLINK_MSG_ID_CAP_PARAMS_LEN, MAVLINK_MSG_ID_CAP_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAP_PARAMS UNPACKING


/**
 * @brief Get field target_system from cap_params message
 *
 * @return System which should execute the command
 */
static inline uint8_t mavlink_msg_cap_params_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  52);
}

/**
 * @brief Get field target_component from cap_params message
 *
 * @return Component which should execute the command, 0 for all components
 */
static inline uint8_t mavlink_msg_cap_params_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  53);
}

/**
 * @brief Get field Set from cap_params message
 *
 * @return 1-set, 0-get
 */
static inline uint8_t mavlink_msg_cap_params_get_Set(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  54);
}

/**
 * @brief Get field NAV_DLL_ACT from cap_params message
 *
 * @return Set data link loss failsafe mode
 */
static inline uint32_t mavlink_msg_cap_params_get_NAV_DLL_ACT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field COM_DL_LOSS_T from cap_params message
 *
 * @return Datalink loss time threshold
 */
static inline uint32_t mavlink_msg_cap_params_get_COM_DL_LOSS_T(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field COM_TER_FLS_AGL from cap_params message
 *
 * @return Minimum altitude (AGL) for failsafe
 */
static inline float mavlink_msg_cap_params_get_COM_TER_FLS_AGL(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field COM_TER_FLS_CLMB from cap_params message
 *
 * @return Altitude override for min HAG failsafe
 */
static inline float mavlink_msg_cap_params_get_COM_TER_FLS_CLMB(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field COM_TER_CRIT_AGL from cap_params message
 *
 * @return Altitude override for min HAG failsafe
 */
static inline float mavlink_msg_cap_params_get_COM_TER_CRIT_AGL(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field COM_TER_FLS_ENBL from cap_params message
 *
 * @return Altitude override for min HAG
 */
static inline uint32_t mavlink_msg_cap_params_get_COM_TER_FLS_ENBL(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field COM_LOW_BAT_ACT from cap_params message
 *
 * @return Battery failsafe mode
 */
static inline uint32_t mavlink_msg_cap_params_get_COM_LOW_BAT_ACT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field BAT_LOW_THR from cap_params message
 *
 * @return Low threshold
 */
static inline float mavlink_msg_cap_params_get_BAT_LOW_THR(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field BAT_CRIT_THR from cap_params message
 *
 * @return Critical threshold
 */
static inline float mavlink_msg_cap_params_get_BAT_CRIT_THR(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field PARAM_1_UINT32 from cap_params message
 *
 * @return PARAM_1_UINT32
 */
static inline uint32_t mavlink_msg_cap_params_get_PARAM_1_UINT32(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  36);
}

/**
 * @brief Get field PARAM_2_UINT32 from cap_params message
 *
 * @return PARAM_2_UINT32
 */
static inline uint32_t mavlink_msg_cap_params_get_PARAM_2_UINT32(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Get field PARAM_1_FLOAT from cap_params message
 *
 * @return PARAM_1_FLOAT
 */
static inline float mavlink_msg_cap_params_get_PARAM_1_FLOAT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field PARAM_2_FLOAT from cap_params message
 *
 * @return PARAM_2_FLOAT
 */
static inline float mavlink_msg_cap_params_get_PARAM_2_FLOAT(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Decode a cap_params message into a struct
 *
 * @param msg The message to decode
 * @param cap_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_cap_params_decode(const mavlink_message_t* msg, mavlink_cap_params_t* cap_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cap_params->NAV_DLL_ACT = mavlink_msg_cap_params_get_NAV_DLL_ACT(msg);
    cap_params->COM_DL_LOSS_T = mavlink_msg_cap_params_get_COM_DL_LOSS_T(msg);
    cap_params->COM_TER_FLS_AGL = mavlink_msg_cap_params_get_COM_TER_FLS_AGL(msg);
    cap_params->COM_TER_FLS_CLMB = mavlink_msg_cap_params_get_COM_TER_FLS_CLMB(msg);
    cap_params->COM_TER_CRIT_AGL = mavlink_msg_cap_params_get_COM_TER_CRIT_AGL(msg);
    cap_params->COM_TER_FLS_ENBL = mavlink_msg_cap_params_get_COM_TER_FLS_ENBL(msg);
    cap_params->COM_LOW_BAT_ACT = mavlink_msg_cap_params_get_COM_LOW_BAT_ACT(msg);
    cap_params->BAT_LOW_THR = mavlink_msg_cap_params_get_BAT_LOW_THR(msg);
    cap_params->BAT_CRIT_THR = mavlink_msg_cap_params_get_BAT_CRIT_THR(msg);
    cap_params->PARAM_1_UINT32 = mavlink_msg_cap_params_get_PARAM_1_UINT32(msg);
    cap_params->PARAM_2_UINT32 = mavlink_msg_cap_params_get_PARAM_2_UINT32(msg);
    cap_params->PARAM_1_FLOAT = mavlink_msg_cap_params_get_PARAM_1_FLOAT(msg);
    cap_params->PARAM_2_FLOAT = mavlink_msg_cap_params_get_PARAM_2_FLOAT(msg);
    cap_params->target_system = mavlink_msg_cap_params_get_target_system(msg);
    cap_params->target_component = mavlink_msg_cap_params_get_target_component(msg);
    cap_params->Set = mavlink_msg_cap_params_get_Set(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAP_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_CAP_PARAMS_LEN;
        memset(cap_params, 0, MAVLINK_MSG_ID_CAP_PARAMS_LEN);
    memcpy(cap_params, _MAV_PAYLOAD(msg), len);
#endif
}
