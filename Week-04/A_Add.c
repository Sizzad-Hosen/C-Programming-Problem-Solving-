#include<stdio.h>

int sum(){
  int x,y;
  scanf("%d %d",&x,&y);

    int sum = x+y;
    return sum;

}
int main()
{

     int s=sum();
     printf("%d",s);
     return 0;
}