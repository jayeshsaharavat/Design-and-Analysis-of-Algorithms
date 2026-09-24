// Given a sorted array, square every element and return the squared elements in sorted order without sorting again.
#include <stdio.h>

int main()
{
    int arr[100];
    int result[100];
    int n;
    int left, right, position;
    int leftSquare, rightSquare;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    left = 0;
    right = n - 1;
    position = n - 1;

    while (left <= right)
    {
        leftSquare = arr[left] * arr[left];
        rightSquare = arr[right] * arr[right];

        if (leftSquare > rightSquare)
        {
            result[position] = leftSquare;
            left++;
        }
        else
        {
            result[position] = rightSquare;
            right--;
        }

        position--;
    }

    printf("Sorted squares: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}
