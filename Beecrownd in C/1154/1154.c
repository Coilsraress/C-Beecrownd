#include <stdio.h>
 
int main() {
int x, soma=0, i=0;
scanf("%d",&x);
while(x>=0){
    soma+=x;
    i++;
    scanf("%d",&x);
}
double media = (float)soma/(float)i;
printf("%.2lf\n", media);

    return 0;
}