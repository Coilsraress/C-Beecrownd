#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 140
#define NUM_MESSAGES 666

// Função para obter a sequência de teclas para um caractere
const char* get_key_sequence(char c) {
    static const char* keys[] = {
        "abc",   // 2
        "def",   // 3
        "ghi",   // 4
        "jkl",   // 5
        "mno",   // 6
        "pqrs",  // 7
        "tuv",   // 8
        "wxyz"   // 9
    };
    static char sequence[16];
    int i;

    if (c == ' ') {
        return "0";
    }
    if (isupper(c)) {
        c = tolower(c);
        sequence[0] = '#';
        sequence[1] = '\0';
    } else {
        sequence[0] = '\0';
    }
    
    for (i = 0; i < 8; ++i) {
        const char *key = keys[i];
        const char key_num = '2' + i;
        const char *pos = strchr(key, c);
        if (pos) {
            int press_count = pos - key + 1;
            int len = strlen(sequence);
            for (int j = 0; j < press_count; ++j) {
                sequence[len + j] = key_num;
            }
            sequence[len + press_count] = '\0';
            return sequence;
        }
    }

    return "";
}

// Função principal para processar as mensagens
int main() {
    int n;
    scanf("%d\n", &n);
    char message[MAX_MESSAGE_LENGTH + 1];

    while (n-- > 0) {
        fgets(message, sizeof(message), stdin);
        int length = strlen(message);
        
        // Remove o caractere de nova linha no final da string
        if (message[length - 1] == '\n') {
            message[length - 1] = '\0';
        }

        char last_key = '\0';
        for (int i = 0; i < length; ++i) {
            char c = message[i];
            const char *seq = get_key_sequence(c);
            
            if (i > 0 && seq[0] != '0' && seq[0] == last_key) {
                putchar('*');
            }
            printf("%s", seq);
            if (seq[0] != '0') {
                last_key = seq[0];
            }
        }
        putchar('\n');
    }

    return 0;
}
