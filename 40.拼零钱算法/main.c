#include "stdio.h"
#include "stdlib.h" 


/* 
ƴ��Ǯ�㷨 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/

int main(int argc, char *argv[]) 
{
	int i,j,k,n,m;
	
	n = 100;
	k = 0;
	
	for(i-0;i<=n/5;i++)
	{
		for(j=0;j<=n/2;j++)
		{
			m = 100-i*5-j*2;
			if(m<0)
			{
				continue;
			}
		}
		
		printf("5cent=%d,2cent=%d,1cent=%d\n",i,j,m);
		k++;
	}
	printf("ƴ�մ���=%d",k);
	
	getchar();
	return 0;
}
