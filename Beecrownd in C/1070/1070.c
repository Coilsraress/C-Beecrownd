#include <stdio.h>
 
int main() {
 
int num;
scanf("%d", &num);
int j=num;
for (int i=0; i<12; i++){
    if(j%2!=0)
    printf("%d\n", j);
    j++;
}
    return 0;
}