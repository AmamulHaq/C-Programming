#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b, s;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a, &b);
    s = sum(a, b);

    printf("The sum of numbers is:%d", s);
}
int sum(int a, int b)
{
    return a + b;
}