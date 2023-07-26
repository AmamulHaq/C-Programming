#include <stdio.h>
#include <string.h>

int main()
{
    int myNum, herNum;
    float myFloatNum, herFloatNum;
    char myLetter, herLetter;
    char myName[24], herName[24];

    // Input and scan data
    printf("Enter any two different \n, Numbers:\n, Decimal Numbers:\n, Alphabets:\n, Names of friends:\n: ");
    scanf("%d %d %f %f %c %c %s %s", &myNum, &herNum, &myFloatNum, &herFloatNum, &myLetter, &herLetter, myName, herName);

    // Print variables
    printf("%d\n%.3f\n%.3f\n%c\n%c\n%s\n%s\n", myNum,myFloatNum, herFloatNum, myLetter, herLetter, myName, herName);

    return 0;
}
