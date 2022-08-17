#include <stdio.h>
#include <stdlib.h>
//EXERCÍCIO 2 - ALOCAÇÃO DINAMICA
//Gabriel Rizzi

//alocar matriz
int** alocaMatriz(int l, int c)
	{ int **matriz, i;
	  matriz = (int **) malloc (l * sizeof(int *));
		if (matriz == NULL)
			exit(1);
		for (i=0; i<l; i++)
		 { matriz[i] = (int *) malloc (c * sizeof(int));
			if (matriz == NULL)
				exit(1);
		 }
	}
	
int** desalocaMatriz(int **matriz, int l)
	{ if (matriz != NULL)
		{ for (int i=0; i<l; i++)
			{ if (matriz[i] != NULL)
				  free(matriz[i]);
			}
		}
	  free(matriz);
	  return NULL;
	}
	
int** somaMatriz(int **mat1, int **mat2, int lin, int col)
	{ int** soma;
	  int i, j;
	  
	  soma = alocaMatriz(lin, col);
	  
	  for (i=0; i<lin; i++)
		{ for (j=0; j<col; j++)
			{ soma[i][j] = mat1[i][j] + mat2[i][j];
			}
		}
	  return soma;
	}
	
int main()
	{ int **m1, **m2, **soma;
	  int i, j, l, c;
	  
	  scanf("%d %d", &l, &c);
	  m1 = alocaMatriz(l,c);
	  m2 = alocaMatriz(l,c);
	  
	  printf("Lendo matriz 1...\n");
	  for (i=0; i<l, i++)
		{ for (j=0; j<c; j++)
			{ scanf("%d", &m1[i][j]);
			}
		}
		
		printf("Lendo matriz 2...\n");
	  for (i=0; i<l, i++)
		{ for (j=0; j<c; j++)
			{ scanf("%d", &m2[i][j]);
			}
		}
		
		soma = somaMatriz(m1, m2, l, c);
		printf("Soma das matrizes...\n");
		for (i=0; i<l, i++)	
			{for j=0; j<c, j++)