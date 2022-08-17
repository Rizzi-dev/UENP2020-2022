#include <stdio.h>

int main() {
	int n, i, j;
	int soma_diagp = 0, soma_diags = 0;
	scanf("%d", &n); //le tamanho da matriz nxn
	int matriz[n][n];

	//le matriz nxn
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			scanf("%d", &matriz[i][j]);
	}

	//soma linhas
	int soma_linhas[n];
	for (i = 0; i < n; i++) {
		soma_linhas[i] = 0;
		for (j = 0; j < n; j++) {
			soma_linhas[i] += matriz[i][j];
		}
	}

	//soma colunas
	int soma_colunas[n];
	for (j = 0; j < n; j++) {
		soma_colunas[j] = 0;
		for (i = 0; i < n; i++)
			soma_colunas[j] += matriz[i][j];
	}

	//soma diagonal principal
	for (i = 0; i < n; i++)
		soma_diagp += matriz[i][i];

	//soma diagonal secund�ria
	for (i = 0; i < n; i++)
		soma_diags += matriz[i][n-i-1];

	//testa linhas e colunas
	int testa_linhas = 1, testa_colunas = 1;
	for (i = 1; i <  n; i++) {
		if (soma_linhas[i] != soma_linhas[i-1]) {
			testa_linhas = 0;
			break;
		} else if (soma_colunas[i] != soma_colunas[i-1]) {
			testa_colunas = 0;
			break;
		}
	}

	//verifica se eh quadrado magico
	if (testa_linhas && testa_colunas && soma_diagp == soma_diags && soma_diagp == soma_linhas[0])
		printf("%d", soma_linhas[0]);
	else
		printf("-1");

	return 0;
}
