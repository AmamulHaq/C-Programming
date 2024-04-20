#include <stdio.h>

int main() {
    int num[5], n1 = 0, n2 = 0;
    FILE *f1;
    FILE *f2;

    // Input numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    // Write even and odd numbers to separate files
    for (int i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            f1 = fopen("even.txt", "a"); // "a" mode to append
            fprintf(f1, "%d\n", num[i]);
            fclose(f1);
            n1++;
        } else {
            f2 = fopen("odd.txt", "a"); // "a" mode to append
            fprintf(f2, "%d\n", num[i]);
            fclose(f2);
            n2++;
        }
    }

    // Read and print even numbers
    printf("Even numbers:\n");
    f1 = fopen("even.txt", "r");
    for (int i = 0; i < n1; i++) {
        fscanf(f1, "%d", &num[i]);
        printf("%d\n", num[i]);
    }
    fclose(f1);

    // Read and print odd numbers
    printf("Odd numbers:\n");
    f2 = fopen("odd.txt", "r");
    for (int i = 0; i < n2; i++) {
        fscanf(f2, "%d", &num[i]);
        printf("%d\n", num[i]);
    }
    fclose(f2);

    return 0;
}
