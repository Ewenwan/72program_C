#include "stdio.h"
#include "stdlib.h" 


/* 
���������ظ�Ԫ���ַ����Ľ��� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	char s1[50]="abcdefghikjklmopqruvwxyz";
	char s2[50]="zcdefgst";
	char s3[50];
	int i=0;
	int j,k=0;
	
	while(s1[i]!='\0')//��������s1�ַ��� 
	{
		j=0;
		while(s2[j]!='\0')//ƥ������s2�ַ���
		{
				if(s1[i]==s2[j])
			{
				s3[k] = s1[i];//��ȵ��ַ�����s3�� 
				k++;
				break;
			}
			j++;		
		}
		i++; 
	}
	s3[k] = '\0';
	
	printf("����Ϊ��%4s\n",s3); 
	
	getchar();
	return 0;
}
