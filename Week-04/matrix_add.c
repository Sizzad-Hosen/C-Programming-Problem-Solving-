
#include<stdio.h>
int main()
{

     int mat[2][3],mat2[2][3];

     printf("Enter input 1st matrix\n");

     for (int i = 0; i <2; i++)
     {
       for (int j = 0; j <3; j++)
       {
        /* code */
       scanf("%d",&mat[i][j]);
       }
    
       
     }


     printf("Enter input 2nd matrix\n");

     for (int i = 0; i <2; i++)
     {
       for (int j = 0; j <3; j++)
       {
        /* code */
       scanf("%d",&mat2[i][j]);
       }
   
       
     }

     printf("1st matrix\n");

     for (int i = 0; i <2; i++)
     {
       for (int j = 0; j <3; j++)
       {
        /* code */
      printf("%d ",mat[i][j]);
       }
       printf("\n");
    
       
     }


     printf("2nd matrix\n");

     for (int i = 0; i <2; i++)
     {
       for (int j = 0; j <3; j++)
       {
        /* code */
        printf("%d ",mat2[i][j]);
       }
        printf("\n");
       
     }

// added the two matrix
printf("Result the two added matrix\n");

     for (int i = 0; i <2; i++)
     {
       for (int j = 0; j <3; j++)
       {
       
     int sum=mat[i][j] * mat2[i][j];
     
     printf("%d ",sum);


       }
       printf("\n");
       
     }



     
     return 0;
}