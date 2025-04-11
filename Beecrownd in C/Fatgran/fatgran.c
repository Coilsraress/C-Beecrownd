#include <stdio.h>

void multiplicaVetor(int vetor[], int x, int parada){
    int carry = 0;
    for(int i=9999; i>= parada; i--){
        vetor[i] = x*vetor[i] + carry;
        carry = vetor[i]/10;
        vetor[i] = vetor[i] % 10;
    }
while (carry > 0) {
    parada--;
    vetor[parada] = carry % 10;
    carry = carry / 10;
}
}



int main()
{
	int n;
	scanf("%d", &n);

	int parada;
    
	int vetor[10000];

	for (int i=0; i<10000; i++) {
		vetor[i]=0;
	}

	vetor [9999] = 1;


	for (int x = n; x>1; x--) {
		for(int i=0; i<10000; i++) {
            if(vetor[i]!=0){
                parada = i;
                break;
            }
		}
		multiplicaVetor(vetor, x, parada);
	}

		for(int i=0; i<10000; i++) {
            if(vetor[i]!=0){
                parada = i;
                break;
            }
		}
		
printf("Resultado: ");
for (int i = parada; i < 10000; i++) {
    printf("%d", vetor[i]);
}
printf("\n");

	return 0;
}