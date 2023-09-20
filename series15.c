#include <stdio.h>
#include <math.h>

int main()
{
    float x, s=1, t, nume=1, dino=1;
    int i;
    printf("Enter any single digit number:");
    scanf("%f", &x);

    for (i = 1; i < 6; i++)
    {
        nume = pow(x, i);
        dino = dino * i;
        t = nume / dino;
        s = s + t;
    }
    printf("sum is = %f", s);
    return 0;
}