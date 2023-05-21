#include<stdio.h>
#include<conio.h>
int main()
{
char fname[15];
char lname[15];


printf("What is your first name?\n");
scanf("%s",fname);                                                                              

printf("What is your last name?\n");
scanf("%s",lname);


printf("HAPPY ANNIVERSARY %s %s\n Have a good day.",fname,lname);

return 0;

}