#include <stdio.h>
 
int main() {
 
double salario, newSalario;
scanf("%lf", &salario);

if (salario >= 0.00 && salario <= 400.00){
    newSalario= salario*0.15 + salario;
    printf("Novo salario: %.2lf\n", newSalario);
    printf("Reajuste ganho: %.2lf\n", newSalario-salario);
    printf("Em percentual: 15 %\n", newSalario);
}
else if (salario > 400.00 && salario<=800.00){
    newSalario= salario*0.12 + salario;
    printf("Novo salario: %.2lf\n", newSalario);
    printf("Reajuste ganho: %.2lf\n", newSalario-salario);
    printf("Em percentual: 12 %\n", newSalario); 
}
else if (salario > 800.00 && salario<=1200.00){
    newSalario= salario*0.10 + salario;
    printf("Novo salario: %.2lf\n", newSalario);
    printf("Reajuste ganho: %.2lf\n", newSalario-salario);
    printf("Em percentual: 10 %\n", newSalario);
}
else if (salario > 1200.00 && salario<=2000.00){
    newSalario= salario*0.07 + salario;
    printf("Novo salario: %.2lf\n", newSalario);
    printf("Reajuste ganho: %.2lf\n", newSalario-salario);
    printf("Em percentual: 7 %\n", newSalario);
}
else if (salario>2000.00){
    newSalario= salario*0.04 + salario;
    printf("Novo salario: %.2lf\n", newSalario);
    printf("Reajuste ganho: %.2lf\n", newSalario-salario);
    printf("Em percentual: 4 %\n", newSalario);
}

    return 0;
}