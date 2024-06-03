#include <stdio.h>
 
int main() {
 
int num;
scanf("%d", &num);
for (int i=0; i<=num; i++)
    (i%2==0) ? i: printf("%d\n", i);
 
    return 0;
}