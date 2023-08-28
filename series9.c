#include <stdio.h>

int main()
{
    int a, i, sum = 0;

    printf("Enter any number: \n");
    scanf("%d", &a);

    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i; // Add 'i' to the sum if it's a divisor of 'a'
        }
    }

    if (sum == a)
    {
        printf("%d is a perfect number\n", i);
    }
    else
    {
        printf("%d is not a perfect number\n", i);
    }

    return 0;
}