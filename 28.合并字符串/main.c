#include "stdio.h"
#include "stdlib.h" 
#include "string.h"
#define max 100 
/* 
����С������
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-29 

*/

char cation(char *s1,char *s2)
{
	int i,j,k;
	i =strlen(s1);
	j =strlen(s2);
	if(j<max)
	{
		for(k=0; k<j;k++)
		{
			s1[i+k] = s2[k];
			
		}
		s1[i+k] ='\0'; 
	}
	
}
	
int main(int argc, char *argv[]) 
{
	char s1[100],s2[100];
	
	gets(s1);
	gets(s2);
	 
	cation(s1,s2);
	
	puts(s1);
	
	getchar();
	return 0;
}
