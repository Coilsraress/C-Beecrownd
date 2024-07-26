#include <stdio.h>
#include <math.h>

int verify_circle( int R1, int X1, int Y1, int R2, int X2, int Y2){
    float d;
    d=sqrt(pow(X2-X1, 2)+pow(Y2-Y1, 2));
    if (d+R2<=R1)
    return 1;
    else 
    return 0;
}

int main (){
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(verify_circle(a, b, c, d, e, f))
    printf("RICO\n");
    else
    printf("MORTO\n");

    return 0;
}