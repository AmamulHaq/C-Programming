#include <stdio.h>
#include <math.h>

int main()
{
    int a,i;
    printf("Enter any number: \n");
    scanf("%d", &a);

    int is_prime = 1;
    for (i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {is_prime = 0;
        break;}
      }

    if (is_prime && a > 1){printf("\n%d is prime\n", a);}
    

    return 0;
}
