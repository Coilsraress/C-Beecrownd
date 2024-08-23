#include <stdio.h>
#include <string.h>
#include <ctype.h>

void obter_sequencia(char c, char* seq) {
    char teclas[8][4] = {
        {'a', 'b', 'c'},    // tecla 2
        {'d', 'e', 'f'},    // tecla 3
        {'g', 'h', 'i'},    // tecla 4
        {'j', 'k', 'l'},    // tecla 5
        {'m', 'n', 'o'},    // tecla 6
        {'p', 'q', 'r', 's'}, // tecla 7
        {'t', 'u', 'v'},    // tecla 8
        {'w', 'x', 'y', 'z'}  // tecla 9
    };

    seq[0] = '\0';

    if (c == ' ') {
        strcpy(seq, "0");
        return;
    }

    int maiusculo = isupper(c);
    if (maiusculo) {
        strcat(seq, "#");
        c = tolower(c);
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            if (teclas[i][j] == c) {
                for (int k = 0; k <= j; k++) {
                    char digito = '2' + i;
                    strncat(seq, &digito, 1);
                }
                return;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();  // Consumir o \n após o número

    char mensagem[141];
    for (int i = 0; i < n; i++) {
        fgets(mensagem, 141, stdin);
        mensagem[strcspn(mensagem, "\n")] = 0;  // Remover \n se houver

        char resultado[1000] = "";
        char ultima_tecla = '\0';

        for (int j = 0; mensagem[j] != '\0'; j++) {
            char seq[10];
            obter_sequencia(mensagem[j], seq);

            // Adicionar '*' se necessário
            if (seq[0] != '#' && seq[0] == ultima_tecla) {
                strcat(resultado, "*");
            }

            strcat(resultado, seq);
            if (seq[0] != '#') {
                ultima_tecla = seq[0];
            }
        }

        printf("%s\n", resultado);
    }

    return 0;
}
