#include <stdio.h>
#include <string.h>

struct students
{
    char n[24];
    int a;
} s[10];

void main()
{

    for (int i = 1; i <= 10; i++)
    {
        printf("\nEnter name and age of student %d: ", i);
        scanf("%s %d", s[i].n, &s[i].a);
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            struct students temp;
            if (strcmp(s[i].n, s[j].n) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nOrdered information:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("name=%s\tage=%d\n", s[i].n, s[i].a);
    }
}
