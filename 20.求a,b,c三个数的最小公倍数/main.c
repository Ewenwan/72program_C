#include "stdio.h"
#include "stdlib.h" 

/* 
����С������
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-06-27 

*/



int main(int argc, char *argv[]) 
{
    int x,y,z;
    printf("����������������֮���ÿո������\n") 
    scanf("%d%d%d", &x, &y, &z);
    printf("��С������=%d\n", lcm(lcm(x, y), z))
	
	getchar();
	
	return 0;
}

//���Լ��
int gcd( int x , int y){  
    int max,min,temp;  
    max = x > y ? x : y ;  
    min = x < y ? x : y ;  
    while( max % min ){  
  
        temp = max % min;  
        max = min;  
        min = temp;  
    }  
    return min;  
}  
//��С������  
int lcm( int x , int y ){  
    return x*y/gcd(x,y);  
} 
/**

PS:ͷ���༭���ݲ�֧�ִ����ʽ������������ʽ��ʧ���蹤��Դ����˽�š������ִ��󣬻�ӭָ����

**/
