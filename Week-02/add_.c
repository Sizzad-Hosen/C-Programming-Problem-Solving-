#include<stdio.h>
int main()
{

     int n;
     scanf("%d",&n);
     int arr[n];
     int add=0,biyok;

     for (int i = 0; i < n; i++)
     {
        /* code */
          scanf("%d",&arr[i]);

     }

     for (int i = 0; i<n; i++)
     {
        /* code */

        if(i>0){

            add  +=arr[i];

           
         }

        else{

            biyok = biyok + arr[i];


     }
      printf("%d %d",add,biyok);

     }
     
     
     return 0;
}