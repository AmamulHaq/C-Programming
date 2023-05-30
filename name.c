// programe to display my name

#include <stdio.h>
int main()
{

    char fname[15];
    char lname[15];
    int age;
    printf("What is your first name?\n");
    scanf("%s", fname);

    printf("What is your last name?\n");
    scanf("%s", lname);

    printf("your name is %s %s", fname, lname);

    printf("\nWhat is  your age ?\n");
    scanf("%d", &age);
    printf("your age is %d ", age);

    return 0;
}