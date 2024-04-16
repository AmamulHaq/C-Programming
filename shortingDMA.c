#include<stdio.h>
#include<stdlib.h>

void sorting(int *p) {
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (*(p + i) > *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;}}}}

int main() {
    int *p = NULL;
    p = (int *)calloc(3, sizeof(int));
    printf("Enter 1D array: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", (p + i));
    }
    sorting(p);
    printf("Sorted array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d\t", *(p + i));
    }
    free(p);
    return 0;
}