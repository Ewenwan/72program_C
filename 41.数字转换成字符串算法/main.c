#include "stdio.h"
#include "stdlib.h" 
#include "string.h"
#define max 100


/* 
����ת�����ַ����㷨
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int i=0;
	int j=0;
	int k=0;
	int n;
	int b[max];
	char a[max];
	
	printf("������һ������\n");
	scanf("%d",&n);
	
	while(n%10)
	{
		b[j]=n%10;
		n/=10;
		k++;
		j++;
		
	}
	for(j=k-1;j>=0;j--)
	{
		a[i] = b[j]+48;
		i++;
	}
	
	puts(a); 
	
	getchar(); 
	return 0;
}
