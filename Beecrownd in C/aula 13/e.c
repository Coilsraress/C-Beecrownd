#include <stdio.h>

int dobro (int *a, int *b){
*a = *a *2;
*b = *b *2;
return *a+*b;
}


int main(){
int a, b, soma_dobro;
scanf("%d %d", &a, &b);

printf("a = %d b = %d\n", a, b);
soma_dobro = dobro(&a, &b);
printf("%d\n", soma_dobro);
printf("a = %d b = %d\n", a, b);


    return 0;
}