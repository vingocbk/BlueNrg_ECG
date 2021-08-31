/******************** (C) COPYRIGHT 2014 STMicroelectronics ********************
* File Name          : app.h
* Author             : AMS - AAS, RF Application Team
* Version            : V1.0.0
* Date               : 14-March-2014
* Description        : Header file wich contains variable used for application.
********************************************************************************
* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*******************************************************************************/
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __APP_H
#define __APP_H

#ifdef __cplusplus
 extern "C" {
#endif


/* Exported variables ------------------------------------------------------- */  
     
/** 
  * @brief  Variable which contains some flags useful for application
  */ 
extern volatile int app_flags;
extern volatile int app_flags_custom;

/**
 * @name Flags for application
 * @{
 */
#define CONNECTED               0x01
#define SET_CONNECTABLE         0x02
#define NOTIFICATIONS_ENABLED   0x04
#define CONN_PARAM_UPD_SENT     0x08
#define L2CAP_PARAM_UPD_SENT    0x10
#define TX_BUFFER_FULL          0x20
#define SEND_DATA               0x40

//------STATUS CUSTOM----------
#define SEND_DATA_TO_APP_ENABLE          	0x01			//if enable will turn on mode send data to App
#define MODE_SEND_REAL_TIME								0x02			//check send all buffer
#define READ_DATA_ECG         						0x04			//every freq (default 4ms) send data to buffer
#define FULL_DATA_BUFFER									0x08			//if full buffer will send data to App
#define FREQ_125													0x10			//125 time per second
#define FREQ_250													0x20			//250 time per second
#define FREQ_500													0x40			//500 time per second
#define FREQ_1000													0x80			//1000s time per second
#define READ_BATTERY_LEVEL								0x100			//read battery level from app


#define FREQ_READ_ECG_125 	8 //8ms
#define FREQ_READ_ECG_250 	4 //4ms
#define FREQ_READ_ECG_500 	2 //2ms
#define FREQ_READ_ECG_1000 	1 //1ms

#define ADDRESS_BUFFER_DATA_START				0
#define ADDRESS_BUFFER_SYNC_START				0
#define DATA_BUFFER_SYNC_START					0xFF
#define DATA_BUFFER_SYNC_STOP						0x7F



/* Added flags for handling TX, RX characteristics discovery */
#define START_READ_TX_CHAR_HANDLE 0x100 
#define END_READ_TX_CHAR_HANDLE   0x200
#define START_READ_RX_CHAR_HANDLE 0x400 
#define END_READ_RX_CHAR_HANDLE   0x800
/**
 * @}
 */



/* Exported macros -----------------------------------------------------------*/
#define APP_FLAG(flag) (app_flags & flag)

#define APP_FLAG_SET(flag) (app_flags |= flag)
#define APP_FLAG_CLEAR(flag) (app_flags &= ~flag)

#define APP_FLAG_CUSTOM(flag) (app_flags_custom & flag)

#define APP_FLAG_SET_CUSTOM(flag) (app_flags_custom |= flag)
#define APP_FLAG_CLEAR_CUSTOM(flag) (app_flags_custom &= ~flag)


#ifdef __cplusplus
}
#endif

#endif /*__APP_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
