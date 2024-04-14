#include <stdio.h>
#include <string.h>
int main()
{
    char str1[24]="Amamul";
    char str2[24]="Haq";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}