
// cfg_op.h

#ifndef _INC_MYOPT_H
#define _INC_MYOPT_H

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct Teacher
{
	int infoId;
	char name[64];
	int age;
	char studentInfo[1024];
}Teacher;

int AddTeacher(char *pfileName, Teacher *pTe);

int ModifyTeacher(char *pfileName, Teacher *pTe);

#ifdef  __cplusplus
}
#endif

#endif 
