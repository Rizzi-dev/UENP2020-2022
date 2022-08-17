#include <stdio.h>
#include <stdlib.h>
//EXERCÍCIO 1 - ALOCAÇÃO DINAMICA
//Gabriel Rizzi

int main()
	{ int *prog1, *prog2;
	  int i, j, t1, t2;
	  
	  scanf("%d"), &t1);
	  
	  prog1 = (int *) malloc (t1 * sizeof(int));
		if (prog1 == NULL)
		for (i=0; i<t1; i++)
			scanf("%d", &prog1[i]);
			
			