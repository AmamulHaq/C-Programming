#include <stdio.h>
int max(int m[3][3])
{
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] > max)
            {
                max = m[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("the maximum element is: %d", max(m));
    return 0;
}