#include<stdio.h>
int fun(int a[],int n,int i)
{  
    if(i==n) return;

    printf("%d\n",a[i]);
   int l = fun(a,n,i+1);
    
}
int main()
{   
     int a[5]={2,6,7,8,9};
     int n=5;

    int len = fun(a,n,0);
     return 0;
}