#include <stdio.h>
#include <math.h>

int prime(int a);
int main()
{

    int a;
    printf("Enter any number: \n");
    scanf("%d", &a);

    if (prime(a))

        printf("%d is a prime.", a);

    return 0;
}
int prime(int a)
{
    int prime = 2;
    for (int i = 2; i <=sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;
}