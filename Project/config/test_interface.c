#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "cfg_op.h"
#include "myop.h"


#define  DB_sid			"oracle_sid"
#define  DB_User		"appuser"
#define  DB_PassWord	"appuser"
#define	 CFG_FILENAME	"c:/cfg.ini"

void main_menu()
{
	printf("\n1 Test AddTeacher(�������������ļ�)	");
	printf("\n2 Test ModifyTeacher(���Զ�ȡ�����ļ�)	");
	printf("\n0 exit(0)        (�����˳�)	    ");
	printf("\nplease enter your choice:[1/2/0]: ");
	return;
}


int  Test_AddTeacher()
{
	int rv = 0;
	char *pfileName = "./teacher.ini";
	Teacher t1;
	memset(&t1, 0, sizeof(Teacher));
	t1.infoId = 1;
	t1.age 	  = 11;
	
	strcpy(t1.name, "name");
	strcpy(t1.studentInfo,"s1, s2, s3");
	AddTeacher(pfileName, &t1);
	

	printf("��д�������̵Ʋ���ͨ��\n");

End:
	return rv;
	
}

int  Test_ModifyTeacher()
{
	int rv = 0;
	//int ModifyTeacher(char *pfileName, Teacher *pTe);

End:
	return rv;
	
}


/*
int  Test_GetCfgItem()
{
	int		rv = 0; 
	int		choice = 0;

	char	*value = "orcl";
	int		valuelen = strlen(value);

	char	value2[100];
	int		value2Len = 100;



	memset(value2, 0, sizeof(value2));


	rv  = SetCfgItem(CFG_FILENAME, DB_sid, value, valuelen);
	if (rv != 0)
	{
		printf("SetCfgItem() err: %d \n", rv);
		goto End;
	}

	rv  = GetCfgItem(CFG_FILENAME, DB_sid, value2, &value2Len);
	if (rv != 0)
	{
		printf("SetCfgItem() err: %d \n", rv);
		goto End;
	}

	//�Ƚϳ���
	if (valuelen != value2Len)
	{
		printf("(valuelen != value2Len) err\n");
		goto End;
	}
	//�Ƚ�����
	if (memcmp(value, value2, value2Len) != 0)
	{
		printf("(memcmp(value, value2, value2Len)) err\n");
		goto End;
	}

	printf("��д�������̵Ʋ���ͨ��\n");

End:
	return rv;
	
}
*/

int  main()
{
	int		rv = 0; 
	int		choice = 0;

	for(;;)
	{
		main_menu();
	    scanf("%d", &choice);
        switch (choice)
		{
		case 1:
			Test_AddTeacher();   break;
		case 2:
			Test_ModifyTeacher();   break;
		case 0:
			exit(0);
		default:
			exit(0);
		}
	}

End:
	return rv;
	getchar();
}


