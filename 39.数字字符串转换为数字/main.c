#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 
#define max 100


/* 
�������ַ���ת��Ϊ����
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int i,j;
	int k=0;
	int len=0;
	int b[max];
	char a[max];
	
	printf("������һ�������ַ���\n");
	gets(a);
	
	len = strlen(a);
	
	for(j=0,i=0;i<len;i++)
	{
		b[j] = a[i]-48;
		j++;
	}
	len = len-1;
	k = b[0];
	
	for(j=1;j<=len;j++)
	{
		k = k*10+b[j] ;
	}
	printf("�����ַ���ת��Ϊ���ָ�ʽ=%d\n\n",k);
	
	return 0;
}
