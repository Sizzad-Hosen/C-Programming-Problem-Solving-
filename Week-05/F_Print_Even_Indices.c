#include<stdio.h>
int fun(int a[],int n,int i)
{

    if(a[i]%2==0) return;

    printf("%d",a[i]);

    int r=fun(a,n,i+1);


}

int main()
{

     int n;
     scanf("%d",&n);
     int a[n];
     for (int i = 0; i <n; i++)
     {
       scanf("%d",&a[i]);

     }

    int ans= fun(a,n,0);
     for (int i =n-1; i>=0; i--)
     {
        printf("%d ",a[i]);

     }
     
     
     return 0;
}