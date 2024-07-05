#include<stdio.h>
#include<string.h>


int main()
{


     char A[11];
     char B[11];
     scanf("%s %s",A,B);


     int Azz= strlen(A);
     int Bzz= strlen(B);


     printf("%d %d\n",Azz,Bzz);
     printf("%s%s\n",A,B);

 char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    printf("%s %s\n", A, B);

 



     return 0;
}