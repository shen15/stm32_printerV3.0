/*================================================================================================
 *
 *团队:     <<绝地大师>>
 *
 *项目作者: jx.shen
 *即时联系: 55954781
 *联系邮箱: 55954781shen&gmail.com
 *readme  :
================================================================================================*/
#include "printerHmi.h"

char HMI_paraName[LASER_HMI_PARA_CNT][20] = {
	//-- 显示数据
	"float X", 				// 1
	"float Y", 				// 2
	"float fileName", 		// 3
	"float power", 			// 4
	"float speed", 			// 5
	//-- 文件选择
	"float fileList1",		// 6
	"float fileList2",		// 7
	"float fileList3",		// 8
	"float fileList4",		// 9
	"float fileSlider",		// 10
	"float fileListFlag",		// 11
	"float selectName",		// 12
	"float start",			// 13
	"float weakLight",		// 14
	"float moveX",			// 15
	"float moveY",			// 16
	"float moveHome",			// 17
	"float spareA1",			// 18
	"float spareA2",			// 19
	"float spareA3",			// 20
	//-- 参数
	"float para1",			// 21
	"float para2",			// 22
	"float para3",			// 23
	"float para4",			// 24
	"float para5",			// 25
	"float para6",			// 26
	"float para7",			// 27
	"float para8",			// 28
	"float para9",			// 29
	"float para10",			// 30
	"float para11",			// 31
	"float para12",			// 32
	"float para13",			// 33
	"float para14",			// 34
	"float para15",			// 35
	"float para16",			// 36
	"float para17",			// 37
	"float para18",			// 38
	"float para19",			// 39
	"float para20",			// 40
	"功率下限值 %",			// 41 paraName1
	"X最大距离 mm",			// 42 paraName2
	"Y最大距离 mm",			// 43
	"X最大速度 mm/s",		// 44
	"Y最大速度 mm/m",		// 45
	"X最大加速时间 s",		// 46
	"Y最大加速时间 s",		// 47
	"float paraName8",		// 48
	"float paraName9",		// 49
	"float paraName10",		// 50
	"float paraName11",		// 51
	"float paraName12",		// 52
	"float paraName13",		// 53
	"float paraName14",		// 54
	"float paraName15",		// 55
	"float paraName16",		// 56
	"float paraName17",		// 57
	"float paraName18",		// 58
	"float paraName19",		// 59
	"float paraName20",		// 60
	//-- 系统参数
	"float system1",			// 61
	"float system2",			// 62
	"float system3",			// 63
	"float system4",			// 64
	"float system5",			// 65
	"float system6",			// 66
	"float system7",			// 67
	"float system8",			// 68
	"float system9",			// 69
	"float system10",			// 70
	"内存使用 %",				// 71
	"CPU 使用 %",				// 72
	"任务1循环时间",				// 73
	"float systemName4",			// 74
	"float systemName5",			// 75
	"float systemName6",			// 76
	"float systemName7",			// 77
	"float systemName8",			// 78
	"float systemName9",			// 79
	"float systemName10",
};

char HMI_iconName[LASER_HMI_PARA_CNT][8];

hmiBufUnion m_hmiBufUnion;

//-********************************************************************************************
//   C _ L A S E R   H M I . C _ L A S E R   H M I

//-********************************************************************************************
c_laserHmi::c_laserHmi(c_serial *dev) : c_hmi(dev){
    for (u8 i=0; i<LASER_HMI_PARA_CNT; i++) {
        p_iconTxt[i] = HMI_paraName[i];
		pp_iconName[i] = HMI_iconName[i];
    }
	
    m_iconValue.byte.power = 100;
    m_iconValue.byte.speed = 100;
    m_iconValue.byte.fileSlider = 20;
	init(m_iconValue.all, p_iconTxt, pp_iconName, LASER_HMI_PARA_CNT);
}

//-********************************************************************************************

