#include <stdio.h>
#include <string.h>
int main()
{
    char str[42];
    int l;
    printf("Who are you?\n");
    scanf("%s", str);
    l = strlen(str);
    printf("The length of text is: %d", l);
    return 0;
}