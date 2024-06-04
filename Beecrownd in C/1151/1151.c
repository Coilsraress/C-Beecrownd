#include <stdio.h>
 
int main() {
int x, fib=0, fib1=1, t;
scanf("%d", &x);
    printf("%d ", fib);
    printf("%d ", fib1);
    fib+=fib1;
for(int i=2; i<x; i++){
    printf("%d", fib);
    t=fib;
    fib+=fib1;
    fib1=t;
    if(i<x-1)
    printf(" ");
}
printf("\n");

    return 0;
}