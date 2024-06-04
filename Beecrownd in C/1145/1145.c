#include <stdio.h>
 
int main() {
int x, y;
scanf("%d %d", &x, &y);
for (int i=1; i<=y; i++){
int c=0;
    printf("%d", i);
    if(i%x==0){
    printf("\n");
    }
    else if (i==y)
    printf("\n");   
    else
    printf(" ");
}

    return 0;
}