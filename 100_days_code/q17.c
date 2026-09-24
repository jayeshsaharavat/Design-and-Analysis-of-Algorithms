// Given a string s, find the length of the longest substring without duplicate characters.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int last[256];
    int start = 0;
    int longest = 0;
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < 256; i++)
    {
        last[i] = -1;
    }

    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        unsigned char current = str[i];

        if (last[current] >= start)
        {
            start = last[current] + 1;
        }

        last[current] = i;

        if (i - start + 1 > longest)
        {
            longest = i - start + 1;
        }
    }

    printf("Length of longest substring = %d\n", longest);

    return 0;
}
