#include <stdio.h>
 
int main() {

int num, newnum, maior, cont;
scanf("%d", &num);
    for(int i=1; i<100; i++){
        scanf("%d", &newnum);
        if (newnum>num){
            maior = newnum;
            num=newnum;
            cont=i+1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", cont);

    return 0;
}