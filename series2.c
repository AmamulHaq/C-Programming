#include <stdio.h>
#include <math.h>
//fibonacci sequence
int main()
{

    int n, s1 = 0, s2 = 1, next;
    printf("Enter no of terms for Fibonacci sequence :");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci are :", n);
    printf("\t%d\t%d", s1, s2);
    for (int i = 3; i <=n; i++)
    {
        {
            next = s1 + s2;
            s1 = s2;
            s2 = next;
        }

        printf("\t%d", next);
    }

    return 0;
}