#include "stdio.h"
#include "stdlib.h" 


/* 
��ӡ���������㷨�Ľ� 
 
@author 72���
΢�Ź��ںţ�72��� 
All Rights Reserved By ��΢�Ƽ���FENWII��

@ 2018-07-11


���ܣ���ӡ��������
����˵����matrix ����������         (x��y) ����һ��Ԫ�ص�����
          start ����һ��Ԫ�ص�ֵ     
          n ������Ĵ�С
**/
void setMatrix(int **matrix, int x, int y, int start, int n) {
       int i, j;
       if (n <= 0)
              return;
       if (n == 1) {
              matrix[x][y] = start;
              return;
       }
       for (i = x; i < x + n-1; i++)//�ϲ� //
       {
       		matrix[y][i] = start++;
	   }
              
       for (j = y; j < y + n-1; j++)//�ұ�
       {
       		matrix[j][x+n-1] = start++;
	   }
              
       for (i = x+n-1; i > x; i--)//�ײ� 
       {
       		matrix[y+n-1][i] = start++;
	   }
              
       for (j = y+n-1; j > y; j--) //��� 
       {
       		matrix[j][x] = start++;
	   }
              
       setMatrix(matrix, x+1, y+1, start, n-2); // �ݹ� 
}
 
int main(int argc, char *argv[]) 
 {
    int i, j;
    int n;
    int **matrix; //�������󣨶�ά���飩
      
    printf("������һ������\n");  
    scanf("%d", &n);
    
    matrix = (int **)malloc(n * sizeof(int *)); //Ϊ�������ռ�
    for (i = 0; i<n; i++)
    {
    	matrix[i] = (int *)malloc(n * sizeof(int));
	}
              
      
		setMatrix(matrix, 0, 0, 1, n);
 
       
       for(i = 0; i < n; i++) //��ӡ��������
	   {
              for (j = 0; j < n; j++)
              {
              	printf("%4d", matrix[i][j]);
			  }
                     
       		printf("\n");
       }
}
