// Given an m x n matrix, return all elements of the matrix in spiral order.
#include <stdio.h>

int main()
{
    int matrix[100][100];
    int rows, cols;
    int top, bottom, left, right;
    int i;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    top = 0;
    bottom = rows - 1;
    left = 0;
    right = cols - 1;

    printf("Spiral order: ");

    while (top <= bottom && left <= right)
    {
        for (i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }

        top++;

        for (i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }

        right--;

        if (top <= bottom)
        {
            for (i = right; i >= left; i--)
            {
                printf("%d ", matrix[bottom][i]);
            }

            bottom--;
        }

        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }

            left++;
        }
    }

    printf("\n");

    return 0;
}
