#include <stdio.h>
 
int main() {
int x, y, acu=0;
scanf("%d %d", &x, &y);
while (x>0&&y>0)
{
    if(y<x){
    for (int i=y; i!=x+1; i++){
    printf("%d ", i);
    acu+=i;
    }
    printf("Sum=%d\n", acu);
    }
else{
    for (int i=x; i!=y+1; i++){
    printf("%d ", i);
    acu+=i;
    }
    printf("Sum=%d\n", acu);
}
    scanf("%d %d", &x, &y);
    acu=0;
}

 
    return 0;
}