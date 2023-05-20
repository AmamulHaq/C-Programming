#include<stdio.h>
int main()
{
int p,t,r,c,a;
printf("Enter principle amount :");
scanf("%d",p);

printf("Enter time ratio in year :");
scanf("%d",t);

printf("Enter rate of Interest :");
scanf("%d",r);

c= p*(1 + r/100)^(t)-p;
a= p*(1 + r/100)^(t);

printf("the compound interest amount is %d\n",c);
printf("the net amount is %d",a);


}