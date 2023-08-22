#include<stdio.h>

int main() {
    int num1, num2, sum;
    char dec;

again:
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum is %d\n", sum);

    printf("Do you want to add next two numbers?\n");
    printf("Enter 'y' for yes and 'n' for no: ");
    scanf(" %c", &dec); // Notice the space before %c to consume any leading whitespace characters.

    if (dec == 'y') {
        goto again;
    }

    return 0;
}










