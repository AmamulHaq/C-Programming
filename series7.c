#include <stdio.h>
#include <math.h>

main()
{
    char para[1000];
    printf("Enter 10 numbers:\n");
    fgets(para, sizeof(para), stdin);
    printf("Address of your numbers are:\n");
    for (int i = 0; para[i] != '\0'; i++)
    // to locate the address of integer array
      {printf("\t%u", &para[i]);}
   
   }