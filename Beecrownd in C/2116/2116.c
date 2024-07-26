#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int maior_primo(int num) {
    for (int i = num; i >= 2; i--) {
        if (is_prime(i)) {
            return i;
        }
    }
    return 0;
}

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    int P1 = maior_primo(N);
    int P2 = maior_primo(M);

    printf("%d\n", P1 * P2);

    return 0;
}