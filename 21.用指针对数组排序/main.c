#include "stdio.h"
#include "stdlib.h" 

/* 
ʹ��ָ����������� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-28

*/

void sort (int *p, int n)
{
	int i,j,k,t;
	
	for (i=0; i<n; i++)
	{
		k = i;
		for(j=i+1; j<n; j++)
		{
			if(*(p+j)>*(p+k))
			{
				k = j;
			}
			
			if(k!=i)
			{
				t = *(p+i);
				*(p+i) = *(p+k);
				*(p+k) = t;
			}
		}
	}
}
int main(int argc, char *argv[]) 
{
	int i,n=10;
	int *p;
	int a[10]={1,9,7,4,2,3,6,8,0,5};
	
	p = a;
	sort(p,n);
	for (i=0; i<n; i++)
	{
		printf("%4d",a[i]);
	}
	
	getchar(); 
	return 0;
}
/**

PS:�༭���ݲ�֧�ִ����ʽ������������ʽ��ʧ���蹤��Դ����˽�š������ִ��󣬻�ӭָ����

**/
