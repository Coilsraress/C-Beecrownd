#include <stdio.h>

int main(){
int a = 8, b = 27;

(&a > &b) ? printf("A %d", &a) : printf("B %d", &b);


    return 0;
}