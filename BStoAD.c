#include <stdio.h>
struct date
{
    int yr, mn, dy;
} bs, ad;

struct date convert(struct date);
void main()
{
    printf("\nEnter BS date in year,month,day:\n");
    scanf("%d%d%d", &bs.yr, &bs.mn, &bs.dy);

    ad = convert(bs);
    printf("\nyour AD converted date is %dyear,%dmonth,%dday:\n", ad.yr, ad.mn, ad.dy);
}
struct date convert(struct date bs)
{
    struct date a;
    a.dy = bs.dy - 17;
    if (a.dy <= 0)
    {
        a.dy = a.dy + 30;
        bs.mn = bs.mn - 1;
    }
    a.mn = bs.mn - 8;
    if (a.mn <= 0)
    {
        a.mn = a.mn + 12;
        bs.yr = bs.yr - 1;
    }
    a.yr = bs.yr - 56;
    return (a);
}