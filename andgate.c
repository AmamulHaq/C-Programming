
#include <stdio.h>

// Define an AND gate function
int and_gate(int input1, int input2) {
    if (input1 == 1 && input2 == 1) {
        return 1; // If both inputs are 1, return 1 (logical AND)
    } else {
        return 0; // Otherwise, return 0 (logical AND)
    }
}

int main() {
   
    printf("%d\n", and_gate(0, 0));  
    printf("%d\n", and_gate(0, 1));  
    printf("%d\n", and_gate(1, 0));  
    printf("%d\n", and_gate(1, 1));  

    return 0;
}
