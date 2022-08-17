#include <stdio.h>
//Lista Recursão - Exercício 5
//Gabriel Rizzi

float somaSerie2(int n) {
	float interna(int n, float soma) {
		if(n == 0) {
			return soma;
		}
		soma += ((1.0 + pow(n, 2.0)) / n);
		return interna(n - 1, soma);
	}
	float soma = 0.0;
	return interna(n, soma);
}

void exibeSomaSerie2(int n) {
	int * interna(int n, int i, int j, int v[]) {
		if(i == n) return v;
		v[i] = (int)((1.0 + pow(j, 2.0)) / j);
		printf("%d", v[i]);
		i += 1;
		v[i] = 0x20;
		printf("%c", v[i]);
		return interna(n, i + 1, j + 1, v);
	}
	int i = 0;
	int j = 1;
	int v[2 * n];
	interna(2 * n, i, j, v);
}