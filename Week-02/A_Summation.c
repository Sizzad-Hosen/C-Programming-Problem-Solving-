

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Printing the absolute value of the sum
    if (sum < 0)
    {
        printf("%lld", -sum);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}