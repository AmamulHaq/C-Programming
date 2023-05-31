#include <stdio.h>
#include <string.h>

int main()
{
    char fullname[24];
    printf("Enter your full name: ");
    fgets(fullname, 24, stdin);
    printf("Your full name is: %s", fullname);

    char a;
    printf("Enter your fav character: ");
    scanf("%c", &a);
    printf("your favorite character is: %c", a);

    int b;
    printf("\nEnter your fav number: ");
    scanf("%d", &b);
    printf("your favorite number is: %d", b);

    char fname[24];
    printf("\nEnter your first name:");
    scanf("%s", fname);
    printf("your first name is:%s", fname);

    return 0;
}