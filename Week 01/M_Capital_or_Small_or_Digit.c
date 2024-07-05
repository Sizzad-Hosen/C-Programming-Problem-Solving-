#include<stdio.h>
int main()
{

     char n;
    
     scanf("%c",&n);

     if(n>=65 && n<=122){
        printf("ALPHA\n",n);

     if(n>=65 && n<=90){
        printf("IS CAPITAL",n);
     }
    else if(n>=97 && n<=122){
        printf("IS SMALL",n);
     }

     }



     else {
        printf("IS DIGIT");
     }


     return 0;
}