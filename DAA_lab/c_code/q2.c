// Write a program to count the frequency of each distinct element in an array
#include <stdio.h>

int main() {
    int n, i, j, count;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {

        count = 1;

        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        if(count != 0) {
            printf("%d occurs %d times\n", a[i], count);
        }
    }

    return 0;
}