#include "stdio.h"
#include "stdlib.h" 
#include "math.h" 

/* 
�����ַ���
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-30 

**/

int main(int argc, char *argv[]) 
{

	int i,m,k,flag=1;
	
	while(flag)
	{
		printf("������һ�����ڵ���2��������");
		scanf("%d",&m);
		if(m>=2)
		{
			flag = 0;
		}
	}

	k=sqrt((double)m);

	for(i=2;i<=k;i++)
	{
		if(m%i==0)
		{
	    	break;	
		}
	}
	
	if(i>k)
		{
			printf("%d ��������\n",m);	
		}
		
		else
		{
			printf("%d ����������\n",m);
		}
			
	
	return 0;
}
