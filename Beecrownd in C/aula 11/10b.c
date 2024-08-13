#include <stdio.h>
#include <string.h>
#include <ctype.h>
void formato(char str[]){
    int tam = strlen(str);
    int j = 0;
    for(int i=0; i<tam; i++){
        if(isalnum(str[i])){            
            str[j++] = toupper(str[i]); 
        }
    }
    str[j] = '\0';                      
}
int palindromo(char str[]){
    int tam = strlen(str);            
    for(int i=0, j=(tam-1); i<(tam/2); i++, j--){
        if(str[i] != str[j])
        return 0;
    }
    return 1;
}
int main(){
    char str[51];
    fgets(str, sizeof(str), stdin);
    formato(str);
    if (palindromo(str))
        printf("Palindromo\n");
    else
        printf("Nao e palindromo\n");
    
   
    return 0;
}