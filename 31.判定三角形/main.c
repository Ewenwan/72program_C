#include "stdio.h"
#include "stdlib.h" 
 

/* 
�ж������� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-30 

**/

int judge(int *);

int main(int argc, char *argv[]) 
{
	int i,s[3]={3,4,5};
	
	switch(judge(s))
	{
		case 0:
		 printf("�������");
		 break;
		
		case 1:
			printf("�������� \n") ; 
			break; 
		case 2:
			printf("��������ȷ����!\n");
			break;
	}
	return 0;
}

int judge(int *s)
{
	int i;
	
	for(i=0;i<3;i++)
	{
		if(s[i]<=0||s[i%3]>s[(i+1)%3]+s[(i+2)%3])
		{
			return 0;
		}
		
		if(s[i%3]*s[i%3]+s[(i+1)%3]*s[(i+1)%3]==s[(i+2)%3]*s[(i+2)%3])
		{
			return 1;
		}
		else
		{
			return 2;
		}
		
	}	
}
