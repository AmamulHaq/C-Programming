#include <stdio.h>
void student(int percent[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", percent[i]);
    }
}
int main()
{
    int percent[5] = {45, 94, 86, 57, 98};
    student(percent);

    return 0;
}