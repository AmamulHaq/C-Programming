
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
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else if (x < 0)
    {
        printf("Enter positve number.")
        break;
    }

    return x * factorial(x - 1);
}
