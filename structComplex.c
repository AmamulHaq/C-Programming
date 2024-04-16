#include<stdio.h>
struct complex{
    int r;
    int i;
}c1,c2,c3;
struct complex sum(struct complex *c1,struct complex *c2){
    struct complex *c3;
    c3->r=c1->r+c2->r;
    c3->i=c1->i+c2->i;
    return *c3;
}
int main()
{   
    scanf("%d%d",&c1.r,&c1.i);
    scanf("%d%d",&c2.r,&c2.i);
    c3=sum(&c1,&c2);
    printf("%d %d\n",c3.r,c3.i);
    return 0;

}