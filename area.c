
#include <stdio.h>
#define PI 3.14159
int main()
{
    float a, r, c;
    printf("Enter radius of circle:");
    scanf("%f", &r);

    a = PI * r * r;

    c = 2 * PI * r;

    printf("\n Area of circle is %f", a);
    
    return 0;
}
