#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    char input[1000];
   
    printf("Enter your input:\n");
    fgets(input, sizeof(input), stdin);

    int marks[10];

    int i = 0;
    char* token = strtok(input, " \t\n");
    while (token != NULL && i < 10) {
        marks[i] = atoi(token);
        i++;
        token = strtok(NULL, " \t\n");
    }

    if (i > 0) {
        printf("%d is your first mark", marks[0]);
        if (i > 1) {
            printf(" and %d is your last mark", marks[i - 1]);
        }
        printf("\nRemainings are:\n");
        for (int j = 1; j < i; j++) {
            printf("%d\t", marks[j]);
        }
    } else {
        printf("No marks entered.");
    }

    return 0;
}
