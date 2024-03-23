//simple interest
#include <stdio.h>
int main()
{
    int p, t, r, i, a;

    printf("Enter principle amount :");
    scanf("%d", p);

    printf("Enter time ratio in year :");
    scanf("%d", t);

    printf("Enter rate of Interest :");
    scanf("%d", r);

    i = p * t * r / 100;
    a = p + i;
    printf("the interest amount is %d\n", i);
    printf("the net amount is %d", a);
}