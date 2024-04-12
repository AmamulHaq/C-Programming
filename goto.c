#include <stdio.h>
int main()
{
    int a, b;
    char x;
top:
    printf("Enter any number: ");
    scanf("%d", &a);
    printf("Enter any number: ");
    scanf("%d", &b);
    if (a < 0 || b < 0)
    {
        printf("Enter positive numbers!\n");
        goto top;
    }
    printf("The sum is: %d", a + b);
    //ask if to add again
    printf("\nWant to add more..(y/n)? ");
    scanf(" %c", &x);

    if (x == 'y')
    {
        goto top;
    }

    return 0;
}
