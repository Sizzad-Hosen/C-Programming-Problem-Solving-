#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int N;
        scanf("%d",&N);
        if(N>1000){
                printf("I will buy Punjabi\n",N);
                if(N>=1500){
                        printf("I will buy new shoes\n",N);
                        printf("Alisa will buy new shoes\n",N);
                        
                }
        }
        else{
                printf("Bad luck!",N);
                
        }
    return 0;
}