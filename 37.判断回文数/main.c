#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 


/* 
�жϻ����� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int i=0;
	int j,n;
	int k=0;
	int a[20];

	printf("������һ������\n");
	
	scanf("%d",&n);
	while(n%10)
	{
		a[i] = n%10;
		n /= 10;
		k++;
		i++;
	}
	
	i = 0;
	j = k-1;
	
	while((i<=k/2)&&(j>=k/2))
	{
		if(a[i]==a[j])
		{
			i++;
			j--;
			if(i==j ||i+1==j)
			{
				printf("�ǻ�����");
			}
		
		
		}
		else
		{
			printf("���ǻ�����");
			break;
		} 
	}
	
	getchar();
	return 0;
}
