#include "stdio.h"
#include "stdlib.h" 

/* 
�����ʽF��n��=a0x^n + a1x^n-1 + ...+ an-1x + an
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-28 

*/

int main(int argc, char *argv[]) 
{
	int x,n,i;
	int a[100],f=0;
	printf("������������x��n\n");
	do
	{
	 	scanf("%d%d",&x,&n);	
	}while(n<=0);
	printf("����%d��������ʼ��a[100]\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f = a[0];
	a[0] = 0;
	i = 1;
	
	do
	{
		f=f*x+a[i];
		i++;	
	}while(i<=n);
	
	printf("%8d\n",f); 
	
	getchar();
	return 0;
}
