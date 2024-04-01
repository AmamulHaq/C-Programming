//fibonacci sequence own
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0;
    int b = 1;
    int i, temp;

    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n_terms, i;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n_terms);

    printf("Fibonacci sequence: ");

    for (i = 0; i < n_terms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

