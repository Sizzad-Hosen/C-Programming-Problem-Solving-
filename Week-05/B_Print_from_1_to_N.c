#include<stdio.h>

void fun(int n,int limit)
{

   if(n>limit) return;

    printf("%d\n",n);

    fun(n+1,limit);

}
int main()
{  
    
     int n;
     scanf("%d",&n);

     fun(1,n);
     return 0;
}