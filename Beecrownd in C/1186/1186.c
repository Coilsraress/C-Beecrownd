#include <stdio.h>

int main(){
float vet[12][12];
float acu=0.0, acu2=0.0;
double media;
char t;
int cont=0, cont2=0;
scanf(" %c", &t);

for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
        scanf("%f", &vet[i][j]);
    }
}
  
for(int i=0; i<6; i++){
    for(int j=0 ; j<12; j++){
    if (j > i && j < 11-i){
    acu +=  vet[i][j];
    cont++;
    }
 } 
}


media = (double)acu/cont;
if (t == 'S')
printf("%.1f\n", acu);
if (t == 'M')
printf("%.1lf\n", media);

    return 0;
}