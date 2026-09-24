// Write a C program that accepts a positive integer containing digits from 0 to 9.
// Exactly one digit is missing, while the remaining nine digits appear exactly once.
#include <stdio.h>

int main()
{
    int n, digit;
    int present[10] = {0};

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        present[digit] = 1;
        n = n / 10;
    }

    for (digit = 0; digit <= 9; digit++)
    {
        if (present[digit] == 0)
        {
            printf("Missing digit = %d\n", digit);
            break;
        }
    }

    return 0;
}
