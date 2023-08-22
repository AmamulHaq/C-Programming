#include <stdio.h>
#include <math.h>

int main()
{
 int a,b,c;
again:
printf("Enter any three numbers:");
scanf("%d%d%d",&a,&b,&c);

if ((a>b && b>c)||(a<b && b<c))
{
    printf("%d is middle number", b);
}
else if ((b>c && c>a)||(b<c && c<a))
{
    printf("%d is middle number", c);
}
else if ((c>a && a>b)||(c<a && a<b))
{
      printf("%d is middle number", a);
}goto again;
return 0;

}   