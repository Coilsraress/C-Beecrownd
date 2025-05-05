#include <stdio.h>

int main(){
    int vetor[30] = {0};
    int n, parada, sinalizadora;
    scanf ("%d", &n);
    vetor[0] = n;


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

        for(int i = 29; i>=0; i--){
            if (i == 0 && vetor[0] == 1){
                sinalizadora = 1;
                break;
            }
            if(vetor[i]>1){
                vetor[i]--;
                vetor[i+1]++;
            }
        }


        if(sinalizadora){
            break;
        }
    }
    return 0;
}
