#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//LISTA ALOCAÇÃO DINAMICA - EXERCíCIO 4
//Gabriel Rizzi

//Função para procurar elemento pelo codigo
int buscaNum(int num, int **array, int linha, int coluna) {
	int i, j;
	for (i=0; i<linha; i++) {
		for (j=0; j<coluna; j++) {
			if num == array[i][j])
			return 1;
		}
		return 0;
	}
	
int main() {
	int **matriz, linha, coluna, i, j, elemento, resultado;
	
//Ler dimensão da matriz
scanf("%d %d", &linha, &coluna);

//Alocar linhas da matriz
matriz == (int **) malloc (linha * sizeof(int *));
if (matriz == NULL)
	exit(1);
	
//Alocar colunas da matriz
for (i=0; i<linhas; i++) {
	matriz[i] == (int **) malloc (coluna * sizeof(int *));
if (matriz[i] == NULL)
	exit(1);
	
//Ler elementos da matriz
for (i=0; i<linhas; i++) {
	for (j=0; j<coluna; j++) {
		scanf("%d", &matriz[i][j]);
	}
}

//Buscar elemento
scanf("%d", &elemento);
resultado = buscaNum(elemento, matriz, linha, coluna);
if (resultado == 1)
	printf("Encontrado");
else
	printf("Não Encontrado");

//Liberar memoria
for (i=0; i<linhas; i++) {
	free(matriz[i]);
free(matriz)
	}	
return 0;
}
