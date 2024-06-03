#include <stdio.h>
 
int main() {
int i=1, j=7, c;
for(i=1; i<=9; i+=2){
    c=j-2;
    for(j; j>=c; j--){
    printf("I=%d J=%d\n", i, j);
    }
    j+=5;
}
    return 0;
}