#include "stdio.h"
#include "stdlib.h" 


/* 
ʮ����ת��Ϊ����ʮ��������� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	char b[17]={"0123456789ABCDEF"};
	
	int xs[64];
	int mm;
	int i=0;
	int base;//���� 
	long ss;
	
	printf("������ʮ������\n");
	scanf("%ld",&ss);
	
    printf("������ָ����λ��2-16��λ\n");
	scanf("%d",&base);

	do
	{
		xs[i++] = ss%base;
		ss = ss/base;
	}while(ss!=0);
	
	for(i=i-1; i>=0; --i)
	{
		mm = xs[i];
		printf("%c",b[mm]);
	}
	getchar(); 
	return 0;
}
