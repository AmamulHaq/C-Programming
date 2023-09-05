#include <stdio.h>
#include <string.h>
struct student{
char name[24];
int roll;
float gpa;};

int main()
{

struct student s1;
strcpy(s1.name,"amamul");
s1.roll=04;
s1.gpa=3.43;

printf("\nName of student%s:\n",s1.name);
printf("Roll no is%d:\n",s1.roll);
printf("gpa obtained is%.3f:\n",s1.gpa);

struct student s2;
strcpy(s2.name,"ritu");
s2.roll=34;
s2.gpa=3.57;

printf("\nName of student%s:\n",s2.name);
printf("Roll no is%d:\n",s2.roll);
printf("gpa obtained is%.3f:\n",s2.gpa);

struct student s3;
strcpy(s3.name,"rakshya");
s3.roll=02;
s3.gpa=3.77;

printf("\nName of student%s:\n",s3.name);
printf("Roll no is%d:\n",s3.roll);
printf("gpa obtained is%.3f:\n",s3.gpa);


return 0;
}












