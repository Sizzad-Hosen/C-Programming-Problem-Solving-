
#include<stdio.h>
int convert(){

    
     char n;
     scanf("%c",&n);


     int result;
     if(n>='A' && n<='Z'){

     result = n + 32;
     return result;
     
}

}

int main()
{

    char r=convert();
    printf("%c\n",r);

}
