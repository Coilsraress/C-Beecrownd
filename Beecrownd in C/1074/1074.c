#include <stdio.h>
#include "C:\Users\carlo\Desktop\Study Prog\Beecrownd in C\functions\functions.h"

int main() {
int n, x;
scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        if(ePar(x)){
            if(x>0)
            printf("EVEN POSITIVE\n");
            else if(x<0)
            printf("EVEN NEGATIVE\n");
            else if(x==0)
            printf("NULL\n");
        }
        else
        {
            if(x>0)
            printf("ODD POSITIVE\n");
            else if(x<0)
            printf("ODD NEGATIVE\n");
        }
        
    }
 
    return 0;
}