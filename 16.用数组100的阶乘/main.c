#include "stdio.h"
#include "stdlib.h"
#define max 1000

/* 
��������100�� 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-26

*/
int main(int argc, char *argv[]) 
{
	int i,j,k,kc;
	int n=100;
	int m[max];
	
	for(i=0; i<max; i++)
	{
		m[i] = 0;
		m[0] = 1; 
 	}
	
	for(i=2; i<=n; i++)
	{
		kc = 0;
		for(j=0; j<max; j++)
		{
			k = m[j]*i + kc;
			kc = k/10;
			m[j] = k%10;
		}
	
	}
	
	if(kc>0)
	{
		printf("overflow!");
	}
	else
	{
		i = max-1;
		while(!m[i])
		{
			i--;
		}
		while(i>=0)
		{
			printf("%d",m[i]);
			i--;
		}
		printf("\n\n\n");
	}
	
	getchar();
	return 0;
}

/**

PS:ͷ���༭���ݲ�֧�ִ����ʽ������������ʽ��ʧ�����蹤��Դ����˽�š�

���������Ĳ��㣬����£��緢�ִ��󣬻���ָ����лл��

**/
