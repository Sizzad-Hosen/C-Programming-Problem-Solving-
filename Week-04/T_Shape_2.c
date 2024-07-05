#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;

    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int j = 1; j <=s; j++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 1; j <=k; j++)
        {
            /* code */
            printf("*");
        }

        k =k+2;
        s =s-1;
        printf("\n");
        
    }
    

     
     return 0;
}