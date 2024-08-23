#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char cpf[15];

    while (scanf("%s", cpf) != EOF) {
        int soma1 = 0, soma2 = 0, resto1, resto2, j=0;;
    for (int i = 0; cpf[i] != '\0'; i++) {
            if (isdigit(cpf[i])) {
                soma1 += (cpf[i] - '0') * (j + 1);
                j++;
                if (j == 9) break;
            }
        }
        resto1 = soma1 % 11;
        (resto1==10) ? resto1=0 : resto1;
        
        j = 0;

        for (int i = 0; cpf[i] != '\0'; i++) {
            if (isdigit(cpf[i])) {
                soma2 += (cpf[i] - '0') * (9 - j);
                j++;
                if (j == 9) break;
            }
        }
        resto2 = soma2 % 11;
        (resto2==10) ? resto2=0 : resto2;
        
        if (resto1 == (cpf[12] - '0') && resto2 == (cpf[13] - '0'))
            printf("CPF valido\n");
        else 
            printf("CPF invalido\n");
    }

    return 0;
}
