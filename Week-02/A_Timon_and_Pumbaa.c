#include<stdio.h>
int main()
{

     int a,b;
     scanf("%d %d", &a, &b);
     int sum;


     if(a>=b){
        sum = a-b;
        printf("%d\n",sum);
     }

     else{
        printf("0");
     }
     return 0;
}