#include <stdio.h>
#include <string.h>

int main(){
char str[] = "Bon Jovi";
int tam = strlen(str);
char *ptr = str;
while (*ptr != '\0'){
    putchar(*ptr);
    ptr++;
}
putchar('\n');
while (ptr >= str){
    putchar(*ptr);
    ptr--;
}
putchar('\n');

return 0;
}