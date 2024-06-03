#include <stdio.h>
 
int main() {
 
double n1,n2,n3,n4, ne;
scanf("%lf %lf %lf %lf", &n1,&n2,&n3,&n4);
double media;
media = (n1*2+n2*3+n3*4+n4) / 10;
printf("Media: %.1lf\n", media);
if(media>=7.0){
    printf("Aluno aprovado.\n");
}
else if (media<5.0){
    printf("Aluno reprovado.\n");
}
else if (media>=5.0&&media<7.0){
    printf("Aluno em exame.\n");
    scanf("%lf", &ne);
    printf("Nota do exame: %.1lf\n", ne);
    double media2 = (media + ne) /2;
    if (media>=5.0)
    printf("Aluno aprovado.\n");
    else
    printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n", media2);
}

    return 0;
}