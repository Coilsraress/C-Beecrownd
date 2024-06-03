#include <stdio.h>
 
int main() {
double i=0.0, j=1.0, c;
for(i; i<=2; i+=0.2){
    c=j+2;
    for(j; j<=c; j++){
    if ((i>1.9&&i<2.1)||(i>0.9&&i<1.1)||i==0)
    printf("I=%.0lf J=%.0lf\n", i, j);
    else
    printf("I=%.1lf J=%.1lf\n", i, j);
    }
    j-=3;
    j+=0.2;
}
    return 0;
}