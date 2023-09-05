#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    char inputs[1000];
    char names[5][20]; 


    // take every inputs format of  numbers,alphabets
    printf("Enter your inputs:\n");
    fgets(inputs, sizeof(inputs), stdin);
    printf("The entered inputs are:\n",inputs);
    
    for (int i = 0; inputs[i] != '\0'; i++)
    // to locate the each value of inputs array
    {printf("\tdata[%d] = %c", i, inputs[i]);}


    // Convert the inputs to one integer
    int number = atoi(inputs);
    //write here function 
    printf("Integer: %d\n", number);


    printf("\nEnter names of your friends:\n");
    for (int i = 0; i < 5; i++) {
        fgets(inputs, sizeof(inputs), stdin);

        // Copy the input to the names array
        inputs[strcspn(inputs, "\n")] = '\0';        
        strcpy(names[i], inputs);}

    // Display the names of your friends
    printf("Names of your friends are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
