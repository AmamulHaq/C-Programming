#include <stdio.h>
int fact(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int i, int j)
{
    return fact(i) / (fact(i - j) * fact(j));
}
int main()
{
    int i, j, k;
    for (i = 0; i <= 4; i++)
    {
        for (k = 0; k < 4 - i; k++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }
}