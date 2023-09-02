#include <stdio.h>
#include <math.h>

int main() {
    char input[1000];
    printf("Enter any number:\n");
    fgets(input, sizeof(input), stdin);
   
    // Convert the input string to an integer
    int number = atoi(input);
    // Convert the input in to alphabets string
    char words[24] = atoi(input);
    
    printf("%d",number);
    printf("%s",words);
    
    
    
    
    }