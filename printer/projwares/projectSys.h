/*================================================================================================
 *
 *团队:     <<绝地大师>>
 *
 *项目作者: jx.shen
 *即时联系: 55954781
 *联系邮箱: 55954781shen&gmail.com
 *readme  :
================================================================================================*/
#ifndef __PROJECT_WARES_H__
#define __PROJECT_WARES_H__
//-********************************************************************************************
#include "stm32f4xx_hal.h"
//-********************************************************************************************
// 通讯协议选择
#define VERSION "JD1.0"
#define GCODE_PROTOCOL_GRBL		1	// 通讯协议选择
#define GCODE_PROTOCOL_REPETER	2
#define GCODE_PROTOCOL			GCODE_PROTOCOL_GRBL
#define STEP_MOTO_MAX_DEV		2	// 电机驱动数
//-********************************************************************************************
// 内存分配存储空间
#define	MEMORY_BUF_SIZE (1024*15)

//-********************************************************************************************
// 系统监测结构
typedef struct sysDebugBit_struct {
    unsigned int gcodeRx 		:1;
    unsigned int grblStep1		:1;
    unsigned int gcodeNoSupport	:1;
    unsigned int gcodeTx 		:1;
} sysDebugBit_struct;
typedef union  sysDebugBit_union {
    sysDebugBit_struct bits;
    unsigned int       all;
} sysDebugBit_union;

//-********************************************************************************************
// EEP 地址
#define EEPROM_PAGE_SIZE		((uint16_t)0x800)

#define EEP_DEFAULT {       				\
	.data.mVer=1.00,						\
	.data.mjunctioMaxRate = 10, 			\
	.data.mStatusRepot = 0,					\
	.data.mTarvelRate = 3000,				\
	.data.mStepsMM[0] = 100,				\
	.data.mStepsMM[1] = 100,				\
	.data.mSpeedMax[0] = 100,				\
	.data.mSpeedMax[1] = 100,				\
	.data.mAccelTime[0] = 0.2f,				\
	.data.mAccelTime[1] = 0.2f,				\
	.data.pPortStep[0] = 0,	\
	.data.pPortStep[1] = 0,	\
	.data.pPortDir[0] = 0,		\
	.data.pPortDir[1] = 0,		\
	.data.pPortEna[0] = 0,	\
	.data.pPortEna[1] = 0,	\
	.data.mPinStep[0] = 0,			\
	.data.mPinStep[1] = 0,			\
	.data.mPinDir[0] = 0,			\
	.data.mPinDir[1] = 0,			\
	.data.mPinEna[0] = 0,			\
	.data.mPinEna[1] = 0,			\
	.data.mPid_P[0] = 4.27926397f,	\
	.data.mPid_I[0] = 0.188099f,	\
	.data.mPid_D[0] = 8.76179314f,	\
    .data.mPidBoundary[0] = 10.0f,          \
	.data.mDeadSpeed = 30,					\
	.data.mX_travelMax = 500,				\
	.data.mY_travelMax = 500,				\
	.data.mLaserCurrent = 0.2,				\
	.data.mMotoCurrent = 0.8,				\
    .data.mPowerLowLimt = 10,               \
    }

typedef struct EEP_struct {
    float mVer;
    float mjunctioMaxRate;
    unsigned int mStatusRepot;
    float mTarvelRate;
	//-- 步进电机必须包含参数
    unsigned int mSpeedMax[STEP_MOTO_MAX_DEV];
    float mAccelTime[STEP_MOTO_MAX_DEV];
	float mStepsMM[STEP_MOTO_MAX_DEV];
	GPIO_TypeDef *pPortStep[STEP_MOTO_MAX_DEV];
	GPIO_TypeDef *pPortDir[STEP_MOTO_MAX_DEV];
	GPIO_TypeDef *pPortEna[STEP_MOTO_MAX_DEV];
	unsigned int mPinStep[STEP_MOTO_MAX_DEV];
	unsigned int mPinDir[STEP_MOTO_MAX_DEV];
	unsigned int mPinEna[STEP_MOTO_MAX_DEV];
	unsigned int mDeadSpeed;
	//--
    float mPid_P[3];
    float mPid_I[3];
    float mPid_D[3];
    float mPidBoundary[3];
    //--
    unsigned int mX_travelMax;
    unsigned int mY_travelMax;
    float mLaserCurrent;
    float mMotoCurrent;
    
    char mPowerLowLimt;
} EEP_struct;
//
typedef union {
    EEP_struct    data;
    unsigned char buf[EEPROM_PAGE_SIZE];
} EEP_union;
//-********************************************************************************************
typedef struct Ram_struct {
    char power;
    char speed;
}Ram_struct;
#endif
