#include <stdio.h>

int main()
{
    int marks[] = {56, 54, 74, 43, 96, 66};

    result(marks);

    return 0;
}
void result(int marks[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", marks[i]);
    }
}