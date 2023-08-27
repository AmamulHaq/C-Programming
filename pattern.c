#include <stdio.h>

int main()
{char name[24];
printf("Enter your name:");
scanf("%s",name);
for (int i = 0; name[i] != '\0'; i++) {   
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] -= 32;
        }}
        
printf("\nThe upper case is %s",name);

 for (int i = 0; name[i] != '\0'; i++) {   
        if (name[i] >= 'A' && name[i] <= 'Z') {
            name[i] += 32;
        }}
        
printf("\nThe lower case is %s",name);


return 0;


}