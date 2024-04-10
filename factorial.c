#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    if (n == 0 || n == 1) {
        return fact;
    }
    for (int i = n; i > 1; i--) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d\n", n, factorial(n));
    return 0;
}
