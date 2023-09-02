#include <stdio.h>
#include <math.h>

int main() {
    char para[1000];
    printf("Enter any number:\n");
    fgets(para, sizeof(para), stdin);
   
    // Convert the input string to an integer
    int number = atoi(para);
    int originalNumber = number;
    int sum = 0;
    
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        int factorial = 1;
        
        // Calculate the factorial of the digit
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        
        sum += factorial;
        number /= 10; // Remove the last digit
    }

    // Check if the sum of factorials is equal to the original number
    if (sum == originalNumber) {
        printf("%d is a strong number.\n", originalNumber);
    } else {
        printf("%d is not a strong number.\n", originalNumber);
    }

    return 0;
}
