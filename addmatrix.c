//matrix addition using function
#include <stdio.h>

void add_matrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main()
{
    int rows = 3;
    int cols = 3;
    int matrix1[3][3] = {{4, 3, 7},
                         {4, 5, 6},
                         {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7},
                         {6, 5, 4},
                         {3, 2, 1}};
    int result[3][3];

    add_matrices(rows, cols, matrix1, matrix2, result);

    printf("Result Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
