#include <stdio.h>
void display(int *p)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", *(p + i));
    }
}
int main()
{
    int *p;
    printf("Enter 1D array: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", (p + i));
    }
    display(p);
}