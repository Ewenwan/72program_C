#include "stdio.h"
#include "stdlib.h" 


/* 
Լɪ��Ӧ�ã�17��Χ��һȦ����1-5�����������һ���˵ı�� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-04

**/
int main(int argc, char *argv[]) 
{
	int i, test,head,p[17];
	
	for(i=0;i<16;i++)
	{
		p[i] = i+1; //��ʼ��p[17],����ֵ 
	}	
	p[16] = 0;
	
	test = 0;
	
	while(test!=p[test])
	{
		for(i=1; i<5;i++) //ѭ�� 1-5���� 
		{
			head = test;
			test = p[test];
		}
		p[head] = p[test];//����5����������Ϊ��һ�� 
		test = p[head];
		
	}

	printf("���һ�˱���ǣ�%d ��\n",p[test]);
	
	getchar();
	return 0;
}
