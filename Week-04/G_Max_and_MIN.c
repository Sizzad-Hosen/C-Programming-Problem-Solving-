#include <stdio.h>


void find_min_max(int ar[], int n, int *min, int *max) {
    // Initialize min and max with the first element of the array
    *min = ar[0];
    *max = ar[0];
    
    // Traverse through the array to find the min and max values
    for (int i = 1; i < n; i++) {
        if (ar[i] < *min) {
            *min = ar[i];
        }
        if (ar[i] > *max) {
            *max = ar[i];
        }
    }
}

int main() {
    int n;


    scanf("%d", &n);
    
    int ar[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    
    int min, max;
    
    
    find_min_max(ar, n, &min, &max);
    printf("%d %d\n", min, max);
    
    return 0;
}
