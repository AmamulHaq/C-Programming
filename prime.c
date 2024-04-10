#include<stdio.h>

void check(int n) {
    int count = 0;
    if (n <= 1) {
        printf("Neither prime nor composite\n");
        return;
    }
    for (int i = 1; i<= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("Prime\n");
    } else {
        printf("Composite\n");
    }
}

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    check(n);
    return 0;
}
