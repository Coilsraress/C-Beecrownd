#include <stdio.h>
#include <string.h>

int main() {
char a[1000], b[1000];
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++){
    scanf("%s %s", a, b);
int tam_a = strlen(a);
int tam_b = strlen(b);

if (tam_a>=tam_b && !strcmp(&a[tam_a-tam_b], b))
printf("encaixa\n");
else
printf("nao encaixa\n");

}




    return 0;
}