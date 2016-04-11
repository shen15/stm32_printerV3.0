/*================================================================================================
 *
 *团队:     <<绝地大师>>
 *
 *项目作者: jx.shen
 *即时联系: 55954781
 *联系邮箱: 55954781shen&gmail.com
 *readme  :
================================================================================================*/
#include "printerMain.h"
#include "printerHmi.h"
//-***************************************
// led
//c_gpio led(led_GPIO_Port, led_Pin);
//
//-***************************************
// 串口
//c_serial lcdSerial  (&huart1, 200, 200, IO_MODE_DMA);
//c_usbSerial usbSerial(1024, 1024);
//c_serial debugSerial(&huart2, 1024, 1024, IO_MODE_DMA);
//c_laserHmi laserHmi(&lcdSerial);
//
//-***************************************
// 步进电机
//c_stepMotoS stepMotos(0.2, STEPMOTOS_COREXY_TYPE, &debugSerial);
//
//-***************************************
// 协议
//c_grblProtocol protocol(300, &stepMotos, 200, 200);
//
//-***************************************
// 电机电流设定
// I = Ref  / (8 * r) ==>  refH =  1.5*8*0.2 (1.5A max)  = 2.4V
//                         refL = 0.25*8*0.2 (0.25A min) = 0.4V
//c_dac refCurrent(&hdac, DAC_CHANNEL_2,0.4, 2.4);
//
//-***************************************
// 激光头电流设定
// I = 0.1 / R ==> 0.1 / 0.075 = 1.33A
//c_dac laserCurrent(&hdac, DAC_CHANNEL_1,0.4, 2.5);
//
//-********************************************************************************************
//u8 limitXflag;
//u8 limitYflag;
//u8 testDelay = 100;
//-********************************************************************************************
//   L A S E R   M A I N   T S K
// 主任务
//-********************************************************************************************
void lcdTsk() {
//    //-- 实时值
//    laserHmi.m_iconValue.byte.X = protocol.pMoto->getAbsPos(0);
//    laserHmi.m_iconValue.byte.Y = protocol.pMoto->getAbsPos(1);
//    //-- 参数值
//    laserHmi.m_iconValue.byte.powerLowLimt = laserHmi.mPara.data.mPowerLowLimt;
//    laserHmi.m_iconValue.byte.mX_travelMax = laserHmi.mPara.data.mX_travelMax;
//    laserHmi.m_iconValue.byte.mY_travelMax = laserHmi.mPara.data.mY_travelMax;
//    laserHmi.m_iconValue.byte.mSpeedMax0 = laserHmi.mPara.data.mSpeedMax[0];
//    laserHmi.m_iconValue.byte.mSpeedMax1 = laserHmi.mPara.data.mSpeedMax[1];
//    laserHmi.m_iconValue.byte.mAccelTime0 = laserHmi.mPara.data.mAccelTime[0];
//    laserHmi.m_iconValue.byte.mAccelTime1 = laserHmi.mPara.data.mAccelTime[1];
//    //--
//    laserHmi.m_iconValue.byte.memUsed = c_memory::memUsed();
//    laserHmi.hmiLoop();
//    laserHmi.mRam.speed = laserHmi.m_iconValue.byte.speed;
//    laserHmi.mRam.power = laserHmi.m_iconValue.byte.power;
//    //-- 移动
//    if (laserHmi.m_iconValue.byte.moveX) {
//        protocol.moveX(laserHmi.m_iconValue.byte.moveX);
//        laserHmi.m_iconValue.byte.moveX = 0.0f;
//    }
//    if (laserHmi.m_iconValue.byte.moveY) {
//        protocol.moveY(laserHmi.m_iconValue.byte.moveY);
//        laserHmi.m_iconValue.byte.moveY = 0.0f;
//    }
//    if (laserHmi.m_iconValue.byte.moveHome) {
//        protocol.G28();
//        laserHmi.m_iconValue.byte.moveHome = 0.0f;
//    }
//    //-- 参数值
//    u8 saveFlag = true;
//    do {
//        if (laserHmi.m_iconValue.byte.powerLowLimt != laserHmi.mPara.data.mPowerLowLimt) {
//            laserHmi.mPara.data.mPowerLowLimt = laserHmi.m_iconValue.byte.powerLowLimt;
//            break;
//        }
//        if (laserHmi.m_iconValue.byte.mX_travelMax != laserHmi.mPara.data.mX_travelMax) {
//            laserHmi.mPara.data.mX_travelMax = laserHmi.m_iconValue.byte.mX_travelMax;
//            break;
//        }
//        if (laserHmi.m_iconValue.byte.mY_travelMax != laserHmi.mPara.data.mY_travelMax) {
//            laserHmi.mPara.data.mY_travelMax = laserHmi.m_iconValue.byte.mY_travelMax ;
//            break;
//        }
//        if (laserHmi.m_iconValue.byte.mSpeedMax0 != laserHmi.mPara.data.mSpeedMax[0]) {
//            laserHmi.mPara.data.mSpeedMax[0] = laserHmi.m_iconValue.byte.mSpeedMax0;
//            break;
//        }
//        if (laserHmi.m_iconValue.byte.mSpeedMax1 != laserHmi.mPara.data.mSpeedMax[1]) {
//            laserHmi.mPara.data.mSpeedMax[1] = laserHmi.m_iconValue.byte.mSpeedMax1;
//            break;
//        }
//        if (laserHmi.m_iconValue.byte.mAccelTime0 != laserHmi.mPara.data.mAccelTime[0]) {
//            laserHmi.mPara.data.mAccelTime[0] = laserHmi.m_iconValue.byte.mAccelTime0;
//            break;
//        }
//        if (laserHmi.m_iconValue.byte.mAccelTime1 != laserHmi.mPara.data.mAccelTime[1]) {
//            laserHmi.mPara.data.mAccelTime[1] = laserHmi.m_iconValue.byte.mAccelTime1;
//            break;
//        }
//        saveFlag = false;
//    } while(0);
//    if (saveFlag) {
//        c_eep::write();
//    }
    //--
}
//
//-********************************************************************************************
//   S Y S   T S K

//-********************************************************************************************
void sysTsk() {
//    led.toggle();
//    osDelay(100);
}

//-**********************************************************************************************************************************************************************************************
//   G E T   C O M M A N D   T S K

//-**********************************************************************************************************************************************************************************************
// 步进电机控制函数集
u8 usbSerialRx[1024];
void step1getCmdTsk(void const * argument) {
////    for(;;) {
////	u16 len = usbSerial.available();
////	usbSerial.read(usbSerialRx, len);
////	debugSerial.write(usbSerialRx, len);
////    }



//    for(;;) {
//        protocol.step1GetCmd();
//    }
}
//
//-********************************************************************************************
//   S T E P 2 C M D 2 M O T O   T S K

//-********************************************************************************************
u8 curretn = 50;
u8 exp8266Rx[1024];
void step2cmd2motoTsk(void const * argument) {
////	for (;;) {
////	u16 len = debugSerial.available();
////	debugSerial.read((u8*)exp8266Rx, len);
////		usbSerial.write(exp8266Rx, len);
////    }

//    stepMotos.inserDev(&htim1, HAL_TIM_ACTIVE_CHANNEL_1);
//    stepMotos.inserDev(&htim1, HAL_TIM_ACTIVE_CHANNEL_2);
//    refCurrent.setPercent(0);
//    for (;;) {
//        protocol.step2pushCmd();
//    }
}
//
//-********************************************************************************************
//   S T E P 3 M O T O   P U S H   I S R   T S K

//-********************************************************************************************
void step3motoPushIsrTsk(void const * argument) {
//    for (;;) {
//        protocol.step3pushIsr();
//    }
}
//
//-********************************************************************************************
//   M O T O   I S R   F X N

//-********************************************************************************************
void motoIsrFxn(stepMotoBlock_struct *buf) {
//    if (buf->laserPower == 0) {
//        laserCurrent.setData(0);
//    } else {
//        laserCurrent.setPercent(buf->laserPower);
//    }
}
//
//-**********************************************************************************************************************************************************************************************
#ifdef __cplusplus
extern "C" {
#endif
//-**********************************************************************************************************************************************************************************************
//   H   A   L _   G   P   I   O _   E   X   T   I _   C A L L B A C K
// 外部中断口限位开关
//-********************************************************************************************
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
//    if (GPIO_Pin == limitX_Pin) {
//        limitXflag = 1;
//        testDelay = 100;
//    } else if (GPIO_Pin == limitY_Pin) {
//        limitYflag = 1;
//        testDelay = 200;
//    }
}

//-********************************************************************************************
//   H   A   L _   U   S   A   R   T _   T X   C P L T   C A L L B A C K
// 串口发送完成回调函数
//-********************************************************************************************
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *husart) {
//    if (husart == &huart1) {
//        lcdSerial.writeCallBack();
//    } else if (husart == &huart2) {
//        debugSerial.writeCallBack();
//    }
}

//-********************************************************************************************
//   P   R   O   J _   U   A   R   T 1 _   I   D   L   E _   F   X   N

//-********************************************************************************************
void HAL_UART_IDLE_Callback(UART_HandleTypeDef *huart) {
//    if (huart == &huart1) {
//        lcdSerial.rxIdleBack();
//    } else if (huart == &huart2) {
//        debugSerial.rxIdleBack();
//    }
}

//-********************************************************************************************
//   C D C _   R E C E I V E   I S R
// usb 接收
//-********************************************************************************************
void cdc_ReceiveIsr(uint8_t *buf,  uint32_t *len) {
    //protocol.rxCallback(buf, len);
//    usbSerial.rxCallback(buf, len);


}

void cdc_ReceiveTest() {
//    usbSerial.test();
}

//-********************************************************************************************
//   H   A   L _   T   I   M _   O   C _   D E L A Y   E L A P S E D   C A L L B A C K
// 步进电机
//-********************************************************************************************
void HAL_TIM_OC_DelayElapsedCallback(TIM_HandleTypeDef *htim) {
//    stepMotos.isr(htim);
}

//-********************************************************************************************
//   A S S E R T _ F A I L E D _ P R I N T

//-********************************************************************************************
void assert_failed_print(uint8_t* file, uint32_t line) {
//    if (osKernelRunning() == 1) {
//        debugSerial.setIoMode  (IO_MODE_DMA);
//    } else {
//        debugSerial.setIoMode  (IO_MODE_POLLING);
//    }
//    debugSerial.printf("!failed! %s: %3d\r\n",file, line);
}


//-**********************************************************************************************************************************************************************************************
#ifdef __cplusplus
}
#endif
//-**********************************************************************************************************************************************************************************************

// end projectwares


