#include <stdio.h>
void Sum(int **m, int **n)
{
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(sum + i) + j) = *(*(m + i) + j) + *(*(n + i) + j);
        }
        printf("\n");
    }
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(sum + i) + j));
        }
        printf("\n");
    }
}
int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Sum(*m, *n);
    return 0;
}