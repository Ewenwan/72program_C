#include "stdio.h"
#include "stdlib.h" 


/* 
��������ĵݹ��㷨 
1 2 3 4 5 
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 8

 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-11

**/

int n, a[100][100];

void matrix(int i,int j, int m)
{
	static k=1;
	
	for(;j<n-m;j++)//�ϲ� 
	{
		a[i][j] = k++;
	
	}
	
	j = j-1;
	i++;
	for(;i<n-m;i++)//�ұ� 
	{
		a[i][j] = k++;

	}
	
	i--;
	j--;
	for(;j>m-1;j--)//�ײ� 
	{
		a[i][j] = k++;

	}
	i--;
	j++;
	for(;i>m;i--)//��� 
	{
		a[i][j] = k++;

	}
	i++;
	j++;
	
	
	if(m<n/2)
	{
		m++;
		matrix(i,j,m);
	}
} 
int main(int argc, char *argv[]) 
{
	int i=0;
	int j=0;
	int m=0;
	
	printf("������һ������\n");
	scanf("%d",&n);
	
	matrix(i,j,m);
	
	for(i=0;i<n;i++)//��� 
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
			
		}
		printf("\n");
	}
	
	getchar();
	return 0;
}
