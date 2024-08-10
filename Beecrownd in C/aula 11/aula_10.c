#include <stdio.h>

int maiorValor(int vet[], int tam){
    int maior=0;
    for (int i=0; i < tam; i++){
    if (vet[i]>maior)
    maior = vet[i];
    }
return maior;
}

double media(int vet[], int tam){
    double acu=0;
    for (int i=0; i < tam; i++){
        acu += vet[i];
    }
return acu/tam; 
}

int checa( int vet[], int tam, int c){
    int check = 0;
    for (int i=0; i<tam; i++){
        for (int j=1; j<tam; j++){
        if(j==i)
        continue;
        if(vet[i]*vet[j]==c)
        return 1;
        }
    }
return 0;
}


int main (){
    int vet[] = {2, 4, 5, -10, 7};
    int c = 35;
    printf("%d\n", maiorValor(vet, 5));
    printf("%.2lf\n", media(vet, 5));
    printf("%d\n", checa(vet, 5, c));
    return 0;
}