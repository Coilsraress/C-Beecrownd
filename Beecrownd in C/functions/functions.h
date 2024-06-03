#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int ePar(int x){
    if(x%2==0)
    return 1;
    else
    return 0;
}
int somaImpares(int x, int y){
int acu = 0;
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
    return acu;
}

#endif 