#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
int n;
scanf("%d", &n);

for (int i = 0; i < n; i++){
    char a[201];
    scanf("%s", a);

    int freq[26] = {0};
    int cont = 0;

    for (int j = 0; a[j]!='\0'; j++){
        if(isalpha(a[j])){
            int let = tolower(a[j]) - 'a';
            freq[let]++;
            if (freq[let]>cont)
            cont=freq[let];
        }
    }
    for (int j = 0; j < 26; j++) {
    if (freq[j] == cont)
     printf("%c", j + 'a');
    }
    printf("\n");
}
    return 0;
}