#include "stdio.h"
#include "stdlib.h" 


/* 
�������ֵ�λ��
��һ������4λ��������������Ǽ�λ�����ֱ����ÿһλ���Ͱ����������λ�� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-31

**/ 


int main(int argc, char *argv[]) 
{
	int a,b[4];
	int i=0;
	int t=0;
	
	do
	{
		printf("������һ������\n");
		scanf("%d",&a);
		
		if(a<0&a>9999)
		{
			printf("�����������");	
		} 
		
		 
		
	}while(a<0&a>9999);
	
	
	while(a)
	{
		b[i++] = a%10;
		a = a/10;
		t++;
	}
	printf("���ֵĳ�����%d\n",t);
	
	for(;i>0;i--)
	{
		printf("%2d",b[i-1]);
	}
	printf("\n");
	
	for(;i<t;i++)
	{
		if(b[i]==0)
		{
			i++;
		}
		else
		{
			printf("%2d",b[i]);
		}
	}
	printf("\n");
	
	
	getchar(); 
	return 0;
}
