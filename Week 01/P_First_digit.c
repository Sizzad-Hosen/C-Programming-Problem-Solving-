#include<stdio.h>
int main()
{

     int n;
     scanf("%d",&n);
     int digit = n / 1000;

     if(digit%2==0){
        printf("EVEN");
     }
     else {
        printf("ODD");

     }
     return 0;
}