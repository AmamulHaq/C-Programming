#include <stdio.h>
#include <string.h>
int main()
{
int age=22; //variable age and stored value is 22
int *ptr=&age;// address of age variable

*ptr=0;//age = 0
age += 5;//increase age value by 5
(*ptr)++;//increament of age by 1
printf("%p\n",ptr);//to print memory address
printf("%d\n",*ptr);//to show stored value


return 0;}