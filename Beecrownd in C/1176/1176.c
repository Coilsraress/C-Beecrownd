#include <stdio.h>

int main() {
    long long int fib[62], n=0, x=0;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    scanf("%lld", &x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &n);
        printf("Fib(%lld) = %lld\n", n, fib[n]);
    }
    return 0;
}
