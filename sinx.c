#include<stdio.h>
#include<math.h>

int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for(int i = n; i > 1; i--) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 3;
    double x, t, sum = 0;
    
    printf("Enter degree: \n");
    scanf("%lf", &x);
    
    x = x * 3.1415 / 180;
    
    for(int i = 1; i <= n; i++) {
        t = 2 * i - 1;
        sum += pow(-1, i + 1) * pow(x, t) / fact(t);
    }
    
    printf("%.2f", sum);
    
    return 0;
}
