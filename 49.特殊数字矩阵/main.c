#include "stdio.h"
#include "stdlib.h" 


/* 
�������־��� (�������ҶԳƣ� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-10

**/
int main(int argc, char *argv[]) 
{
	int i,j,k,n,space;
	int s=40;
	
	printf("������һ������\n"); 
	scanf("%d",&n);
	
	for(j=1;j<=n;j++)
	{
		space = s-3*j;
		printf("%*c",space);//��ӡ�հ� 
		for(k=1;k<=j;k++)//��ӡ������� 
		{
			printf("%3d",k);
		}
		for(k=j-1;k>=1;k--)//��ӡ�ұ����� 
		{
			printf("%3d",k);
		}
		printf("\n");
		
	}
	
	getchar();
	return 0;
}
