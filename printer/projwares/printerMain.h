/*================================================================================================
 *
 *团队:     <<绝地大师>>
 *
 *项目作者: jx.shen
 *即时联系: 55954781
 *联系邮箱: 55954781shen&gmail.com
 *readme  :
================================================================================================*/
#ifndef __LASER_MAIN_H__
#define __LASER_MAIN_H__
#include "cpp_sys.h"
#include "cpp_dac.h"
#include "cpp_gpio.h"
#include "cpp_adc.h"
#include "cpp_pwm.h"
#include "cpp_serial.h"
#include "cpp_usbSerial.h"
#include "cpp_hmiUsart.h"
#include "cpp_stepMoto.h"
#include "cpp_repeterProtocol.h"
#include "cpp_grblProtocol.h"
#include "cpp_eep.h"
#include "cpp_temperature.h"
//#include "cpp_sdspi.h"

//-********************************************************************************************
void laserMainTsk();
void sysTsk();
//-********************************************************************************************
#ifdef __cplusplus
extern "C" {
#endif
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *husart);
void HAL_UART_IDLE_Callback(UART_HandleTypeDef *huart);
void assert_failed_print(uint8_t* file, uint32_t line);
#ifdef __cplusplus
}
#endif
//-********************************************************************************************
extern UART_HandleTypeDef huart1;
extern UART_HandleTypeDef huart2;
extern DAC_HandleTypeDef hdac;
//extern SPI_HandleTypeDef hspi2;
extern ADC_HandleTypeDef hadc1;
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim3;
#endif
//-********************************************************************************************


