#include <stdio.h>

int main(){
int mat [10][10];
int cont=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            (mat[i][j] == 0) ? cont++ : cont;
        }
    }

printf("%d\n", cont);


    return 0;
}