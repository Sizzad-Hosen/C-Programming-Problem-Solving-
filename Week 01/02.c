#include<stdio.h>
int main(){
    int n;

  scanf("%d", &n);
  if(n==0){
    printf("Number is zero", n);
  }
  else if(n>0){
    printf("Number is positive", n);
  }
  else if(n<0){
    printf("Number is negative", n);
  }
    return 0;
}