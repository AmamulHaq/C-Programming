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
            printf("%d\t",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
/*
			1	
		1	2	1	
	1	2	3	2	1	
1	2	3	4	3	2	1	
*/