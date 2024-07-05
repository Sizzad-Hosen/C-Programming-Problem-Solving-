#include<stdio.h>
#include<string.h>


int my_len(char ar[]){

  printf("%d\n",strlen(ar));


}
int main()
{

      char ar[20]="hello";
    //   scanf("%s",&a);
     char r=my_len(ar);
    //   printf("%d\n",r);

     return 0;
}