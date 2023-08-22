#include <stdio.h>

void result(int marks[]); // Declare the result function

int main()
{
    int marks[6] = {56, 54, 74, 43, 96, 66};

    // Call the result function to sort and print the marks
    result(marks);

    return 0;
}

void result(int marks[])
{
    // Bubble Sort to sort the marks in ascending order
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (marks[i] > marks[j])
            {
                // Swap marks[i] and marks[j]
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    // Print the sorted marks
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", marks[i]);
    }
}
