#include <stdio.h>
#include <math.h>

int main(){
float sum,r;

printf("1 + 2x + 3x^2 + 4x^3 + ...\n");

printf("\nEnter the ratio r <1 of series:");
scanf("%f",&r);
 sum = pow((1 - r), -2);
   printf("\nThe sum of the series up to infinity is %f\n", sum);
    return 0;
}