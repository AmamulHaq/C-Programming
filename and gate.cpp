#include <stdio.h>

int and_gate(int input1, int input2) {
    if (input1 == 1 && input2 == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Testing the AND gate
    printf("%d\n", and_gate(0, 0));  // Output: 0
    printf("%d\n", and_gate(0, 1));  // Output: 0
    printf("%d\n", and_gate(1, 0));  // Output: 0
    printf("%d\n", and_gate(1, 1));  // Output: 1

    return 0;
}

