#include <stdio.h>

int main(){
float vet[12][12];
int c;
float acu=0.0;
double media;
scanf("%d", &c);
char t;
scanf(" %c", &t);

for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
        scanf("%f", &vet[i][j]);
    }
}
  
for(int i=0; i<12; i++){
    acu +=  vet[i][c];
}

media = (double)acu/12;
if (t == 'S')
printf("%.1f\n", acu);
if (t == 'M')
printf("%.1lf\n", media);

    return 0;
}