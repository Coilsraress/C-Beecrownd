#include <stdio.h>
 
int main() {
 
double renda, imposto1, imposto2, imposto3;
scanf("%lf", &renda);
if (renda>0&&renda<=2000.00)
    printf("Isento\n");

else if(renda > 2000.00 && renda <= 3000.00){
    imposto1 = (renda - 2000.00) * 0.08;
    printf ("R$ %.2lf\n", imposto1);
}
else if(renda > 3000.00 && renda <= 4500.00){
    imposto1 = 1000.00 * 0.08;
    imposto2 = (renda - 3000.00) * 0.18 + imposto1;
    printf ("R$ %.2lf\n", imposto2);
}
else if(renda > 4500.00){
    imposto1 = 1000.00 * 0.08;
    imposto2 = 1500 * 0.18;
    imposto3 = (renda - 4500.00) * 0.28 + imposto1 + imposto2;
    printf ("R$ %.2lf\n", imposto3);
}
    return 0;
}