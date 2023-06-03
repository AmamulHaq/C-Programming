
#include <stdio.h>
#include <conio.h>

int fibo(int);

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("%d", fibo(i));
    }

    return 0;
}

int fibo(int t)
{
    if (t == 0)
    {
        return 0;
    }
    else if (t == 1)
    {
        return 1;
    }
    else if (t < 0)
    {
        printf("enter positive number :");
    }

    return fibo(t - 1) + fibo(t - 2);
}
