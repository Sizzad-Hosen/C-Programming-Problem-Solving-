#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  

    while (t--) {
        int n;
        scanf("%d", &n);  

        int optimal_x = 2;
        long long max_sum = 0;

       
        for (int x = 2; x <= n; x++) {
            int k = n / x;  
            long long current_sum = x * k * (k + 1) / 2;  
            if (current_sum > max_sum) {
                max_sum = current_sum;
                optimal_x = x;
            }
        }

        printf("%d\n", optimal_x);  
    }

    return 0;
}
