#include <stdio.h>

struct student
{
    char name[24];
    int marks[3];
    int per;
};

void get(struct student s[3])
{  
    
    for (int i = 0; i < 3; i++)
    {   printf("Enter name and marks[3]: ");
        scanf("%s", s[i].name);
        s[i].per=0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].marks[j]);
            s[i].per+=s[i].marks[j];
        }
    }
}


int main()
{
    struct student s[3];
    get(s);
    for (int i = 0; i < 3; i++)
    {   if(s[i].per/3>70){
        printf("%s\t", s[i].name);
        for (int j = 0; j < 3; j++)
        {   
            printf("%d\t", s[i].marks[j]);
        }}
        printf("\n");
    }
    
    return 0;
}