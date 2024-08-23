#include <stdio.h>
#include <string.h>


void troca(char *str){
    char *inic = str;
    char *final = str + strlen(str) - 1;
    char *inic1 = NULL, *final1 = NULL, *inic2 = NULL, *final2 = NULL;
    while (*inic==' ') inic++;
    inic1 = inic;
    while (*inic != '\0' && *inic != ' ') inic++;
    final1 = inic - 1;
    
    while (*final==' ') final--;
    final2 = final;
    while (final >= str && *final != ' ')final--;
    inic2 = final + 1;
    
    if (inic1 != final2){
    int tam1 = final1 - inic1 + 1;
    int tam2 = final2 - inic2 + 1;
    char temp[tam1+1];
    strncpy(temp, inic1, tam1);
    temp[tam1] = '\0';
    memmove(inic1, inic2, tam2); 
    memmove(inic1 + tam2, final1 + 1, inic2 - final1 - 1); 
    memmove(inic2 - tam1 + tam2, temp, tam1); 
    }
}

int main() {
    char frase[] = "Nao testamos esse treco";
    printf("Frase original: %s\n", frase);
    troca(frase);
    printf("Frase modificada: %s\n", frase);
    return 0;
}