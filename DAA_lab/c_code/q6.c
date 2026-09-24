// Write a C program to find all pairs of elements in an array whose sum is equal to a given target value. Each pair should be displayed only once.
#include <stdio.h>

int main() {
    int a[100], n, target;
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {

            if(a[i] + a[j] == target) {
                printf("%d + %d = %d\n", a[i], a[j], target);
            }

        }
    }

    return 0;
}