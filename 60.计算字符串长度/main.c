#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
�����ַ��������㷨 

 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-16

**/

int alph(char c)
{
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		return 1;
	} 
	else
	{
		return 0;
	}
	
}

int main(int argc, char *argv[]) 
{
	char string[100];
	int len=0;
	int i,p;
	int length=0;
	int flag=1;
	
	printf("�������һ���ַ�����\n");
	gets(string);
	
	for(i=0;string[i]!='\0';i++)
	{
		if(alph(string[i]))
		{
			if(flag)
			{
				p=i;
				flag=0;
				len++;
			}
			else
			{
				len++;
			}
		}
		else
			{
				flag=1;
				if(len>length)
				{
					length=len;
					len=0;
				}
			}
	}
	length = len;
	printf("��ĸ�ַ��ĳ���Ϊ��%d\n",length);

	getchar();
	return 0;
}
