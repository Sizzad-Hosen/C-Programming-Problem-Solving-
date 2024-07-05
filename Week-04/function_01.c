
#include<stdio.h>
int convert(){

    
     char n;
     scanf("%c",&n);


     int result;
     if(n>='a' && n<='z'){

     result = n + 0;
     return result;
     
}

}

int main()
{

    int r=convert();
    printf("%d\n",r);

}
