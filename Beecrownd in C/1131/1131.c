#include <stdio.h>
 
int main() {
 
int x, y, a=1;
int gremio=0, inter=0, empates=0, grenais=1;

while(1){
    scanf("%d %d", &x, &y);
    (x>y) ? inter++ : gremio++;
    (x==y) ? empates++ : y;
    if(a==1){
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &a);
    if(a==2){
    break;
    }
    grenais++;
    }

}
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    (inter>gremio) ? printf("Inter venceu mais\n"): printf("Gremio venceu mais\n");


    return 0;
}