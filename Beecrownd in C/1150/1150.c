#include <stdio.h>
 
int main() {
 
int x, z, soma=0, c=1;
scanf("%d %d", &x, &z);
while(x>=z){
    scanf("%d", &z);
}
soma+= x+(x+1);
x++;
while(soma<z){
soma+= x+1;
c++;
x++;
}
c++;
printf("%d\n", c);
    return 0;
}