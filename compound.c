//compound interest working
#include <stdio.h>
#include <math.h>
void compound(float p, int t, int r)
{
    float a, c;
    float rate = r / 100.0;

    a = p * pow(1 + rate, t);
    c = a - p;

    printf("The compound interest amount is %f\n", c);
    printf("The net amount is %f\n", a);
}

int main()
{
    int t, r;
    float p;
    printf("Enter principle amount: ");
    scanf("%f", &p);

    printf("Enter time ratio in years: ");
    scanf("%d", &t);

    printf("Enter rate of Interest: ");
    scanf("%d", &r);
    compound(p, t, r);
    return 0;
}
