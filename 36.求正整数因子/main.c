#include "stdio.h"
#include "stdlib.h" 


/* 
������������ 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
void factor(int n)
{
	int i,k;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			k=i;
			break;
		}
	}
	printf("%d",k);
	
	if(n!=i)
	{
		printf("*");
		n = n/i;
		factor(n);
	}
}
int main(int argc, char *argv[]) 
{
	int n;
	printf("����һ������\n");
	scanf("%d",&n);
	printf("%4d=",n) ;
	
	factor(n);
	printf("\n");
	
	
	getchar(); 
	return 0;
}
