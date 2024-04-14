#include <stdio.h>
#include <string.h>
int main()
{
    char str[24],rev[24];
    printf("Enter any string:");
    scanf("%s",str);
    strcpy(rev,str);
    strrev(rev);
    if (strcmp(str,rev) == 0)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not palindrome!");
    }
}