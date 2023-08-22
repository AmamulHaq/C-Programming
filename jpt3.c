#include <stdio.h>

void doWork (int a, int b, int*sum, int*prod, int*avg);
int main()
{

int a=3, b=5;
int sum,prod,avg;
doWork (a, b, &sum, &prod, &avg);


return 0;
}
void doWork (int a, int b, int*sum, int*prod, int*avg)
{
sum=a+b; 
prod=a*b;
avg=(a+b)/2;
printf("sum=%d, prod=%d, avg=%d",sum , prod, avg );
}
