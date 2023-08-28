#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char name[1000];
    printf("what is your name?..\n");
    fgets(name, sizeof(name), stdin);

    t = strlen(name);
    printf("\nreverse of your name is:\n");
    for (int i = t - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
}