#include <stdio.h>
#include <math.h>

int main()
{

    int p, t, r, c, a;

    printf("Enter principle amount: ");
    scanf("%d", &p);

    printf("Enter time period ratio year: ");
    scanf("%d", &t);

    printf("Enter rate of interest: ");
    scanf("%d", &r);

    c = p * pow(1 + r / 100) ^ t - p;

    printf("\n your interest amount is %d", c);
}