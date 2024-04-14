#include <stdio.h>

void result(int marks[]);

int main()
{
    int marks[6] = {56, 54, 74, 43, 96};
    result(marks);

    return 0;
}

void result(int marks[])
{
    // marks in ascending order
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (marks[i] > marks[j])
            {   int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    // Print the sorted marks
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", marks[i]);
    }
}
