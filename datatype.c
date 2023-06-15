#include<stdio.h>
#include<string.h>

int main()
{

int myNum = 5 , herNum = 7;            
float myFloatNum = 24.4 , herFloatNum = 42.2 ;  
char myLetter = 'A' , herLetter = 'R' ;
char myName[24]= "Amamul Haq" , herName[25]= "Rakshya Raut" ;    

// Print variables
printf("%d\n%d\n", myNum, herNum);
printf("%.3f\n%.3f\n", myFloatNum , herFloatNum);
printf("%c\n%c\n", myLetter , herLetter);
printf("%s\n%s\n", myName , herName );

}
