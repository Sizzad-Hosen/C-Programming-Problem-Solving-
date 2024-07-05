
#include<stdio.h>
int convert(){

    
     char n;
     scanf("%c",&n);


     int result;
     if(n>='a' && n<='z'){

     result = n -32;
     return result;
     
}

}

int main()
{

    char r=convert();
    printf("%c\n",r);

}
