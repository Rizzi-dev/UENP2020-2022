#include <stdio.h>
//Lista Recursão - Exercício 6
//Gabriel Rizzi

int maxDivCom(int a, int b) {
	if( b == 0) {
		return a;
	}
	maxDivCom(b, a % b);