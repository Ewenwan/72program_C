#include "stdio.h" 
#include "stdlib.h"

/* 
�󼯺������Ӽ�

@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-26 

*/

int main(int argc,char **argv)
{
	int n,i,j;
	int start,end; //������β��� 

	printf("�����뼯��Ԫ�ظ���n��ֵ������������");
	scanf("%d",&n); 

	printf("{ }\n");//����ռ�

	for(end=1;end<=n;end++)
	{
		printf("{%d }\n",end); 
		
		for(start=end;start>0;start--)
		{ 
			for(j=1;j<start;j++)
			{
			printf("{");
			printf(" %d ",j);
				for(i=start;i<end;i++)
				{
					printf(" %d ",i);
				} 
				printf("%d}\n",end);
			}
		}
	}
}
