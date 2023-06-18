#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Grade: %.2f\n", student.grade);
}

int main() {
    struct Student student1;

    strcpy(student1.name, "amamul haw");
    student1.age = 20;
    student1.grade = 85.5;

    printf("Student 1 Information:\n");
    displayStudent(student1);

    return 0;
}
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Grade: %.2f\n", student.grade);
}

int main() {
    struct Student student1;

    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.grade = 85.5;

    printf("Student 1 Information:\n");
    displayStudent(student1);

    return 0;
}
