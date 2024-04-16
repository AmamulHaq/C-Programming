#include <stdio.h>

struct student {
    char name[20];
    int mark[2];
    int percentage;
};

void cal(struct student *p) {
    int i;
    int max = p->percentage; 
    for (i = 0; i < 2; i++) {
        if ((p+i)->percentage > max) {
            max = (p+i)->percentage;
        }
    }
    printf("Details of student(s) with highest percentage:\n");
    for (i = 0; i < 2; i++) {
        if (max == (p+i)->percentage) {
            printf("%s\t%d\n", (p+i)->name, (p+i)->percentage);
        }
    }
}

int main() {
    struct student std[2];
    int i, j;
    for (i = 0; i < 2; i++) {
        std[i].percentage = 0;
        printf("Enter Name of student(%d)\n", i + 1);
        scanf("%s", std[i].name);
        for (j = 0; j < 2; j++) {
            printf("Mark in subject %d\n", j + 1);
            scanf("%d", &std[i].mark[j]);
            std[i].percentage += std[i].mark[j];
        }
        std[i].percentage = (int)(std[i].percentage / 2);
    }
    cal(std); 
    return 0;
}
