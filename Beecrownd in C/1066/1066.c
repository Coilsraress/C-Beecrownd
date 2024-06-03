#include <stdio.h>

int main() {
int v, par=0, imp=0, pos=0, neg=0;

for(int i=0 ;i<5; i++){
    scanf("%d", &v);
    if(v%2==0)
    par++;
    else
    imp++;

    if(v>0)
    pos++;
    else if(v<0)
    neg++;
}
printf("%d valor(es) par(es)\n", par);
printf("%d valor(es) impar(es)\n", imp);
printf("%d valor(es) positivo(s)\n", pos);
printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}