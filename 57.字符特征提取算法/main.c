#include "stdio.h"
#include "stdlib.h" 


/* 
�ҳ�1--n������r������������� 

 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-13

**/

int a[100];
/**
m���ַ�������
n����ȡ���� 


**/
void comb(int m, int k)
{
	int i,j;
	
	for(i=m; i>=k;i--)
	{
		a[k] = i;//��ĩβ��ʼ��ǰɨ����ȡ 
		if(k>1)//����1����ǰ�ƶ� 
		{
			comb(i-1,k-1);
		}
		else
		{
			for(j=a[0]; j>0;j--)//���ײ�ɨ�� 
			{
				printf("%4d",a[j]);
				
			}
			
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) 
{
	int m,n;
	
	printf("�����������������Կո������\n");
	scanf("%d%d",&m ,&n);
	
	a[0]=n;
	comb(m,n); 
	
	return 0;
}
