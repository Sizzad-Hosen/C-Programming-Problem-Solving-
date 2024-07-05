
#include <stdio.h>

int main()
{
    int N,i;


    scanf("%d", &N);


    for(i=0; i<N;i++){
            
     if(N % 5 == 0)
    {
        printf("Yes\n",i);
    }
    else if(N%5 !=0)
    {
        printf("No\n",i);
    }
            
    }
   

    return 0;
}