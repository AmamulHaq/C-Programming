#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter any three numbers:\n");
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second  number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("The greater number is: %d", a);
        else
            printf("The greater number is: %d", c);
    }
    else
    {
        if (b > c)
            printf("The greater number is: %d", b);
        else
            printf("The greater number is: %d", c);
    }

    return 0;
}