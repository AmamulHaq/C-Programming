#include <stdio.h>
#include <math.h>

int sum(int n);
int main()
{
    int s, n;
    printf("enter n terms for natural sum up to ..\n");
    scanf("%d",&n);
    s = sum(n);
    printf("the sum of numbers are :%d\t", s);
}
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return (n + sum(n - 1));
}