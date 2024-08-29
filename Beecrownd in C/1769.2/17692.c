#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void gerar_cpf(char* cpf) {
    // Gerar números aleatórios
    int partes[11];  // Precisamos de 11 dígitos
    for (int i = 0; i < 11; i++) {
        partes[i] = rand() % 10; // Gera um número entre 0 e 9
    }

    // Formatar o CPF
    sprintf(cpf, "%d%d%d.%d%d%d.%d%d%d-%d%d",
            partes[0], partes[1], partes[2],
            partes[3], partes[4], partes[5],
            partes[6], partes[7], partes[8],
            partes[9], partes[10]);
}

int main() {
    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

    int t = 1000;
    char cpf[15];

    while (t--) {
        gerar_cpf(cpf);
        // Variáveis para validação
        int soma1 = 0, soma2 = 0, resto1, resto2, j = 0;
        // Validar o CPF gerado
        for (int i = 0; cpf[i] != '\0'; i++) {
            if (isdigit(cpf[i])) {
                soma1 += (cpf[i] - '0') * (j + 1);
                j++;
                if (j == 9) break;
            }
        }
        resto1 = soma1 % 11;
        if (resto1 == 10) resto1 = 0;
        
        j = 0;

        for (int i = 0; cpf[i] != '\0'; i++) {
            if (isdigit(cpf[i])) {
                soma2 += (cpf[i] - '0') * (9 - j);
                j++;
                if (j == 9) break;
            }
        }
        resto2 = soma2 % 11;
        if (resto2 == 10) resto2 = 0;
        
        if (resto1 == (cpf[12] - '0') && resto2 == (cpf[13] - '0')){
            printf("CPF gerado: %s\n", cpf);
            printf("CPF valido\n");}
       // else 
       //     printf("CPF invalido\n");
    }

    return 0;
}
