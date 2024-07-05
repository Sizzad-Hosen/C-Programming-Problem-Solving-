#include<stdio.h>
int fun(char str[],int n,int i)
{

if(str[i]=='\0') return 0;



int l = fun(str,n,i+1);
return l+1;


}
int main()
{

     char str[]="hello";
     int n;

   int len =  fun(str,n,0);
printf("%d\n",len);

     return 0;
}