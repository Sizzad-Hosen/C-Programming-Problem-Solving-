#include <stdio.h>

int main() {
    float X, P;
    
   
    scanf("%f %f", &X, &P);
    
    float original_price = P / (1 - (X / 100));
    
   
    printf("%.2f\n", original_price);

    return 0;
}
