#include "stdio.h"
#include "stdlib.h" 
#define max 100 

/* 
�ַ���������ָ�����ʳ��ֵ�λ�� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

*/

int count(char s1[],char s2[])
{
	int i,j;
	int n=0;
	int k=0;
	
	for(i=0; s1[i]!='\0';i++)
	{
		j = i;
		k = 0;
		while(s2[k]==s1[j])
		{
			j++;
			k++;
		}
		if((s2[k]=='\0'))
		{
			printf("position=%d\n",n++);
			
		}
		
		printf("count=%d\n",n);
	}
}
int main(int argc, char *argv[]) 
{
	int n;
	char s1[max];
	char s2[max];
	
	printf("�����ַ���\n");
	
	gets(s1);
	
	printf("������ҵ���\n"); 
	
	gets(s2);
	
	count(s1,s2);
	
	
	getchar(); 
	
	return 0;
}
