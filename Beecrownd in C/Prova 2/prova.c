#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
char str[201];
fgets(str, 201, stdin);

if (str[strlen(str) - 1] == '\n') 
    str[strlen(str) - 1] = '\0';

char *ptr=str;
int tamanho=strlen(str)-1;
ptr+=tamanho;

for(int i=tamanho; i>= 0; i--){
    putchar(*ptr);
    ptr--;
}


    return 0;
}