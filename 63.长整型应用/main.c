#include "stdio.h"
#include "stdlib.h" 


/* 
������Ӧ�� 
4���ַ�'a','b','c','d'����һ������������4���ֽ��ɳ����ͱ��� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-31

**/ 

void pp(char k[])
{
	union aa{
		char a[4];
		unsigned long int b;
	}m;
	
	m.a[0]=k[0];
	m.a[1]=k[1];
	m.a[2]=k[2];
	m.a[3]=k[3];
	
	printf("%2d\n",m.b);
}
int main(int argc, char *argv[]) 
{
	char w[4]="abcd";
	pp(w);
	
	getchar(); 
	return 0;
}
