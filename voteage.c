#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
    
    if (a >= 18)
    {
        printf("Old enough to vote.\n");
    }
    else
    {
        printf("Not enough old to vote.\n");
    }
    
    return 0;
}
