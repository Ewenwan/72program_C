#include "stdio.h"
#include "stdlib.h" 

/* 
�����ʽ�׳˵ĺ� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-28 

*/
int main(int argc, char *argv[]) 
{
	int i = 1;
	float e = 1.0;
	float t = 1.0;
	
	do
	{
		t = t/i;
		i++;
		
		e= e+t;
		
	}while(t>1e-5);
	
	printf("%f\n",e);
	
	
	getchar();
	return 0;
}
