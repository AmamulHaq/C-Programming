
#include <stdio.h>

int fibo(int t)
{
    if (t == 1)
    {
        return 0;
    }
    else if (t == 2)
    {
        return 1;
    }

    return fibo(t - 1) + fibo(t - 2);
}

int main()
{
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", fibo(i));
    }

    return 0;
}
