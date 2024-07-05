#include<stdio.h>
#include<string.h>

int main()
{

     char A[1001];
     char B[1001];
     scanf("%s %s",A,B);


     int Azz= strlen(A);
     int Bzz= strlen(B);


     printf("%d %d\n",Azz,Bzz);
     printf("%s %s\n",A,B);

     
     return 0;
}