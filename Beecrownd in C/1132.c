#include <stdio.h>
int main() {
int x, y, soma=0;
scanf("%d %d", &x, &y);
if (y>x){
    for(int i=x; i<=y; i++){
    (i%13!=0) ? soma+=i : i;
    }
}
else{
    for(int i=y; i<=x; i++){
    (i%13!=0) ? soma+=i : i;
    }
}
printf("%d\n", soma);
    return 0;
}
