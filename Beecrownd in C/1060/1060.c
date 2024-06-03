#include <stdio.h>
 
int main() {

double v;
int cont=0;
for(int i=0 ;i<6; i++){
    scanf("%lf", &v);
    (v>0) ? cont++ : v;
}
printf("%d valores positivos\n", cont);

    return 0;
}