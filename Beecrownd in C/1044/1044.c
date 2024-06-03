#include <stdio.h>
 
int main() {
int A,B;
scanf("%d %d", &A, &B);
(A%B == 0 || B%A == 0) ? printf("Sao Multiplos\n") :  printf("Nao sao Multiplos\n"); 
 
    return 0;
}