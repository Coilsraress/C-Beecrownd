#include <stdio.h>

int main(){
int a = 7, *pa = &a;
double b = 13.7, *pb = &b;
char c = 'A', *pc = &c;

printf ("%d %.2lf %c\n", a, b, c);
*pa = 12;
*pb = 15.95;
*pc = 'C';

printf ("%d %.2lf %c\n", a, b, c);

    return 0;
}