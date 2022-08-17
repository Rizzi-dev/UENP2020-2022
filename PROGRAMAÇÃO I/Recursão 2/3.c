#include <stdio.h>
//Lista Recursão - Exercício 3
//Gabriel Rizzi

void binario(int n) {
	int nBits = 1;
	int m = n;
	while(m > 1) { 
		nBits++;
		m /= 2;
	}

	int * interna(int n, int i, int * vet) {
		if(n < 2) {
			vet[i] = n;
			return vet;
		}
		vet[i] = (n % 2);
		return interna(n / 2, i + 1, vet);
	}

	int i = 0;
	int v[nBits];
	int * vetor = interna(n, i, v);

	int j;
	for(j = nBits - 1; j >= 0; j--) {
		printf("%d",vetor[j]);
	}
}

