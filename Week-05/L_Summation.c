#include<stdio.h>
int fun(int a[],int n)
{

 if(n==0) return 0;
 
int l =  fun(a,n-1);
  return a[n-1]+l;


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

    int result = fun(a,n);
     printf("%d\n",result);

     return 0;
}