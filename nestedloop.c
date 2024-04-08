#include <stdio.h>

//nested loop
void main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d", i);
            printf("%d", j);
        }
    }
}
