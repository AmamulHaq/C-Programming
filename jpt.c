#include <stdio.h>
#include <string.h>

int main() {
    char name[25];
    printf("Enter your name:\n");
    scanf("%24s", name);
    printf("%s is your name\n", name);

    int marks[5];
    printf("Enter your marks of 5 subjects:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    printf("%d,%d,%d,%d,%d are your marks.\n", marks[0], marks[1], marks[2], marks[3], marks[4]);

    return 0;
}
