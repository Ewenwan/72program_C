#include "stdio.h"
#include "stdlib.h" 


/* 
���ξ��������㷨
1 2 3 ... n
n 1 2 ... n-1
n-1 n 1 ... n-2
  .
  .
2 3 4 ... 1
 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-10

**/
int main(int argc, char *argv[]) 
{
	int i,n,j;
	int a[100][100];
	
	printf("������һ������\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=j>=i?j-i+1:n+j-i+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i%n)
		{
			printf("\n");
		}
		for(j=0; j<n; j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	printf("\n\n");
	
	getchar();
	return 0;
}
