#include "stdio.h"
#include "stdlib.h" 


/* 
���������㷨�� 
1 1 1 1 1
2 1 1 1 1
3 2 1 1 1
4 3 2 1 1
5 4 3 2 1
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-11

**/
int main(int argc, char *argv[]) 
{
	int i,j,n;
	int a[100][100];
	
	printf("������һ������\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>=i)//j>iʱ����ֵ1 
			{
				a[i][j] = 1;
				
			}
			else// ��������ֵi-j+1
			{
				a[i][j] = i-j+1;
			}
		}
	}
	
	for(i=0;i<n;i++)//��ʽ����� 
	{
		if(i%n)
		{
			printf("\n");
		}
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	printf("\n\n");
	
	getchar(); 
	return 0;
}
