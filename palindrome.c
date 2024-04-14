#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[30];
    printf("Enter any string:");
    scanf("%s",str);
    int i=0,l=0;
    for(i=0;str[i]!=0;i++)
    {
        l++;
    }
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            printf("Not palindrome!");
            exit(0);
        }
    }
    printf("Palindrome!");
    return 0;
}