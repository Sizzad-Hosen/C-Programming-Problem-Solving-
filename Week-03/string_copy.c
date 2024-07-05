#include<stdio.h>
#include<string.h>

int main()
{

     char a[100],b[100];
     scanf("%s %s",a,b);
    //  strcpy(a,b);  shortcut


     for (int i = 0; i <strlen(b); i++)
     {
        /* code */
        a[i]=b[i];

     printf("%c",a[i]);
     }
     
     return 0;
}