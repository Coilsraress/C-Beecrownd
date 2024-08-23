#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main() {
    int matriz[TAM][TAM];
    int soma = 0;
    int quant50 = 0;

    srand(time(NULL));

    printf("Matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100;
            printf("%d  ", matriz[i][j]);

            soma += matriz[i][j];
            if (matriz[i][j] > 50) {
                quant50++;
            }
        }
        printf("\n");
    }

    printf("Soma: %d\n", soma);
    printf("Quantidade de n > 50: %d\n", quant50);

    return 0;
}