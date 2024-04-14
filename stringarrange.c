#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = {'i', 'u', 'a', 'e', 'o'}, temp;
    int l1, l2, i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            l1 = str[i];
            l2 = str[j];
            if (l1 > l2)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%c\t", str[i]);
    }

    return 0;
}