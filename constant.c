#include <stdio.h>
#include <string.h>

const int myNum = 5, herNum = 7;
const float myFloatNum = 24.4, herFloatNum = 42.2;
const char myLetter = 'A', herLetter = 'R';
const char myName[] = "Amamul Haq";
const char herName[] = "Rakshya Raut";

int main()
{

    // Print variables
    printf("%d\n%d\n", myNum, herNum);
    printf("%.3f\n%.3f\n", myFloatNum, herFloatNum);
    printf("%c\n%c\n", myLetter, herLetter);
    printf("%s\n%s\n", myName, herName);

    return 0;
}
