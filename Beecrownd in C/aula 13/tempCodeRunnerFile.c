#include <stdio.h>

#define MAX 100

void leMatriz (double mat [][MAX], int n){
    int i, j;
    printf("Lendo dados da matriz (linha por linha)\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%lf", &mat[i][j]);
        }
    }
}
void imprimeMatriz (double mat [][MAX], int n){
    int i, j;
    printf("dados da matriz (linha por linha)\n");
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                printf("%.2lf ", mat [i][j]); 
            }
        printf("\n");
        }
}
void multiplica(double mat1[][MAX], double mat2[][MAX], double resp[][MAX], int n){
    int i, j,k;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            resp[i][j] = 0;
            for(k=0; k<n; k++){
                resp[i][j] = resp[i][j] + (mat1[i][k]*mat2[k][j]);
            }
        }
    }
}
void soma(double mat1[][MAX], double mat2[][MAX], double resp[][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            resp[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void subtrai(double mat1[][MAX], double mat2[][MAX], double resp[][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            resp[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void transpoe(double mat[][MAX], double resp[][MAX], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            resp[j][i] = mat[i][j];
        }
    }
}

int main() {
double mat1 [MAX][MAX], mat2 [MAX][MAX], mat3 [MAX][MAX];
int n, opc=0;
printf("Qual dimensao das matrizes: ");
scanf("%d", &n);
printf("Digite a matriz 1: ");
leMatriz (mat1, n);
printf("Digite a matriz 2: ");
leMatriz (mat2, n);

while(opc!= 6){
    printf("\n");
    printf("Escolha a operacao:\n");
    printf("1 - Soma de matrizes\n");
    printf("2 - Subtracao de matrizes\n");
    printf("3 - Multiplicacao de matrizes\n");
    printf("4 - Transposicao da Matriz 1\n");
    printf("5 - Transposicao da Matriz 2\n");
    printf("6 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        soma(mat1, mat2, mat3, n);
        printf("A soma e: \n");
        imprimeMatriz(mat3, n);
        break;
    case 2:
        subtrai(mat1, mat2, mat3, n);
        printf("A subtracao e: \n");
        imprimeMatriz(mat3, n);
        break;
    case 3:
        multiplica(mat1, mat2, mat3, n);
        printf("A multiplicacao e: \n");
        imprimeMatriz(mat3, n);
        break;
    case 4:
        transpoe(mat1, mat3, n);
        printf("A transposta da matriz 1 e: \n");
        imprimeMatriz(mat3, n);
        break;
    case 5:
        transpoe(mat2, mat3, n);
        printf("A transposta da matriz 2 e: \n");
        imprimeMatriz(mat3, n);
        break;
        
    case 6:
        printf("Encerrando programa\n");
        break;

    default:
        printf("Opcao invalida, tente novamente: \n");
        break;
    }
}


return 0;

}