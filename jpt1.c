#include <stdio.h>
main()
{
    int marks[24], l;
    printf("Enter marks of your subjects\n");

    for (int i = 0; i < sizeof(marks); i++)
    {
        scanf("%d", &marks[i]);
    }
    l = sizeof(marks);
    printf("The frequency of numbers in array is %d", l);
}