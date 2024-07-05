#include<stdio.h>
int main(){
    int n;

  scanf("%d", &n);
  if(n>=10000)
  {
    printf("Buy gucci bag\n", n);
 if(n>=20000){
        printf("guccci belt\n",n);
    }
   
  }



   else if(n>=5000)
    {
        printf("Levis bag\n", n);
        
    }



  else
  {
    printf("Something\n",n);
  }
    return 0;
}