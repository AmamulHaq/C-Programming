#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("Enter the interval for prime numbers between them: \n");
    scanf("%d%d",&a,&b);
    for (int num = a; num <= b; num++)
    {
        int is_prime = 1;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
                is_prime = 0;
                break;
        }
        if (is_prime == 1)
        {
            printf("%d is prime\n", num);
        }
    }
    return 0;
}