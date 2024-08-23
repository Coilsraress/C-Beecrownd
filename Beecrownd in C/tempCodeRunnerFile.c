#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
 
int n;
scanf("%d\n", &n);
for(int i=0; i<n; i++){
    char str[51];
    fgets(str, 51, stdin);
    
    int len = strlen(str);

    for (int j = 0; j < len; j++){
        if(isalpha(str[j]) && (j==0 || str[j-1] == ' ')){
            putchar(str[j]);
    
        }
        putchar('\n');
    }

}

return 0;
}