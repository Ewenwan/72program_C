#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 

/* 
ɾ��ָ�������ַ���
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-02 

**/

void deleteString(char* array,char*result,int begin,int len)//begin ��ʼɾ����λ�ã�len��ɾ���ĳ��ȡ�
{
 int i=0,j=0;
 while(array[i]!='\0')
 {
  if(i<(begin-1)||i>=(begin+len-1))
   result[j++]=array[i++];
  else
   i++;
 }
 result[j]='\0';
}
int main(void)
{
 char s1[100];
 char s2[100];
 int begin,len; 
 printf("������һ���ַ���\n");
 gets(s1);
 
 printf("������ɾ����ʼ�±�begin�ͳ���len���Կո����\n");
 scanf("%d%d",&begin,&len);
 deleteString(s1,s2,begin,len);
 
 puts(s2);
 return 0;
}
