#include "stdio.h"
#include "stdlib.h" 
#define max 10 

/* 
��������
�磺
11 19 20 24 25
10 12 18 21 23
4 9 13 17 22
1 2 6 7 15 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-11

**/
int main(int argc, char *argv[]) 
{
	int i,j,k,d,n;
	int a[max][max];
	

	
	while(1)//����n*n�ľ��� 
	{
		printf("������һ������\n");
		scanf("%d",&n);
		
		if(n>=1 && n<=10)
		{
			break;
		}
	}
	
	for(i=0;i<n;i++)//��ʼ����ȫ��0ֵ 
	{

		for(j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	
	for(k=d=1;d<=2*n-1;d++)
	{
		if(d<=n)// ����С�ڵ���10�ľ���ֵ 
		{
			if(d%2)//��������ֵ 
			{
				for(i=n-d;j=0;i++,j++)
				{
					a[i][j] = k++;
				}
			}
			else////����ż��ֵ  
			{
				for(i=n-1,j=d-1;i>=n-d;i--,j--)
				{
					a[i][j] = k++; 
				}
			}	
		} 
		else//�������10�ľ���ֵ 
		{
			if(d%2)
			{
				for(i=0,j=d-n;i<=2*n-1-d;i++,j++)
				{
					a[i][j] = k++;
				}	
			}
			else
			{
				for(i=2*n-d-1,j=n-1;i>=0;i--,j--)
				{
					a[i][j] = k++;
				} 
			}	
		} 
	}
	
	for(i=0;i<n;i++)//��ʽ����� 
	{
		if(i%n)
		{
			printf("\n");
		}
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	printf("\n\n");
	
	getchar();
	return 0;
}
