#include <stdio.h>
#include <string.h>

int main()
{

    int myNum, herNum;
    float myFloatNum, herFloatNum;
    char myLetter, herLetter;
    char myName[24];
    char herName[24];

    // Input and scan datas
    printf("Enter any two different Numbers:");
    scanf("%d\n%d", &myNum, &herNum);
    printf("Enter any two different Decimal Numbers:");
    scanf("%f\n%f", &myFloatNum, &herFloatNum);
    printf("Enter any two different Alphabetes:");
    scanf("%c\n%c", &myLetter, &herLetter);
    printf("Enter any two different Names of friends:");
    scanf("%s\n%s", myName, herName);

    // Print variables
    printf("%d\n%d\n", myNum, herNum);
    printf("%.3f\n%.3f\n", myFloatNum, herFloatNum);
    printf("%c\n%c\n", myLetter, herLetter);
    printf("%s\n%s\n", myName, herName);
    return 0;
}
