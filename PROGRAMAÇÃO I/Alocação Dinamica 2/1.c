#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//LISTA ALOCAÇÃO DINAMICA - EXERCíCIO 1
//Gabriel Rizzi

int main() {
	int **matriz, *vet, l, c;
	int i, j, k;
	
	//Ler dimensões
	scanf("%d %d", &l, &c);
	
	//Alocar linhas
	matriz = (int **) malloc (l *sizeof(int *));
	if (matriz == NULL) {
							printf("Erro de alocação de memoria!\n");
							exit(1);
						}
	//Alocar colunas
	for (i==0; i<l; i++){
							matriz[i] = (int *) malloc (c * sizeof(int));
							if (matriz[i] == NULL){
													printf("Erro de alocação de memoria!\n");
													exit(1);
												  }
	                    }
						
	//Alocar vetor
	vet = (int *) malloc (10 * sizeof(int));
	if (vet == NULL) {
							printf("Erro de alocação de memoria!\n");
							exit(1);
				     }
					 
	//Alocar matriz
	k = 0;
	for (i=0; i<l; i++) {
		for (j=0; j<c; j++) {
			scanf("%d", &matriz[i][j]);
			if (matriz[i][j] % 7 == 0 && matriz[i][j] % 2 != 0) {
				vet[k] = matriz[i][j];
				k++;
			}
		}
	}
	
	//Imprimir vetor resultante
	for (i=0; i<k; i++)
		printf("%d", vet[i]);
		
	//Liberar memoria
	for (i=0; i<l; i++);
		free(matriz[i]);
		free(matriz);
		free(vet);
		
	return 0;
		
}
