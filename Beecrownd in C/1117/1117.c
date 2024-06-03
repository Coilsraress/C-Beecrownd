#include <stdio.h>
 
int main() {
double scan, media=0, nota2;
int i=2;
while (i){
scanf("%lf", &scan);
if(scan>=0&&scan<=10){
media+=scan;
i--;
}
else
printf("nota invalida\n");
}
printf("media = %.2lf\n", media/2);
    return 0;
}