#include "stdio.h"
#include "stdlib.h" 
#include "math.h" 
#define max 10

/* 
���ֲ������� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-02

**/

void  insertsort(int array[],int top);
int main(int argc, char *argv[]) 
{
	int i,j;
    int array[max];
    
    printf("������10���������Կո����\n"); 
    for(i=0;i<max;i++)
    {
     scanf("%d",&array[i]);	
	}
        
    insertsort(array,max-1);
    for(j=0;j<max;j++)
    {
   	 printf("%4d%",array[j]);	
	}
        
  
  	getchar();
	return 0;
}


 
void insertsort(int array[],int top)
{
	int i,j;
	
    for(i=1;i<=top;i++){
        int left=0;
        int right=i-1;
        int temp=array[i];
        while(right>=left)
        {
            int middle=(left+right)/2;
            if(array[middle]>temp)
                right=middle-1;
            else
                left=middle+1;
        }
        for(j=i-1;j>=left;j--)
            array[j+1]=array[j];
        array[left]=temp;
    }
}

