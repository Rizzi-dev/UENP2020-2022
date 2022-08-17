#include <stdio.h>

int main(){
    int  A, B, C, menor;
	printf("Digite o primeiro numero: ");
    scanf("%i", &A);
	printf("Digite o segundo numero: ");
    scanf("%i", &B);
	printf("Digite o terceiro numero: ");
	scanf("%i", &C);
	if ((A<B) && (A<C)){
        printf ("Menor e %i ", A);
	}
	else{
        if ((B<A) && (B<C))
            printf("Menor e %i", B);
        else
            printf("Menor e %i", C);
	}
}
