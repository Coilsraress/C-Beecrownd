#include <stdio.h>
 
int main() {
int n;
scanf("%d", &n);
while (n)
{
    for(int i=1; i<=n; i++){
        printf("%d", i);
        (i!=n) ? printf(" ") : printf("\n");
    }
scanf("%d", &n);
}

    return 0;
}