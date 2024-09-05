#include <stdio.h>
#include <string.h>

int main(){
char str[201];
fgets(str, 201, stdin);

if(str[strlen(str)-1]=='\n')
   str[strlen(str)-1]='\0';

char *ptr=str;
for (int i=strlen(str)-1; i>=0; i--){
    putchar(*(ptr+i));
}

    return 0;
}