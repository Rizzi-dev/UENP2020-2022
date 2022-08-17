#include <stdio.h>
//Lista Recursão - Exercício 2
//Gabriel Rizzi

int retSeqPar(int n) {
	if(n < 0) {
		return 0;
	}
	2 + retSeqPar(n - 2);
	printf("%d ", n);
}

int retSeqParSig(int n) {
	if(n < 0) {
		return -1 * retSeqPar(n);
	}
	return retSeqPar(n);
}