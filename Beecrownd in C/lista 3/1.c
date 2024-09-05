#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char *sequencia; 
char *sem_espaco;
int tam, cont=0;

sequencia=(char*)malloc(1000*sizeof(char));
fgets(sequencia, 1000, stdin);

tam = strlen(sequencia);
sem_espaco=(char*)malloc(tam*sizeof(char));

for(int i =0; i<tam; i++){
    if(sequencia[i] != ' '){
        sem_espaco[cont++]=sequencia[i];
    }
}
sem_espaco[cont]='\0';

printf("%s\n", sem_espaco);
    free(sequencia);
    free(sem_espaco);

    return 0;

}