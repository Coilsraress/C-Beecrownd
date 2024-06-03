#include <stdio.h>

int main() {
 
int n, x, y, acu=0;
scanf("%d",&n);
while(n>0){
    scanf("%d %d", &x, &y);
 if(y-x<0)
    for (int i=x-1; i!=y; i--){
        if(i%2!=0)
        acu+=i;
    }
else
    for (int i=x+1; i!=y; i++){
        if(i%2!=0)
        acu+=i;
    }
    printf("%d\n", acu);
    acu=0;
    n--;
}

    return 0;
}