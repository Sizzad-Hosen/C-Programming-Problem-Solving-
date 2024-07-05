#include <stdio.h>
#include <stdlib.h>
int my_abs(int a){

   int ans = abs(a);
   return ans;


}

int main () {
   int a;
   scanf("%d",&a);
   int r=my_abs(a);



   printf("value of a = %d\n", r);

   
   return(0);
}