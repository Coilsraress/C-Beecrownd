#include <stdio.h>
 
int main() {
int x,y;
scanf("%d %d", &x, &y);
if (y>x){
    for(int i=x; i<y; i++){
    if(i%5==2||i%5==3)
    printf("%d\n", i);
    }
}
else{
    for(int i=y+1; i<x; i++){
    if(i%5==2||i%5==3)
    printf("%d\n", i);
    }
}
    return 0;
}