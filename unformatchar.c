#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("text.txt", "w+");
    if (f != NULL) {
        printf("opened successfully\n");
    }
    char c;
    c = getc(stdin);
    fputc(c, f);
    rewind(f);
    fgetc(f); 
    putchar(c);

    return 0;
}
