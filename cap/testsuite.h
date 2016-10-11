/** @file
 *	@brief MAVLink comm protocol testsuite generated from cap.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef CAP_TESTSUITE_H
#define CAP_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_cap(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_cap(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_cap_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAP_STATUS >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_cap_status_t packet_in = {
		17235,17339,17,84,151,218,29,96,163
    };
	mavlink_cap_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.number_of_photos = packet_in.number_of_photos;
        packet1.air_time = packet_in.air_time;
        packet1.parachute_status = packet_in.parachute_status;
        packet1.airspeed_cal_status = packet_in.airspeed_cal_status;
        packet1.home_init_status = packet_in.home_init_status;
        packet1.land_detected_status = packet_in.land_detected_status;
        packet1.altitude_override_status = packet_in.altitude_override_status;
        packet1.speed_override_status = packet_in.speed_override_status;
        packet1.failsafe_status = packet_in.failsafe_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAP_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cap_status_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_cap_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cap_status_pack(system_id, component_id, &msg , packet1.parachute_status , packet1.airspeed_cal_status , packet1.home_init_status , packet1.land_detected_status , packet1.altitude_override_status , packet1.speed_override_status , packet1.number_of_photos , packet1.failsafe_status , packet1.air_time );
	mavlink_msg_cap_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cap_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.parachute_status , packet1.airspeed_cal_status , packet1.home_init_status , packet1.land_detected_status , packet1.altitude_override_status , packet1.speed_override_status , packet1.number_of_photos , packet1.failsafe_status , packet1.air_time );
	mavlink_msg_cap_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_cap_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_cap_status_send(MAVLINK_COMM_1 , packet1.parachute_status , packet1.airspeed_cal_status , packet1.home_init_status , packet1.land_detected_status , packet1.altitude_override_status , packet1.speed_override_status , packet1.number_of_photos , packet1.failsafe_status , packet1.air_time );
	mavlink_msg_cap_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_serial_passthrough(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SERIAL_PASSTHROUGH >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_serial_passthrough_t packet_in = {
		5,72,139,{ 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77 },78,145
    };
	mavlink_serial_passthrough_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.confirmation = packet_in.confirmation;
        packet1.size = packet_in.size;
        packet1.number = packet_in.number;
        
        mav_array_memcpy(packet1.data, packet_in.data, sizeof(uint8_t)*128);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SERIAL_PASSTHROUGH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SERIAL_PASSTHROUGH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_serial_passthrough_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.confirmation , packet1.data , packet1.size , packet1.number );
	mavlink_msg_serial_passthrough_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.confirmation , packet1.data , packet1.size , packet1.number );
	mavlink_msg_serial_passthrough_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_serial_passthrough_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.confirmation , packet1.data , packet1.size , packet1.number );
	mavlink_msg_serial_passthrough_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_serial_passthrough_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SERIAL_PASSTHROUGH_ACK >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_serial_passthrough_ack_t packet_in = {
		5,72
    };
	mavlink_serial_passthrough_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.number = packet_in.number;
        packet1.error = packet_in.error;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SERIAL_PASSTHROUGH_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SERIAL_PASSTHROUGH_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_ack_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_serial_passthrough_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_ack_pack(system_id, component_id, &msg , packet1.number , packet1.error );
	mavlink_msg_serial_passthrough_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.number , packet1.error );
	mavlink_msg_serial_passthrough_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_serial_passthrough_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_serial_passthrough_ack_send(MAVLINK_COMM_1 , packet1.number , packet1.error );
	mavlink_msg_serial_passthrough_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_estimator_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
	mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ESTIMATOR_STATUS >= 256) {
        	return;
        }
#endif
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_estimator_status_t packet_in = {
		93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,19315
    };
	mavlink_estimator_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.vel_ratio = packet_in.vel_ratio;
        packet1.pos_horiz_ratio = packet_in.pos_horiz_ratio;
        packet1.pos_vert_ratio = packet_in.pos_vert_ratio;
        packet1.mag_ratio = packet_in.mag_ratio;
        packet1.hagl_ratio = packet_in.hagl_ratio;
        packet1.tas_ratio = packet_in.tas_ratio;
        packet1.pos_horiz_accuracy = packet_in.pos_horiz_accuracy;
        packet1.pos_vert_accuracy = packet_in.pos_vert_accuracy;
        packet1.flags = packet_in.flags;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_estimator_status_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_estimator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_estimator_status_pack(system_id, component_id, &msg , packet1.time_usec , packet1.flags , packet1.vel_ratio , packet1.pos_horiz_ratio , packet1.pos_vert_ratio , packet1.mag_ratio , packet1.hagl_ratio , packet1.tas_ratio , packet1.pos_horiz_accuracy , packet1.pos_vert_accuracy );
	mavlink_msg_estimator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_estimator_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.flags , packet1.vel_ratio , packet1.pos_horiz_ratio , packet1.pos_vert_ratio , packet1.mag_ratio , packet1.hagl_ratio , packet1.tas_ratio , packet1.pos_horiz_accuracy , packet1.pos_vert_accuracy );
	mavlink_msg_estimator_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_estimator_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_estimator_status_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.flags , packet1.vel_ratio , packet1.pos_horiz_ratio , packet1.pos_vert_ratio , packet1.mag_ratio , packet1.hagl_ratio , packet1.tas_ratio , packet1.pos_horiz_accuracy , packet1.pos_vert_accuracy );
	mavlink_msg_estimator_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cap(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_cap_status(system_id, component_id, last_msg);
	mavlink_test_serial_passthrough(system_id, component_id, last_msg);
	mavlink_test_serial_passthrough_ack(system_id, component_id, last_msg);
	mavlink_test_estimator_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // CAP_TESTSUITE_H
