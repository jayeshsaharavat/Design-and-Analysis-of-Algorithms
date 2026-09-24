// You are given a sorted array where every element appears exactly twice,
// except for one element which appears exactly once.
// Return the single element.
// The solution must run in O(log n) time and O(1) space.
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int left, right, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    left = 0;
    right = n - 1;

    while (left < right)
    {
        mid = left + (right - left) / 2;

        if (mid % 2 == 1)
        {
            mid--;
        }

        if (arr[mid] == arr[mid + 1])
        {
            left = mid + 2;
        }
        else
        {
            right = mid;
        }
    }

    printf("Single element = %d\n", arr[left]);

    return 0;
}
