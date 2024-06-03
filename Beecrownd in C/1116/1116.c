#include <stdio.h>
 
int main() {
int n;
double x, y;
scanf("%d", &n);
for(int i=0; i<n; i++){
    scanf("%lf %lf", &x, &y);
    double resu = x/y;
    if (y==0)
    printf("divisao impossivel\n");
    else{
        printf("%.1lf\n", resu);
    }
}
 
    return 0;
}