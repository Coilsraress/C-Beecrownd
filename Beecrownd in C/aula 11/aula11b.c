#include <stdio.h>

int main(){
int mat [4][4];
int trans [4][4];
int cont=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
        trans [i][j] = mat [j][i];
        printf("%d ", trans [i][j]);
        }
     printf("\n");
    }

    return 0;
}