#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), compare);

    long long int max_sum = 0;
    for (int i = n-1; i >= n-k; i--) {
        max_sum += a[i];
    }

    printf("%lld\n", max_sum);

    return 0;
}
