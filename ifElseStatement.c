#include <stdio.h>
#include <conio.h>

void main()
{
    int x;
    printf("Enter a number");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("The munber is negative.");
    }
    else if (x > 0)
    {
        printf("The number is positive.");
    }
    else
        printf("The number is Zero.");
}