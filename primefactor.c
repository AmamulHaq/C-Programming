#include<stdio.h>
int isfact(int);
int main(){
    int num, x;
    printf("Enter any number:");
    scanf("%d",&num);
   // printf("%d\n",num);
    for(int i=2;i<=num;i++){
        if(num%i==0){
           x=isfact(i);
           if(x==24){
            printf("%d\t",i);
        }
        }
    }
    return 0;
}
int isfact(int fact){
     int count =0;
     for(int i=1;i<fact;i++){
        if(fact%i==0){
            count = count +1;
        }
     }
     if(count>1){
            return 2;
        }else{
            return 24;
        }
       count =0; 
}