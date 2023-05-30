#include <stdio.h>
int main()
{

    int p, t, r, i, a;

    printf("Enter principle amount: ");
    scanf("%d", &p);

    printf("Enter time period ratio year: ");
    scanf("%d", &t);

    printf("Enter rate of interest: ");
    scanf("%d", &r);

    i = (p * t * r) / 100;

    a = (i + p);

    printf("\n your interest amount is %d", i);

    printf("\n your net amount is %d", a);

    return 0;
}
