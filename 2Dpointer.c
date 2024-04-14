#include <stdio.h>
int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int p[3][3];
    int s[3][3];
    // to sum two matrices
    printf("\nSum of the matrices:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(s + i) + j) = *(*(m + i) + j) + *(*(n + i) + j);
            printf("%d\t", *(*(s + i) + j));
        }
        printf("\n");
    }
    // to product two matrices
    printf("\nProduct of the matrices:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            *(*(p + i) + k) = 0;
            for (int j = 0; j < 3; j++)
            {
                *(*(p + i) + k) += *(*(m + i) + j) * *(*(n + j) + k);
            }
            printf("%d\t", *(*(p + i) + k));
        }
        printf("\n");
    }

    return 0;
}
