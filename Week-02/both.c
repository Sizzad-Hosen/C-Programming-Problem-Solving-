#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        int n;
        scanf("%d", &n);
        if(n<0){
        printf("%d ",n);


        for (int i = -1; i>=0; i--)
        {
            /* code */

            printf("%d ",i);
        }
        
      }


      else if(n>0){
            printf("%d\n",n);
        for (int i = 1; i <=n; i++)
        {
            /* code */

            printf("%d ",i);

        }
        
      }
            
         
    return 0;
}