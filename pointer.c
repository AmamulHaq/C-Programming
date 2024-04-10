#include<stdio.h>
int main(){
    int n=5;
    int *ptr;
    ptr=&n;
    printf("the address of n is: %p\n",ptr);
    printf("the value of n is: %i",*ptr);
}