#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int minIndex = 0;
    int maxIndex = 0;

    // Finding the indices of the minimum and maximum elements
    for (int i = 1; i < n; i++)
    {
        if (ar[i] < ar[minIndex])
            minIndex = i;
        if (ar[i] > ar[maxIndex])
            maxIndex = i;
    }

    // Swapping the minimum and maximum elements
    int temp = ar[minIndex];
    ar[minIndex] = ar[maxIndex];
    ar[maxIndex] = temp;

    // Printing the modified array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
