// MESSAGE V2_EXTENSION PACKING

#define MAVLINK_MSG_ID_V2_EXTENSION 248

MAVPACKED(
typedef struct __mavlink_v2_extension_t {
 uint8_t payload[10]; /*< Variable length payload. The length is defined by the remaining message length when subtracting the header and other fields.  The entire content of this block is opaque unless you understand any the encoding message_type.  The particular encoding used can be extension specific and might not always be documented as part of the mavlink specification.*/
}) mavlink_v2_extension_t;

#define MAVLINK_MSG_ID_V2_EXTENSION_LEN 10
#define MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN 10
#define MAVLINK_MSG_ID_248_LEN 10
#define MAVLINK_MSG_ID_248_MIN_LEN 10

#define MAVLINK_MSG_ID_V2_EXTENSION_CRC 249
#define MAVLINK_MSG_ID_248_CRC 249

#define MAVLINK_MSG_V2_EXTENSION_FIELD_PAYLOAD_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_V2_EXTENSION { \
	248, \
	"V2_EXTENSION", \
	1, \
	{  { "payload", NULL, MAVLINK_TYPE_UINT8_T, 10, 0, offsetof(mavlink_v2_extension_t, payload) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_V2_EXTENSION { \
	"V2_EXTENSION", \
	1, \
	{  { "payload", NULL, MAVLINK_TYPE_UINT8_T, 10, 0, offsetof(mavlink_v2_extension_t, payload) }, \
         } \
}
#endif

/**
 * @brief Pack a v2_extension message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param payload Variable length payload. The length is defined by the remaining message length when subtracting the header and other fields.  The entire content of this block is opaque unless you understand any the encoding message_type.  The particular encoding used can be extension specific and might not always be documented as part of the mavlink specification.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_v2_extension_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_V2_EXTENSION_LEN];

	_mav_put_uint8_t_array(buf, 0, payload, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_V2_EXTENSION_LEN);
#else
	mavlink_v2_extension_t packet;

	mav_array_memcpy(packet.payload, payload, sizeof(uint8_t)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_V2_EXTENSION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_V2_EXTENSION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);
}

/**
 * @brief Pack a v2_extension message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload Variable length payload. The length is defined by the remaining message length when subtracting the header and other fields.  The entire content of this block is opaque unless you understand any the encoding message_type.  The particular encoding used can be extension specific and might not always be documented as part of the mavlink specification.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_v2_extension_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_V2_EXTENSION_LEN];

	_mav_put_uint8_t_array(buf, 0, payload, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_V2_EXTENSION_LEN);
#else
	mavlink_v2_extension_t packet;

	mav_array_memcpy(packet.payload, payload, sizeof(uint8_t)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_V2_EXTENSION_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_V2_EXTENSION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);
}

/**
 * @brief Encode a v2_extension struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param v2_extension C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_v2_extension_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_v2_extension_t* v2_extension)
{
	return mavlink_msg_v2_extension_pack(system_id, component_id, msg, v2_extension->payload);
}

/**
 * @brief Encode a v2_extension struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param v2_extension C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_v2_extension_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_v2_extension_t* v2_extension)
{
	return mavlink_msg_v2_extension_pack_chan(system_id, component_id, chan, msg, v2_extension->payload);
}

/**
 * @brief Send a v2_extension message
 * @param chan MAVLink channel to send the message
 *
 * @param payload Variable length payload. The length is defined by the remaining message length when subtracting the header and other fields.  The entire content of this block is opaque unless you understand any the encoding message_type.  The particular encoding used can be extension specific and might not always be documented as part of the mavlink specification.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_v2_extension_send(mavlink_channel_t chan, const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_V2_EXTENSION_LEN];

	_mav_put_uint8_t_array(buf, 0, payload, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_V2_EXTENSION, buf, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);
#else
	mavlink_v2_extension_t packet;

	mav_array_memcpy(packet.payload, payload, sizeof(uint8_t)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_V2_EXTENSION, (const char *)&packet, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);
#endif
}

/**
 * @brief Send a v2_extension message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_v2_extension_send_struct(mavlink_channel_t chan, const mavlink_v2_extension_t* v2_extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_v2_extension_send(chan, v2_extension->payload);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_V2_EXTENSION, (const char *)v2_extension, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);
#endif
}

#if MAVLINK_MSG_ID_V2_EXTENSION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_v2_extension_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_uint8_t_array(buf, 0, payload, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_V2_EXTENSION, buf, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);
#else
	mavlink_v2_extension_t *packet = (mavlink_v2_extension_t *)msgbuf;

	mav_array_memcpy(packet->payload, payload, sizeof(uint8_t)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_V2_EXTENSION, (const char *)packet, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);
#endif
}
#endif

#endif

// MESSAGE V2_EXTENSION UNPACKING


/**
 * @brief Get field payload from v2_extension message
 *
 * @return Variable length payload. The length is defined by the remaining message length when subtracting the header and other fields.  The entire content of this block is opaque unless you understand any the encoding message_type.  The particular encoding used can be extension specific and might not always be documented as part of the mavlink specification.
 */
static inline uint16_t mavlink_msg_v2_extension_get_payload(const mavlink_message_t* msg, uint8_t *payload)
{
	return _MAV_RETURN_uint8_t_array(msg, payload, 10,  0);
}

/**
 * @brief Decode a v2_extension message into a struct
 *
 * @param msg The message to decode
 * @param v2_extension C-struct to decode the message contents into
 */
static inline void mavlink_msg_v2_extension_decode(const mavlink_message_t* msg, mavlink_v2_extension_t* v2_extension)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	mavlink_msg_v2_extension_get_payload(msg, v2_extension->payload);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_V2_EXTENSION_LEN? msg->len : MAVLINK_MSG_ID_V2_EXTENSION_LEN;
        memset(v2_extension, 0, MAVLINK_MSG_ID_V2_EXTENSION_LEN);
	memcpy(v2_extension, _MAV_PAYLOAD(msg), len);
#endif
}
