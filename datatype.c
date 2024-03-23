//data types in c programming
#include <stdio.h>
#include <string.h>

int main()
{
    int myNum, herNum;
    float myFloatNum, herFloatNum;
    char myLetter, herLetter;
    char myName[24];
    char herName[24];

    // Input and scan data
    printf("Enter any two different Numbers: ");
    scanf("%d %d", &myNum, &herNum);
    printf("Enter any two different Decimal Numbers: ");
    scanf("%f %f", &myFloatNum, &herFloatNum);
    printf("Enter any two different Alphabets: ");
    scanf(" %c %c", &myLetter, &herLetter);
    printf("Enter any two different Names of friends: ");
    scanf("%s %s", myName, herName);

    // Print variables
    printf("%d\n%d\n", myNum, herNum);
    printf("%.3f\n%.3f\n", myFloatNum, herFloatNum);
    printf("%c\n%c\n", myLetter, herLetter);
    printf("%s\n%s\n", myName, herName);
    return 0;
}
