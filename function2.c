#include <stdio.h>
#include <math.h>

int swap(int* a, int* b);
int main()
{
int a,b;
printf("Enter any two number: ");
scanf("%d%d",&a,&b);

swap(&a,&b);
printf("The swap value are %d,%d",a,b);


return 0;}
int swap(int* a, int* b){
int c = *a;
    *a = *b;
    *b = c;
}