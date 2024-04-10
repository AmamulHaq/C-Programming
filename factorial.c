#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = n; i > 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d\n", n, fact(n));
    return 0;
}
