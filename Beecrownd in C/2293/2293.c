#include <stdio.h>

int main (){
int linhas, colunas;
scanf("%d %d", &linhas, &colunas);
int matriz[linhas][colunas];
int maior_linhas = 0, maior_colunas = 0;
int resultado;

for (int i = 0; i<linhas; i++){
    for (int j=0; j<colunas; j++){
        scanf("%d", &matriz[i][j]);
    }
}

for (int i=0; i<linhas; i++){
    int soma_linha = 0;
    for (int j=0; j< colunas; j++){
        soma_linha += matriz[i][j];
    }
    if (soma_linha > maior_linhas){
        maior_linhas = soma_linha;
    }
}

for (int j = 0; j < colunas; j++) {
     int soma_coluna = 0;
    for (int i = 0; i < linhas; i++) {
        soma_coluna += matriz[i][j];
    }
    if (soma_coluna > maior_colunas) {
        maior_colunas = soma_coluna;
    }
}

resultado = (maior_linhas > maior_colunas) ? maior_linhas : maior_colunas;
printf("%d\n", resultado);


return 0;
}