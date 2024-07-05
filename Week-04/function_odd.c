#include <stdio.h>

int count_odd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
          scanf("%d",&arr[i]);
    }
    
 
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = sizeof(arr) / sizeof(arr[0]);

 
    int odd_count = count_odd(arr,n);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}
