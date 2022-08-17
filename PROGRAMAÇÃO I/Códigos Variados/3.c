#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("\nDigite a primeira medida: ");
    scanf("%i", &n1);
    printf("Digite a segunda medida: ");
    scanf("%i", &n2);
    printf("Digite a terceira medida: ");
    scanf("%i", &n3);
    if ((n1 <= 0) || (n2 <= 0) || (n3 <= 0)){
        printf("------------- ERRO ------------- ");
        printf("\nVOCE DIGITOU UM NUMERO INVALIDO\n");
        printf("-------------------------------- ");
    }
    else if ((n1 == n2) && (n2 == n3)){
        printf("triangulo equilatero\n");
    }
    else if ((n1 == n2) || (n1 == n3) || (n2 == n3)){
        printf("triangulo isoceles\n");
    }
    else if ((n1 != n2) || (n1 != n3) || (n2 != n3)){
        printf("triangulo escaleno\n");
    }
	return 0;
}
