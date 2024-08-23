#include <stdio.h>
#include <string.h>

int divi(int A, int B){
    if (A < B) {
    return 0;
    }
    else {
        return 1 + divi(A - B, B);
    }
}

int main() {

int A;
scanf("%d", &A);
int B;
scanf("%d", &B);

int res = divi(A,B);
printf("%d/%d = %d\n", A, B, res);

    return 0;
}