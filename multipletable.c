//multiplication table
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter any integer:");
    scanf("%d", &n);
    printf("Multiplication Table of %d is\n", n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }

    return 0;
}