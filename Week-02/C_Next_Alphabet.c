 #include<stdio.h>
int main()
{

char n;
     scanf("%c",&n);


   char next;
     if(n>='a' && n<'z'){

     next = n + 1;


     printf("%c",next);

     }
        if(n=='z'){
         printf("a");
 }


     return 0;
}