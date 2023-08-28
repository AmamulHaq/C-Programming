#include <stdio.h>
#include <string.h>
int main() {
    char para[1000];
    printf("Enter any digit numbers :\n");
    fgets(para, sizeof(para), stdin);
    printf("words of your number are:\n");
    for (int i = 0; i <=50; i++) {
        if (para[i] >= '0' && para[i] <= '9') {
            switch (para[i])  {
                    case '0': printf("Zero "); break;
                    case '1': printf("One "); break;
                    case '2': printf("Two "); break;
                    case '3': printf("Three "); break;
                    case '4': printf("Four "); break;
                    case '5': printf("Five "); break;
                    case '6': printf("Six "); break;
                    case '7': printf("Seven "); break;
                    case '8': printf("Eight "); break;
                    case '9': printf("Nine "); break;
                    default: printf("Invalid character "); break;
                }}}
    return 0;
}
