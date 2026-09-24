// Given two sorted arrays nums1 and nums2 of size m and n respectively,
// return the median of the two sorted arrays.
#include <stdio.h>

int main()
{
    int a[100], b[100], merged[200];
    int m, n;
    int i, j, k;
    float median;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first sorted array:\n");

    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second sorted array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            merged[k] = a[i];
            i++;
        }
        else
        {
            merged[k] = b[j];
            j++;
        }

        k++;
    }

    while (i < m)
    {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < n)
    {
        merged[k] = b[j];
        j++;
        k++;
    }

    int total = m + n;

    if (total % 2 == 1)
    {
        median = merged[total / 2];
    }
    else
    {
        median = (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    }

    printf("Median = %.2f\n", median);

    return 0;
}
