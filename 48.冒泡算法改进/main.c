#include "stdio.h"
#include "stdlib.h" 
#define m 100
#define n 5


/* 
ð���㷨�Ľ� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-10 

**/

int main(int argc, char *argv[]) 
{
	typedef struct{
		int key;
		float inf;
	}element;	
	
	element list[n];
	int i,j;
	element extr;
	int r[5]={8,6,3,1,5};
	
	
	
	for(i=0;i<5;i++) //��ֵ�ṹ�� 
	{
		list[i].key = r[i];
	}
	

		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(list[j].key>list[j+1].key)//����ð�� 
				{
					extr = list[j+1];
					list[j+1] = list[j];
					list[j] = extr;
					
				}
				
			} 
			
		
		}
		

	
	for(i=0;i<n;i++)
	{
		printf("%4d",list[i]);
	} 
	
	getchar();
	return 0;
}
