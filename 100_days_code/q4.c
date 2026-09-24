// Given an integer array arr and a target value target, find the indices of two elements whose sum equals target.
// Assume exactly one valid pair exists, and the same element cannot be used twice.
#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("[%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    return 0;
}
