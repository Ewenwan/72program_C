#include "stdio.h"
#include "stdlib.h" 


/* 
һ��������ָ���������� 
int *p ��һ��ָ�룬��ʾp��ָ��ĵ�ַ�����ŵ���һ��int���͵�ֵ 
int **p ������ָ�룬��ʾp��ָ��ĵ�ַ�����ŵ���һ��ָ��int���͵�ָ�루��pָ��ĵ�ַ�����ŵ���һ��ָ��int��һ��ָ�룩 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-08-02

**/ 
void point(int **);//�������� 

int main(int argc, char *argv[]) 
{
	int line[100];
	int i;
	int *p=line;
	
	
	for(i=0;i<100;i++)
	{
	   *p=i;
		point(&p);
	}
	
	for(i=0;i<100;i++)//��� 
	{
		printf("%4d",line[i]);
		printf("\n");
	}
	
	getchar(); 
	return 0;
}

void point(int **p)
{
	(**p)++; //����ָ��ֵ��1 
	(*p)++;  //һ��ָ���ַ�ӵ�λ 
} 
