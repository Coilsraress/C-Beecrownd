#include <stdio.h>
#include <string.h>

void reverse (char *str, int ini, int fim){
    if (ini>= fim)
    return;

char temp = str[ini];
str[ini] = str[fim];
str[fim] = temp;

reverse (str, ini+1, fim-1);
}

int main() {
    char string[201];
    fgets(string, 201, stdin);
    if(string[strlen(string)-1]=='\n')
    string[strlen(string)-1]='\0';

    reverse(string, 0, strlen(string) - 1);

    printf("Invertida: %s\n", string);

    return 0;
}