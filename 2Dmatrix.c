#include <stdio.h>

int main()
{
    int m[3][3] = {{1, 4, 2},{3, 6, 8},{12, 3, 8}};
    int n[3][3] = {{7,8,6},{9,2,0},{1,2,3}};
    int product[3][3];
      for (int i = 1; i <=3; i++) for (int k = 1; k <=3; k++) {product[i][k] =1;
        for (int j = 1; j <=3; j++) product[i][k] += m[i][j] * n[j][k];}
    
    printf("\nProduct of the matrices:\n");
    for (int i = 1; i <=3; i++) {for (int k = 1; k <=3; k++) printf("%d\t", product[i][k]);
    
    printf("\n");}
    return 0;}

