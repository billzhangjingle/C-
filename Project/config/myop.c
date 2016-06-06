#include <stdio.h>
#include <string.h>
#include <string.h>
#include "myop.h"

int AddTeacher(char *pfileName, Teacher *pTe)
{
	int ret = 0;
	//准备写配置文件的关键字，根据ID 动态构建
	
	char Teacher_InfoID[128];
	char Teacher_Name[128];
	char Teacher_Age[128];
	char Teacher_StudentInfo[1024];
	char infoId[128];
	char infoAge[128];
	
	sprintf(Teacher_InfoID, "%s%d", "Teacher_InfoID_",pTe->infoId );
	sprintf(Teacher_Name, "%s%d", "Teacher_Name_",pTe->infoId );
	sprintf(Teacher_Age, "%s%d", "Teacher_Age_",pTe->infoId );
	sprintf(Teacher_StudentInfo, "%s%d", "Teacher_StudentInfo_",pTe->infoId );
	
	sprintf(Teacher_StudentInfo,"%d", pTe->infoId);
	sprintf(infoAge,"%d", pTe->age);
	
	ret = SetCfgItem( pfileName, Teacher_InfoID, infoId, strlen(infoId) );
	if( ret != 0)
	{
		printf("func setcfgitem :err:%d\n", ret);
		return ret;
	}
	
	ret = SetCfgItem( pfileName, Teacher_Name, pTe->name, strlen(pTe->name) );
	if( ret != 0)
	{
		printf("func setcfgitem :err:%d\n", ret);
		return ret;
	}
	
		
	ret = SetCfgItem( pfileName, Teacher_Age, infoAge, strlen(infoAge) );
	if( ret != 0)
	{
		printf("func setcfgitem :err:%d\n", ret);
		return ret;
	}
	
		
	ret = SetCfgItem( pfileName, Teacher_StudentInfo, pTe->studentInfo, strlen(pTe->studentInfo) );
	if( ret != 0)
	{
		printf("func setcfgitem :err:%d\n", ret);
		return ret;
	}
	
	
}

int ModifyTeacher(char *pfileName, Teacher *pTe)
{
	
}