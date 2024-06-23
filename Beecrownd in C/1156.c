#include <stdio.h>
 
int main() {
 
double s=0, div=1;
for(double i=1; i<=39; i+=2){
    s+=(i/div);
    div*=2;
}
printf("%.2lf\n", s);

    return 0;
}