#include <stdio.h>
#include <math.h>

main()
{
    char para[1000];
    printf("Write a paragraph..\n");
    fgets(para, sizeof(para), stdin);
    for (int i = 0; para[i] != '\0'; i++)
    {para[i] = toupper(para[i]);}// define different functions
    printf("The entered inputs are:\n%s",para);
}