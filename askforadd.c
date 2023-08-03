#include<stdio.h>
int main(){
int num1,num2,sum;
char dic;

printf("Enter first number: ");
scanf("%d",&num1);

print("Enter second number: ");
scanf("%d",&num2);

sum=num1+num2;
printf("Sum is %d\n",sum);
again:

printf("Do you want to enter next two number and print their sum \n");
printf("Enter y for yes.\nAnd 'n' for no.\n");
scanf("%s",&dec);
while(dec=='y'){
printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);
sum=num1=num2;

printf("sun is %d\n",sum);
goto again;

}
return 0;
}








}