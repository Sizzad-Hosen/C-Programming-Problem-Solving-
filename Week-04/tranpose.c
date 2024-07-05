
#include<stdio.h>
int main()
{

     int mat[3][3],tranpose[3][3];

     printf("Enter input 1st matrix\n");

     for (int i = 0; i <3; i++)
     {
       for (int j = 0; j <3; j++)
       {
        /* code */
       scanf("%d",&mat[i][j]);
       }
    
       
     }



     printf("1st matrix\n");

     for (int i = 0; i <3; i++)
     {
       for (int j = 0; j <3; j++)
       {
        /* code */
      printf("%d ",mat[i][j]);
       }
       printf("\n");
    
       
     }



// added the two matrix


     for (int i = 0; i <3; i++)
     {
       for (int j = 0; j <3; j++)
       {
       
      tranpose[j][i] = mat[i][j];

 


       }
     
       
     }

printf("Result of the tranpose matrix\n");

     for (int i = 0; i <3; i++)
     {
       for (int j = 0; j <3; j++)
       {
       
  

     printf("%d ",tranpose[i][j]);


       }
       printf("\n");
       
     }



     
     return 0;
}