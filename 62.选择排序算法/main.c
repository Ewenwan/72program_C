#include "stdio.h"
#include "stdlib.h" 


/* 
ѡ�������㷨 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-16

**/ 
int main(int argc, char *argv[]) 
{
	int i,j,k,t;
	int n=10;
	int a[10]={9,4,2,1,5,6,8,3,7,0};
	
	for(i=0; i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
			if(i!=k)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	} 
		
	getchar(); 
	return 0;
}
