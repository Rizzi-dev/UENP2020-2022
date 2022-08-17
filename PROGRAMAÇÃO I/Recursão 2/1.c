#include <stdio.h>
//Lista Recursão - Exercício 1
//Gabriel Rizzi

int retSeqParDec(int n) {
	if(n == 0) {
		printf("%d ", 0);
		return 0;
	}
	if(n % 2 == 0) {
		printf("%d ", n);
	}
	retSeqParDec(n - 1);
}
int retSeqParDecSig(int n) {
	if(n < 0) {
		return -1 * retSeqParDec(n);
	}
	return retSeqParDec(n);
}