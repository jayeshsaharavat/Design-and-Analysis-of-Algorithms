// Given two arrays arr1 and arr2, find the smallest difference between two array elements.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[100], arr2[100];
    int m, n;
    int i, j;
    int difference;
    int minimum;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first array:\n");

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    minimum = abs(arr1[0] - arr2[0]);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            difference = abs(arr1[i] - arr2[j]);

            if (difference < minimum)
            {
                minimum = difference;
            }
        }
    }

    printf("Smallest difference = %d\n", minimum);

    return 0;
}
