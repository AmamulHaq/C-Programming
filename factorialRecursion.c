
#include <stdio.h>
#include <conio.h>

int factorial(int);

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("the factorial of is:%d", factorial(n));

    return 0;
}

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}
