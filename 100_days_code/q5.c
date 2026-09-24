// Write a program that takes a number from the user and prints
// a. Number of 1 and number of 0 in its binary representation.
// b. Number of consecutive 1 in the binary representation.
#include <stdio.h>

int main()
{
    int n;
    int bit;
    int ones = 0;
    int zeros = 0;
    int currentOnes = 0;
    int maximumOnes = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Binary representation = 0\n");
        printf("Number of 1s = 0\n");
        printf("Number of 0s = 1\n");
        printf("Consecutive 1s = 0\n");

        return 0;
    }

    printf("Binary representation = ");

    int temp = n;
    int binary[32];
    int count = 0;

    while (temp > 0)
    {
        binary[count] = temp % 2;
        temp = temp / 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    for (int i = 0; i < count; i++)
    {
        bit = binary[i];

        if (bit == 1)
        {
            ones++;
            currentOnes++;

            if (currentOnes > maximumOnes)
            {
                maximumOnes = currentOnes;
            }
        }
        else
        {
            zeros++;
            currentOnes = 0;
        }
    }

    printf("\nNumber of 1s = %d\n", ones);
    printf("Number of 0s = %d\n", zeros);
    printf("Maximum consecutive 1s = %d\n", maximumOnes);

    return 0;
}
