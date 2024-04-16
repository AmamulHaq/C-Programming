#include <stdio.h>

struct date
{
    int y, m, d;
};

struct date convert(struct date a)
{
    struct date b;
    b.d = a.d + 17;
    if (b.d > 30)
    {
        b.d -= 30;
        a.m += 1;
    }
    b.m = a.m + 8;
    if (b.m > 12)
    {
        b.m -= 12;
        a.y += 1;
    }
    b.y = a.y + 56;
    return b;
}

int main()
{
    struct date a, b;
    printf("Enter AD date in y,m,d: ");
    scanf("%d%d%d", &a.y, &a.m, &a.d);

    b = convert(a);
    printf("BS date is %d year, %d month, %d day\n", b.y, b.m, b.d);
    return 0;
}
