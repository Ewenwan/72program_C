#include "stdio.h"
#include "stdlib.h" 


/* 
����洢������ǣ����ǰ55�� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int a[60];
	int i,j,k=0;
	
	for(i=1;;i++)
	{
		if(k+1>55)
		{
			break;
		}
		a[k+1] = 1;
		
		for(j=2;j<=i;j++)
		{
			if((k+j)>55)
			{
				break;
			}
			a[k+j] = a[k+j-i] + a[k+j-i+1];
		}
		a[k+=i] = 1;
	} 
	printf("\n");
	
	for(i=1; i<=55;i++)
	{
		printf("%4d",a[i]);
	}
	
	printf("\n\n");
	
	getchar(); 
	return 0;
}
