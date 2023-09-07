#include <stdio.h>
#include <math.h>

int sum(int a, int b);
int main()
{
int a,b,s;
printf("Enter two numbers to sum : ");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("\nThe sum of numbers are %d",s);
return 0;}
int sum(int a, int b){
    return a+b;
}