#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
�ַ�������ȥ���ظ����ַ�
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	char str[100]="pqrsdmnhabcijklotxyzuvwabcefg";

	char *q,*p,*r;
	char c;
	
	for(p=str;*p!='\0'; p++)//��ָ��p����str 
	{
		r = p;
		for(q=p+1;*q;q++)
		{
			if(*r>*q)//�ƶ�q,���ھͽ��� 
			{
				c = *r;
				*r = *q;
				*q = c;
			}
			if(r!=p)//�ƶ�p,�����ھͽ��� 
			{
				c = *r,
				*r = *p;
				*p = c;
			}
		}
	}
	
	for(p=str; *p!='\0'; p++)
	{
		q = p+1;
		while(*q==*p)
		{
			strcpy(p,q);//��q������ p
		}	
	} 
	
	printf("����ȥ�غ���ַ���:%4s\n",str);
	return 0;
}
