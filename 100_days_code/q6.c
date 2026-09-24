// Write a generalized program for the following pattern.
// A B C D
// B C D E
// C D E F
// D E F G
// The program should work for all values of n.
#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c ", 'A' + i + j);
        }

        printf("\n");
    }

    return 0;
}
