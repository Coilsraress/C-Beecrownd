#include <stdio.h>
 
int main() {
 
int n;
scanf("%d", &n);
for (int i = 0; i<n; i++){
    double a,b,c, media;
    scanf("%lf %lf %lf", &a, &b, &c);
    media=(a*2+b*3+c*5)/10;
    printf("%.1lf\n", media);
}
 
    return 0;
}