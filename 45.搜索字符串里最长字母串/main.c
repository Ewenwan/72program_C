#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
�����ַ��������ĸ���㷨 

 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int alph(char c)//�ж���ĸ�ַ� 
{
	if(c<='z' && c>='a' || c<='Z'&& c>='A') 
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
	char str[200];
	int len=0;
	int i,p;
	int length = 0;
	int flag =1; //�������� 
	
	printf("�������ַ���\n");
	gets(str);//��ȡ�ַ��� 
	
	for(i=0; str[i]!='\0'; i++)//��ͷ��βɨ�� 
	{
		if(alph(str[i]))
		{
			if(flag)
			{
				p = i;//��¼��ĸλ�� 
				flag = 0;//�رռ������� 
				len++;	
			}
			else
			{
				len++;
			}
		}
		else
		{
			if(len>length)//��¼��ĸ���� 
			{
				length = len;
			}
			len = 0;
		}
	}
	printf("��ĸ�������Ϊ��%d,λ���ڵ�%d��\n",length,p);
	
	getchar();
	return 0;
}
