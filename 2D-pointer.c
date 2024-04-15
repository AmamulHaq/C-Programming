#include <stdio.h>

void display(int (*m)[2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", *(*(m + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int(*m)[2];

    printf("Enter 2D array: \n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", *(m + i) + j);
        }
    }

    display(m);

    return 0;
}
