#include <stdio.h>

int main(){

int vetor[30] = {0};
int n, parada;
scanf ("%d", &n);
vetor[0]=n;

while(1){
  
    for(int i=0; i<30; i++){
        if(vetor[i]==0){
            parada = i;
            break;
        }
    }
    for(int i=0; i<parada; i++){
        printf("%d", vetor[i]);
        if(i==parada-1){
            continue;
        }else{
            printf(" + ");
        }
    }
    printf("\n");

        if (vetor[parada - 1] > 1) {
            vetor[parada - 1]--; 
            vetor[parada] = +1; 

        }else{
            int menor = vetor[0], posicao = 0;
            for (int i = 0; i < parada; i++) {
                if (vetor[i] > 1 && vetor[i] <= menor) {
                    menor = vetor[i];
                    posicao = i;
                }
            }
                vetor[posicao]--;
                if(vetor[posicao+1]==1 && vetor[posicao+2]==0){
                vetor[posicao+1] += 1;
            }else{
                    for(int i=posicao; i<30; i++){
                        if (vetor[i]== 0){
                            vetor[i] = 1; 
                            break;
                    }
                }
        }
    }

        int soma = 0;
        for(int i=0; i<=parada; i++){
            soma += vetor[i];
        }
        if(soma!= n){
            for(int i=0; i<parada; i++){
                vetor[parada+1] = 1;
            }
            soma = 0;
        }



        if(vetor [0] == 1){
            break;
        }
}

    return 0;
}