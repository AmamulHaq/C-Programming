#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include ctype.h for isdigit

int main() {
    char input[1000];
    char numbers[1000]; // To store numbers
    int numIndex = 0;

    // Take input
    printf("Enter your input:\n");
    fgets(input, sizeof(input), stdin);

    // Iterate through the input
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
        // If it's a digit, add it to the numbers string
        numbers[numIndex++] = input[i];}}
    
    numbers[numIndex] = '\0'; 
    printf("Numbers:%s\n", numbers);

    for (int i = 0; input[i] != '\0'; i++)
    // to locate the value of inputs array
    {printf("\tdata[%d] = %c", i, input[i]);}

    return 0;
}
