#include <stdio.h>

void media (){
double scan, media=0;
int i=2;
while (i){
scanf("%lf", &scan);
if(scan>=0&&scan<=10){
media+=scan;
i--;
}
else
printf("nota invalida\n");
}
printf("media = %.2lf\n", media/2);
}



int main() {
int x=1;
while(1){
    if(x==1){
    media();
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);
    }
    else if(x==2){
    break;
    }
    else{
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &x);   
    }
}


    return 0;
}