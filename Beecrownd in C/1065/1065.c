#include <stdio.h>
 
int main() {

int v;
int cont=0;
for(int i=0 ;i<5; i++){
    scanf("%d", &v);
    (v%2 == 0) ? cont++ : v;
}
printf("%d valores pares\n", cont);

    return 0;
}