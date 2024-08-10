#include <stdio.h>

int maior(int *a, int *b){
if (*b > *a){
int aux = *a;
*a = *b;
*b = aux;
}
else
return 0;
}


int main(){
int a, b;

scanf("%d %d", &a, &b);
printf("a = %d b = %d\n", a, b);
maior(&a, &b);
printf("a = %d b = %d\n", a, b);


return 0;
}