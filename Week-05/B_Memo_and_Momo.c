#include<stdio.h>
int main()
{

   long long  int a,b,k;
     scanf("%lld %lld %lld",&a,&b,&k);

     if(a%k==0 && b%k==0){
        printf("Both");

     }
     if(a%k==0 && b%k !=0)
     {
        printf("Memo");
     }
     if(b%k==0 && a%k !=0)
     {
        printf("Momo");
     }
     if(b%k !=0 && a%k!=0)
     {
        printf("No One\n");
     }
     return 0;
}