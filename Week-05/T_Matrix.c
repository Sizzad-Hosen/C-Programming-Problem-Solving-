#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

     int mat[n][n];
     for (int i = 0; i <n; i++)
     {
    for (int j = 0; j <n; j++)
    {
           scanf("%d",&mat[i][j]);
    }
    
     }
     int flag=1;


     if(n !=n){
        flag=0;

     }
     for (int i = 0; i <n; i++)
     {
       for (int j = 0; j <n; j++)
       {
        if(mat[i][j]==n-1){
            mat[i]+mat[j]
        }
        
        if(i==j){
            int sum;

           sum=mat[i] + mat[j];
        }
        
       }
       
     }
     
     

     return 0;
}