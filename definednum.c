#include <stdio.h>
int sum(int n);
int main()
{
    int n = 10, s;
    s = sum(n);
    printf("The sum of 10 natural numbers is %d", s);
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;
    else
    {
        return n + sum(n - 1);
    }
}