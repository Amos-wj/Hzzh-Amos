/*
 * File: Logic.c
 * File Created: Tuesday, 9th October 2018 2:43:29 pm
 * version: v00.00.01 8��ײ�
 * Description:�û��߼�
 * Modified By:yang
 * -----
 * Copyright 2018 - 2018, <<hzzh>>
 */
 
#include "Logic.h"

/*ȫ�ֱ�����ͳһ����*/
Task LogicTask = { 0 }; //ͳһ��������
SysData Data= { 0 };   //ͳһ��������


#include "Logic.h"
#include "math.h"
#include "liushuideng.h"

#define ton1 0;
void liushuideng1(LogicParaDef *my)
{
	static int i=0;
	switch(my->step)
	{
		case 1:
			//for(i=0;i<=23;i++)
		  OutPut_SetSta(i,0);
		  ton_et[0] = 0;
		  my->step=2;
		  break;
		
		case 2:
			if(ton(0,1,200))
			{
				//for(i=0;i<=23;i++)
				OutPut_SetSta(i,1);
				ton_et[0] = 0;
				my->step=3;
			}
			break;
			
		case 3:
			if(ton(0,1,200))
			{
				i++;
				if(i>23)
				{
					i=0;
				}
				my->step=1;
			}
			break;
			
		default:
		{
			i=0;
			my->step=1;
		}
		break;
	}
}



void Logic()
{
    /******���������߼�*******/
//�˴�ֻ�Ź��̶�����ص����к��������������뵥����tool�ļ����ж���

liushuideng1(&LogicTask.liushuideng1Task);
	
}



