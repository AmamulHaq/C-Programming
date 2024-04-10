// using iteration
#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, t3;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    if (n >= 1)
        printf("%d\t", t1);
    if (n >= 2)
        printf("%d\t", t2);

    for (int i = 3; i <= n; i++)
    {
        t3 = t1 + t2;
        printf("%d\t", t3);
        t1 = t2;
        t2 = t3;
    }

    return 0;
}