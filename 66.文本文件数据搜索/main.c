#include "stdio.h"
#include "stdlib.h" 


/* 
�ı��ļ���������
ͳ��һ�ı���ÿ����ĸ���ֵĴ����������ִ�Сд�� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-08-02

**/ 

int main(int argc, char *argv[]) 
{
	FILE *fp;
	char ch;
	char fname[20];
	int i=0;
	int count[26];
	
	printf("�����ļ�·������:d:\\test.dat\n");
	//gets(fname);
	
	if((fp=fopen("d:\\test.dat","r"))==NULL)//���쳣���˳� 
	{
		exit(1);
	}
	
	for(i=0;i<26;i++)//��ʼ��ͳ�� 
	{
		count[i]=0;
	} 
	
	while((ch=fgetc(fp))!=EOF)//��ȡ�����ַ� 
	{
		if(ch>='a' && ch<='z')
		{
			count[ch-97]=count[ch-97]+1;
		}
		if(ch>='A' && ch<='Z')
		{
			count[ch-65]=count[ch-65]+1;
		}
	}

	
	for(i=0;i<26;i++)
	{
		printf("%c,%c,��ĸ���ֵ��ܴ���%d\n",i+65,i+97,count[i]);
	}
	
	fclose(fp);
	
	
	getchar(); 
	return 0;
}
