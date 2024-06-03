#include <stdio.h>
 
int main() {

double v, media=0;
int cont=0;
for(int i=0 ;i<6; i++){
    scanf("%lf", &v);
    if (v>0){ 
    cont++;
    media+=v;
    }
}
media /= cont;
printf("%d valores positivos\n", cont);
printf("%.1lf\n", media);

    return 0;
}