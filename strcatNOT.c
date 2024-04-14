#include <stdio.h>
#include <string.h>

int main()
{
    int l1, l2, i;
    char str1[24] = "Amamul";
    char str2[24] = "Haq";
    char str3[48];

    l1 = strlen(str1);
    l2 = strlen(str2);

    for (i = 0; i < l1; i++)
    {
        str3[i] = str1[i];
    }

    for (int j = 0; j < l2; i++, j++)
    {
        str3[i] = str2[j];
    }

    str3[i] = '\0';

    printf("%s", str3);
    return 0;
}
