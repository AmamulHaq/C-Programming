#include <stdio.h>

void main()
{
    int matrix[3][3] = {
        {1, 4, 2},
        {3, 6, 8},
        {12, 3, 8}};
    for (int row = 0; row < 3; row++)
    {

        for (int col = 0; col < 3; col++)
        {
            printf("%d,", matrix[row][col]);
        }
        printf("\n");
    }
}