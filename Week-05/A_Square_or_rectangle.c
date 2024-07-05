#include<stdio.h>
int main()
{

     int t;
     scanf("%d",&t);

     while (t--)
     {
      long long int a,b;
       scanf("%lld %lld",&a,&b);

       if(a==b )
       {
        printf("Square\n");
       }
       else{
        printf("Rectangle\n");

       }
     }
     
     return 0;
}