#include <stdio.h>
struct date
{
    int y, m, d;
};

struct date convert(struct date b)
{
    struct date a;
    a.d = b.d - 17;
    if (a.d <= 0)
    {
        a.d = a.d + 30;
        b.m = b.m - 1;
    }
    a.m = b.m - 8;
    if (a.m <= 0)
    {
        a.m = a.m + 12;
        b.y = b.y - 1;
    }
    a.y = b.y - 56;
    return (a);
}
int main()
{
    struct date a, b;
    printf("Enter BS date in y,m,d: ");
    scanf("%d%d%d", &b.y, &b.m, &b.d);

    a = convert(b);
    printf("AD date is %d year, %d month, %d day\n", a.y, a.m, a.d);
    return 0;
}
