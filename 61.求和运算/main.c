#include "stdio.h"
#include "stdlib.h" 


/* 
����s=11+22+33+...+nn; 

 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-15

**/ 
int main(int argc, char *argv[]) 
{
	int i,j,n;
	long sum,term;
	
	printf("������һ��������\n");
	scanf("%d",&n);
	
	for(sum=0,i=1;i<=n;++i)
	{
		term=1;
		j=1;
		do
		{
			term=i;//�����λ 
			
			
		}while(++j<=i);
		term +=10*i;//����ʮλ 
		
		sum +=term;
	} 
	
	printf("���ʽ��͵ã�%d\n",sum);
	
	getchar();
	return 0;
}
