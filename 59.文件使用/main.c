#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
�ļ�ʹ�� 

 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-11

**/

struct em{
	int no;
	char name[8];
	int age;
}em[10]; 
FILE *fp;

int main(int argc, char *argv[]) 
{	
	int i,n;
	
	printf("������һ��������\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("������no\n");
		scanf("%d",&em[i].no);
		
		printf("�������֣�\n");
		scanf("%s",&em[i].name);
		
		printf("��������age\n");
		scanf("%d",&em[i].age);
	}
	
	if((fp=fopen("D:\\employer.txt","w"))==NULL)
	{
		exit(1);
	}
	fwrite(em,sizeof(em),1,fp);
	fclose(fp);
	
	if((fp=fopen("D:\\employer.txt","r"))==NULL)
	{
	 	exit(1); 
	}
	
	for(i=0;i<n;i++)
	{
		if(em[i].age>=50)
		{
			printf("%2d%2s%2d\n",em[i].no,em[i].name,em[i].age);
		}
	}
	
	fclose(fp);
	getchar();
	return 0;
}
