#include <stdio.h>
#include <math.h>

int main() {
    float x, s = 0, t, nume, dino;
    int i;
    printf("Enter any value for x in radians:");
    scanf("%f", &x);

    for (i = 0; i < 6; i++) {
        nume = pow(-1, i) * pow(x, 2 * i);
        dino = 1;
        for (int j = 1; j <= 2 * i; j++) {
            dino *= j;
        }
        t = nume / dino;
        s = s + t;
    }
    printf("cos(%f) = %f", x, s);
    return 0;
}
