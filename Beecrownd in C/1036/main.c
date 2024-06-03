#include <stdio.h>
#include <math.h>
int main() {
double a,b,c, delta, R1, R2;
scanf("%lf %lf %lf", &a,&b,&c);
delta = (b*b) - (4*a*c);
if (delta<0 || a== 0.0){
    printf("Impossivel calcular\n");
    return 0;
}
R1 = (-b + sqrt(delta))/(2*a);
R2 = (-b - sqrt(delta))/(2*a);
printf("R1 = %.5lf\n", R1);
printf("R2 = %.5lf\n", R2);
return 0;
}