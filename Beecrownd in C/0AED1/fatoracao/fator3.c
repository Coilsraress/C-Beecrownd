#include <stdio.h>

int main() {
	int vetor[30] = {0};
	int n, parada;
	scanf ("%d", &n);
	vetor[0] = n;

	while(1) {


		for(int i=0; i<30; i++) {
			if(vetor[i]==0) {
				parada = i;
				break;
			}
		}
		for(int i=0; i<parada; i++) {
			printf("%d", vetor[i]);
			if(i==parada-1) {
				continue;
			} else {
				printf(" + ");
			}
		}
		printf("\n");

		for(int i = 29; i>=0; i--) {
			if (vetor[i] > 1) {
				vetor[i]--;
				int sobra = 0;

				for (int j = i + 1; j < 30 && vetor[j] > 0; j++) {
					sobra += vetor[j];
					vetor[j] = 0;
				}

				sobra++;

				int j = i + 1;
				while (sobra >= vetor[i]) {
					vetor[j] = vetor[i];
					sobra -= vetor[i];
					j++;
				}

				if (sobra > 0) {
					vetor[j] = sobra;
					j++;
				}

				break;
			}
		}

		if (vetor[0] == 1) {
			break;
		}
	}

	for(int i=0; i<30; i++) {
		if(vetor[i]==0) {
			parada = i;
			break;
		}
	}
	for(int i=0; i<parada; i++) {
		printf("%d", vetor[i]);
		if(i==parada-1) {
			continue;
		} else {
			printf(" + ");
		}
	}
	printf("\n");

	return 0;
}
