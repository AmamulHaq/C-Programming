#include <stdio.h>
#include <string.h>
int main()
{
    char lastName[] = {'H', 'A', 'Q', '\0'};
    char firstName[] = "AMAMUL";
    char name[24];
    int t;

    printf("\nEnter your name:");
    scanf("%s", name);
    printf("\nyour name is %s\n", name);
    printf("\nreverse of your name is:\n");
    
    t = strlen(name);
    
    for (int i = t-1; i >=0; i--)
    {
        printf("%c", name[i]);
    }

    printf("\n%s\n", lastName);

    for (int i = 0; i < 6; i++)
    {
        printf("%c\n", firstName[i]);
    }

    lastName[2] = 'P';
    firstName[1] = 'N';
    printf("%s\n %s", firstName, lastName);
    return 0;
}
