#include <stdio.h>

int main(){
    int N;
    printf("Digite um numero: ");
    scanf("%i", &N);
    if (N % 2==0 && N > 0){
            printf("POSITIVO PAR");
        }
    else if (N % 2==1 && N > 0){
            printf("POSITIVO IMPAR");
        }
    else if (N % 2==0 && N < 0){
            printf("NEGATIVO PAR");
        }
    else if (N % 2!=0 && N < 0){
            printf("NEGATIVO IMPAR");
        }
    else if (N == 0){
            printf("NULO");
        }
	return 0;
}
