#include<stdio.h>
int main()
{

     int n;
     scanf("%d",&n);
     int arr[n];
   

     for (int i = 0; i < n; i++)
     {
        /* code */
          scanf("%d",&arr[i]);

     }


     

    //  for (int i = 0; i<n; i++)
    //  {
    //     printf("%d ",arr[i]);

    //  }
     
     int index,element;
     scanf("%d %d", &index,&element);

     for (int i = n-1; i>=0; i--)
     {
        /* code */

        if(i==index){
            arr[i]=element;

        }
             printf("%d ",arr[i]);
     }
     
     
     return 0;
}

