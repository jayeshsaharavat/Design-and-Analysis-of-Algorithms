// Given an array of daily temperatures, find the length of the longest consecutive strictly increasing streak.
#include <stdio.h>

int main()
{
    int arr[100], n;
    int i;
    int current = 1;
    int longest = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the temperatures:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            current++;

            if (current > longest)
            {
                longest = current;
            }
        }
        else
        {
            current = 1;
        }
    }

    printf("Longest increasing streak = %d\n", longest);

    return 0;
}
