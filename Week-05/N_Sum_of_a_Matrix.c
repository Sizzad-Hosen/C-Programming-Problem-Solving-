#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);

     int mat [row][col],mat2[row][col],mat3[row][col];
     for (int i = 0; i < row; i++)
     {
      for (int j = 0; j < col; j++)
      {
        scanf("%d",&mat[i][j]);

      }
      
     }
     for (int i = 0; i < row; i++)
     {
      for (int j = 0; j < col; j++)
      {
        scanf("%d",&mat2[i][j]);

      }
      
     }


     for (int i = 0; i < row; i++)
     {
     for (int j = 0; j < col; j++)
     {
        mat[i][j] + mat2 [i][j];
      
       printf("%d ", mat[i][j] + mat2 [i][j]);
     }

       printf("\n");
      
     }

    
     

     return 0;
}