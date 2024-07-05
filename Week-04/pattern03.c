#include<stdio.h>
int main()
{

     int n;
     scanf("%d",&n);
     int k=1;
     for (int i = 1; i <n; i++)
     {
        
        for(int j=1; j<=k;j++){

            printf("%d ",j);

        }
        // for loop sese line ses then man barabo next line print kotrar jonno
        k++;
        printf("\n");

     }
     
     return 0;
}