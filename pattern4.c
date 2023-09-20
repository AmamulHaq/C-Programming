#include <stdio.h>

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            printf("    ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("%-4d", j + 1);
        }

        printf("\n");
    }

    return 0;
}

//             1
//         1   2   3
//     1   2   3   4   5
// 1   2   3   4   5   6   7