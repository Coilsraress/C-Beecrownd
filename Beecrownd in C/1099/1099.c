#include <stdio.h>
#include "C:\Users\carlo\Desktop\Study Prog\Beecrownd in C\functions\functions.h"
int main() {
 
int n, x, y, acu=0;
scanf("%d",&n);
    for(int i=0; i<n; i++){
    scanf("%d %d", &x, &y);
    acu=somaImpares(x, y);
    printf("%d\n", acu);
    }

    return 0;
}