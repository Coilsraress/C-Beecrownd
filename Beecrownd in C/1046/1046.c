#include <stdio.h>
 
int main() {
 
int h1, h2, h;
scanf("%d %d", &h1, &h2);
h = h2-h1;
(h <= 0) ? h+=24 : h;
printf("O JOGO DUROU %d HORA(S)\n", h);

    return 0;
}