#include "stdio.h"
#include "stdlib.h" 


/* 
ʹ��ָ�뽻��ֵ 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-08-02

**/ 

void swap(int *x,int *y)//ָ��ֵ���� 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(int argc, char *argv[]) 
{
	int a,b;
	
	printf("���������������Կո����\n") ;
	scanf("%d%d",&a,&b);
	printf("����ǰa=%d,b=%d\n",a,b);
	swap(&a,&b);
	
	printf("������a=%d,b=%d\n",a,b); 
	
	getchar();
	return 0;
}
