
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, 2);
    }

    printf("The sum of squares of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
