//Write a program in C to find the second largest element in an array of n elements.

//solution

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int first_largest, second_largest;
    if (a[0] > a[1]) {
        first_largest = a[0];
        second_largest = a[1];
    } else {
        first_largest = a[1];
        second_largest = a[0];
    }

    for (i = 2; i < n; i++) {
        if (a[i] > first_largest) {
            second_largest = first_largest;
            first_largest = a[i];
        } else if (a[i] > second_largest && a[i] < first_largest) {
            second_largest = a[i];
        }
    }

    printf("The second largest element in the array is %d\n", second_largest);

    return 0;
}

