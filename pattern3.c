#include <stdio.h>
int main(){
int n=3, count=1;
for(int i=1;i<=n; i++){
    for(int j=1;j<=2*n-1;j++){
        if(j>=n-(i-1)&&j<=n+(i-1)){
            printf("%3d",count);
            count++;}
            else{printf("   ");}

        }printf("\n");
    }return 0;
}
/* symmetric flyod triangle
        1      
     2  3  4   
  5  6  7  8  9

*/

