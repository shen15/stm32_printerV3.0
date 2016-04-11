/*================================================================================================
 *
 *团队:     <<绝地大师>>
 *
 *项目作者: jx.shen
 *即时联系: 55954781
 *联系邮箱: 55954781shen&gmail.com
 *readme  :
================================================================================================*/
#ifndef __HMI_H__
#define __HMI_H__
#include "cpp_hmiUsart.h"
#include "cpp_serial.h"
#include "cpp_eep.h"
#define LASER_HMI_PARA_CNT  80
#define LASER_HMI_NAME_LEN	20
//	--------------------------------------------------
// 数据下标
typedef enum hmiBufIndexEnum {
	ENUM_HMI_INDEX_X,
	ENUM_HMI_INDEX_Y,
	ENUM_HMI_INDEX_FILE_NAME,
	ENUM_HMI_INDEX_POWER,
	ENUM_HMI_INDEX_SPEED,
	ENUM_HMI_INDEX_FILE_LIST1,
	ENUM_HMI_INDEX_FILE_LIST2,
	ENUM_HMI_INDEX_FILE_LIST3,
	ENUM_HMI_INDEX_FILE_LIST4,
	ENUM_HMI_INDEX_FILE_SLIDER,
	ENUM_HMI_INDEX_FILE_FLAG,
	ENUM_HMI_INDEX_FILE_SELECT,
	ENUM_HMI_INDEX_START,
} hmiBufIndexEnum;
//	--------------------------------------------------
// 共享数据结构
typedef struct {
	//-- 显示数据
	float X; 				// 1
	float Y; 				// 2
	float fileName; 		// 3
	float power; 			// 4
	float speed; 			// 5
	//-- 文件选择
	float fileList1;		// 6
	float fileList2;		// 7
	float fileList3;		// 8
	float fileList4;		// 9
	float fileSlider;		// 10
	float fileListFlag;		// 11
	float selectName;		// 12
	float start;			// 13
	float weakLight;		// 14
	float moveX;			// 15
	float moveY;			// 16
	float moveHome;			// 17
	float spareA1;			// 18
	float spareA2;			// 19
	float spareA3;			// 20
	//-- 参数
	float powerLowLimt;		// 21
	float mX_travelMax;		// 22
	float mY_travelMax;		// 23
	float mSpeedMax0;		// 24
	float mSpeedMax1;		// 25
	float mAccelTime0;		// 26
	float mAccelTime1;		// 27
	float para8;			// 28
	float para9;			// 29
	float para10;			// 30
	float para11;			// 31
	float para12;			// 32
	float para13;			// 33
	float para14;			// 34
	float para15;			// 35
	float para16;			// 36
	float para17;			// 37
	float para18;			// 38
	float para19;			// 39
	float para20;			// 40
	float paraName1;		// 41
	float paraName2;		// 42
	float paraName3;		// 43
	float paraName4;		// 44
	float paraName5;		// 45
	float paraName6;		// 46
	float paraName7;		// 47
	float paraName8;		// 48
	float paraName9;		// 49
	float paraName10;		// 50
	float paraName11;		// 51
	float paraName12;		// 52
	float paraName13;		// 53
	float paraName14;		// 54
	float paraName15;		// 55
	float paraName16;		// 56
	float paraName17;		// 57
	float paraName18;		// 58
	float paraName19;		// 59
	float paraName20;		// 60
	//-- 系统参数
	float memUsed;			// 61
	float cpuUsed;			// 62
	float taskLoopTime;		// 63
	float system4;			// 64
	float system5;			// 65
	float system6;			// 66
	float system7;			// 67
	float system8;			// 68
	float system9;			// 69
	float system10;			// 70
	float system11;			// 71
	float system12;			// 72
	float system13;			// 73
	float system14;			// 74
	float system15;			// 75
	float system16;			// 76
	float system17;			// 77
	float system18;			// 78
	float system19;			// 79
	float system20;			// 80
} hmiBufStruct;
typedef union {
	hmiBufStruct   byte;
	float          all[LASER_HMI_PARA_CNT];
} hmiBufUnion;

extern hmiBufUnion m_hmiBufUnion;
//	--------------------------------------------------
class c_laserHmi : public c_hmi, c_memory, public c_eep {
public:
	c_laserHmi(c_serial *dev);
	hmiBufUnion m_iconValue;
	char *p_iconTxt[LASER_HMI_PARA_CNT];
	char *pp_iconName[LASER_HMI_PARA_CNT];
};


#endif

