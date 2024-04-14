#include <stdio.h>
int main()
{
    int i,j,k;
    for (i = 1; i <= 4; i++)
    {
        for(k=1;k<=4-i;k++)
        {
           printf("\t"); 
        }
        for (j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
/*

                *
            *   *
        *   *   *
    *   *   *   *
*/