#include <stdio.h>


void ans(int N) {

    
    for (int i = 1; i <= N; i++) {
        if (i != 1) {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");  
}

int main() {
    int N;   
    scanf("%d", &N);
    ans(N);
    return 0;
}
