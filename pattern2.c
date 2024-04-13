#include <stdio.h>
#include <math.h>
int main(){
    int n=5,i,sum=0;
    for(i=0;i<n;i++){
        sum+=2*i*pow(-1,i+1);
    }
    printf("Sum: %d\n", sum);
    return 0;
}
