#include<stdio.h>
int main()
{

     int n;
     scanf("%d",&n);
     int s=n-1, k =1;

     for (int i = 1; i <=n; i++)
     {
        /* code */
        for(int j=1; j<=s; j++){
            printf(" ");
            
        }
        for(int j=1; j<=k; j++){
            printf("*");

        }
        // ses line e 
        k=k+2;
        s=s-1;
        printf("\n");

     }
     
     return 0;
}