#include<stdio.h>

void fun(int a)
{

    if(a==0) return;
    printf("%d",a);
      if (a > 1) {
        printf(" "); 
    }
    fun(a-1);

}
int main()
{  
    
     int a;
     scanf("%d",&a);

     fun(a);
     return 0;
}