#include "stdio.h"
#include "stdlib.h" 


/* 
��һ�޷��ų����ͣ���ǰ�����ֽڹ��ɣ��ֱ������ȫ�ֽ� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/

void pp(unsigned long int k) 
{
	union aa{
		unsigned int a[2];
		unsigned long int b;
	}c,*p;
	
	p = &c;
	c.b = k;
	
	printf("��λ���ֽ�=%0x,��λ���ֽ�=%0x",p->a[1],p->a[0]);
}
int main(int argc, char *argv[]) 
{
	unsigned long int w;
	
	w = 0x12345678;
	
	pp(w);
	
	getchar();
	
	return 0;
}
