#include<stdio.h>
int check(int n){
    if(n%2==0){return n*n;}else{return n*n*n;}
};
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("the result is :%d ",check(n));
}