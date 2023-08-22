#include <stdio.h>

int main() {
    int numbers[30] = {3, 5, 6, 4, 7, 8};
    int n = 6;  // Current number of elements in the array

    if (n == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int largest = numbers[0];
    int secondLargest = numbers[0];
    int smallest = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }

        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", secondLargest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}
