#include <stdio.h>
 
int main() {
int x, fat=1;
scanf("%d", &x);
    for(int i=1; i<=x; i++){
    fat*=i;
    }
printf("%d\n", fat);

    return 0;
}