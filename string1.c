#include <stdio.h>
#include <string.h>
int main()
{
    char str[42];
    printf("Tell about yourself\n");
    scanf("%s", str);
    printf("The length of text is: %lu", strlen(str));

    return 0;
}