#include "stdio.h"
#include "stdlib.h" 
#define max 100

/* 
��ͨ���������㷨��
1 1 1 1 1
1 2 2 2 2
1 2 3 3 3
1 2 3 4 4
1 2 3 4 5

 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-12

**/

int main(int argc, char *argv[]) 
{
	int i,j,n;
	int a[max][max];
	
	printf("�������һ������\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j)//�۲��±�i���ڵ���j��ֵ��ֵj+1; 
			{
				a[i][j] = j+1;
				
			}
			else////�۲��±�iС��j��ֵ��ֵi+1; 
			{
				a[i][j] = i+1;
			}
		
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)//ѭ��5����� 
		{
			printf("%4d",a[i][j]);
			
		}
		if(j%n==0)//ÿ������һ������ 
		{	
			printf("\n\n");	
			
		}
	}
	
	getchar(); 
	return 0;
}
