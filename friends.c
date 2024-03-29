//friends details
#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    char fav_food[50];
    char sports[50];
    int rollno;
};

int main()
{
    char name[50];
    printf("Enter name of your friend:\n");
    scanf("%s", name);

    struct student s1, s2, s3, s4, s5, s6, s7;
    strcpy(s1.fav_food, "chicken");
    strcpy(s1.sports, "football");
    s1.rollno = 01;
    strcpy(s2.fav_food, "momo");
    strcpy(s2.sports, "football");
    s2.rollno = 02;
    strcpy(s3.fav_food, "samosa");
    strcpy(s3.sports, "keeper");
    s3.rollno = 03;
    strcpy(s4.fav_food, "anda");
    strcpy(s4.sports, "dhoni");
    s4.rollno = 04;
    strcpy(s5.fav_food, "chat");
    strcpy(s5.sports, "cricket");
    s5.rollno = 05;
    strcpy(s6.fav_food, "biryani");
    strcpy(s6.sports, "gucha");
    s6.rollno = 06;
    strcpy(s7.fav_food, "chakka");
    strcpy(s7.sports, "tt");
    s7.rollno = 07;
   

    if (strcmp(name, "Ritu") == 0)
    {
        strcpy(s1.name, name);
        printf("%s%s%s %d\n", s1.name, s1.fav_food, s1.sports, s1.rollno);
    }
    else if (strcmp(name, "Rakshya") == 0)
    {
        strcpy(s2.name, name);
        printf("%s%s%s %d\n", s2.name, s2.fav_food, s2.sports, s2.rollno);
    }
    else if (strcmp(name, "Ramila") == 0)
    {
        strcpy(s3.name, name);
        printf("%s%s%s %d\n", s3.name, s3.fav_food, s3.sports, s3.rollno);
    }
    else if (strcmp(name, "anish") == 0)
    {
        strcpy(s4.name, name);
        printf("%s%s%s %d\n", s4.name, s4.fav_food, s4.sports, s4.rollno);
    }
    else if (strcmp(name, "aman") == 0)
    {
        strcpy(s5.name, name);
        printf("%s%s%s %d\n", s5.name, s5.fav_food, s5.sports, s5.rollno);
    }
    else if (strcmp(name, "abhi") == 0)
    {
        strcpy(s6.name, name);
        printf("%s%s%s %d\n", s6.name, s6.fav_food, s6.sports, s6.rollno);
    }
    else if (strcmp(name, "ansarul") == 0)
    {
        strcpy(s7.name, name);
        printf("%s%s%s %d\n", s7.name, s7.fav_food, s7.sports, s7.rollno);
    }
    
    else

        return 0;
}
