#include <stdio.h>

int maiorValor(int vet[], int tam){
    int maior=0;
    for (int i=0; i <= tam; i++){
    if (vet[i]>maior)
    maior = vet[i];
    }
return maior;
}

int main (){
    int vet[] = {10, 5, 30, 150};
    
    printf("%d", maiorValor(vet, 4));


    return 0;
}