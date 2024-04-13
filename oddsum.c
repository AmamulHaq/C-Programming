#include <stdio.h>
#include <math.h>
int main()
{
    int n = 3, sum, t;
    for (int i = 1; i <= n; i++)
    {
        t = pow(2 * i - 1, 3);
        sum += +t;
    }
    printf("%d", sum);
}