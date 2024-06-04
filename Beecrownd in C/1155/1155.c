#include <stdio.h>
 
int main() {
 
double s=0;
for(double i=1; i<=100; i++){
    s+=(1/i);
}
printf("%.2lf\n", s);

    return 0;
}