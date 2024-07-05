#include<stdio.h>
int main()
{

     int n;
     scanf("%d",&n);
     int ar[n];
     for (int i = 0; i <n; i++)
     {
       scanf("%d",&ar[i]);
     }

     int k;
      scanf("%d",&k);
      for (int i = k; i <n; i++)
      {
        
        printf("%d ",ar[i]);

      }

      for (int i = 0; i <k; i++)
      {
         printf("%d ",ar[i]);
      }
      
      
     
     return 0;
}