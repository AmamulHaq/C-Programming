#include <stdio.h>
#include <string.h>
int main()
{
    char str[42];
    int l = 0, i = 0;
    printf("Who are you?\n");
    scanf("%s", str);
    while (str[i] != 0)
    {
        l++;
        i++;
    }
    printf("The length of text is: %d", l);
    return 0;
}