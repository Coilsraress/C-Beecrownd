#include <stdio.h>
 
int main() {
int n;
int alcool=0, gasolina=0, diesel=0, cont=0;
scanf("%d", &n);
while(n!=4){
    if(n==1){
    alcool++;
    cont++;
    }
    else if(n==2){
    gasolina++;
    cont++;
    }
    else if(n==3){
    diesel++;
    cont++;
    }
    scanf("%d", &n);
} 
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
 
    return 0;
}