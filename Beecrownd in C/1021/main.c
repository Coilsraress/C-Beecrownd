#include <stdio.h>

int main(){
double n, z;
int ac, y;
scanf("%lf", &n);
printf("NOTAS:\n");
ac= (int)(n);
z=n-ac;
z=z*100;
y=(int)(z);
printf("%d nota(s) de R$ 100.00\n", ac/100);
ac=ac%100;
printf("%d nota(s) de R$ 50.00\n", ac/50);
ac=ac%50;
printf("%d nota(s) de R$ 20.00\n", ac/20);
ac=ac%20;
printf("%d nota(s) de R$ 10.00\n", ac/10);
ac=ac%10;
printf("%d nota(s) de R$ 5.00\n", ac/5);
ac=ac%5;
printf("%d nota(s) de R$ 2.00\n", ac/2);
ac=ac%2;
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", ac/1);
printf("%d moeda(s) de R$ 0.50\n", (int)(y/50));
y=y%50;
printf("%d moeda(s) de R$ 0.25\n", (int)(y/25));
y=y%25;
printf("%d moeda(s) de R$ 0.10\n", (int)(y/10));
y=y%10;
printf("%d moeda(s) de R$ 0.05\n", (int)(y/5));
y=y%5;
printf("%d moeda(s) de R$ 0.01\n", (int)(y/1));

return 0;
}