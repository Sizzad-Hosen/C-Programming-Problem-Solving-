#include<stdio.h>
int main()
{

     int n;
     scanf("%d", &n);

     int arr[n];
     for(int i=0; i<n; i++){

        scanf("%d", &arr[i]);

     }

     int x=-1,index=-1;
     scanf("%d", &x);

     for(int i=0; i<n; i++){

        if(arr[i]==x){

             index=i;

             break;
          
        }
    
     
     }
     printf("%d\n",index);
     return 0;
}