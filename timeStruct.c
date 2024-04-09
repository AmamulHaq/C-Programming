#include <stdio.h>
struct time
{
    int hr, min, sec;
} t1, t2, s, d;

void SD(struct time, struct time, struct time *, struct time *);
int main()
{

    printf("\nEnter starting time:\n");
    scanf("%d%d%d", &t1.hr, &t1.min, &t1.sec);
    printf("\nEnter stoped time:\n");
    scanf("%d%d%d", &t2.hr, &t2.min, &t2.sec);

    SD(t1, t2, &s, &d);
    printf("\nS=%dhr%dmin%dsec", s.hr, s.min, s.sec);
    printf("\nD=%dhr%dmin%dsec", d.hr, d.min, d.sec);
    return 0;
}
void SD(struct time t1, struct time t2, struct time *s, struct time *d)
{
    int T1, T2, S, D;

    T1 = t1.hr * 3600 + t1.min * 60 + t1.sec;
    T2 = t2.hr * 3600 + t2.min * 60 + t2.sec;

    S = T1 + T2;
    s->hr = S / 3600;
    s->min = (S % 3600) / 60;
    s->sec = (S % 3600) % 60;
    D = T2 - T1;
    d->hr = D / 3600;
    d->min = (D % 3600) / 60;
    d->sec = (D % 3600) % 60;
}