#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
FILE *text;
text = fopen("lista3.txt", "r");
int contador=0;
char caractere = 'a';
char aux;


while(fscanf(text, "%c", &aux)!=EOF){
    (aux == caractere) ?  contador++ : contador;
}

printf("O numero de caracteres '%c' e %d\n", caractere, contador);


return 0;
}