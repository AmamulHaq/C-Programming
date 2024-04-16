#include <stdio.h>
struct time
{
    int h;
    int m;
    int s;
} t1, t2, t3;
struct time sum(struct time t1, struct time t2)
{
    struct time t;
    t.s = t1.s + t2.s;
    t.m = (t1.m + t2.m) + (t.s / 60);
    t.h = (t1.h + t2.h) + (t.m / 60);
    t.s %= 60;
    t.m %= 60;
    return t;
}

int main()
{   printf("Enter time1 h,m,s: ");
    scanf("%d%d%d", &t1.h, &t1.m, &t1.s);
    printf("Enter time2 h,m,s: ");
    scanf("%d%d%d", &t2.h, &t2.m, &t2.s);
    t3 = sum(t1, t2);
    printf("%d:%d:%d\n", t3.h, t3.m, t3.s);
    return 0;
}