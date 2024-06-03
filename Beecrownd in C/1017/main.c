#include <stdio.h>
 
int main() {
int a,b;
scanf("%d %d", &a, &b);
float c = ((float)(a*b) / 12);
printf("%.3f\n", c);

return 0;
}