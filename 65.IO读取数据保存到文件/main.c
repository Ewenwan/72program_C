#include "stdio.h"
#include "stdlib.h" 
#define null 0

/* 
IO��ȡ���ݱ��浽�ļ�
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-31

**/ 

int main(int argc, char *argv[])
{
	FILE *fp; 
	char str[100];
	int i;
	
	if((fp=fopen("d:\\test.dat","w"))==null)
	{
		exit(1);
	}
	
	printf("������һ���ַ���\n");
	
	gets(str);
	
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]= str[i]-32;
			putc(str[i],fp);
			i++;
		}
	}
	fclose(fp);
	
	getchar();
	return 0;
}
