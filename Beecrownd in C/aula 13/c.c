#include <stdio.h>

void troca(int *a, int *b){
int aux = *a;
*a = *b;
*b = aux;
}


int main(){
int a, b;
scanf("%d %d", &a, &b);

printf("a = %d b = %d\n", a, b);
troca(&a, &b);
printf("a = %d b = %d\n", a, b);


    return 0;
}