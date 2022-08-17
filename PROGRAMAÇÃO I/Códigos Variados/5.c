#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);
    printf("Digite o segundo numero: ");
    scanf("%i", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &n3);
    if (n1 == n2 && n2 == n3){
        printf("\nTodos os numeros são iguais\n");
    }
    if (n1 > n2 && n1 > n3){
        if (n2 > n3)
            printf("%i, %i, %i\n",n1, n2, n3);
        else
            printf("%i, %i, %i\n",n1, n2, n3);
    }
    if (n2 > n1 && n2 > n3){
        if (n1 > n3)
            printf("%i, %i, %i\n", n1, n2, n3);
        else
            printf("%i, %i, %i\n", n1, n2, n3);
    }
    if (n3 > n1 && n3 > n2){
        if (n1 > n2)
            printf("%i, %i, %i\n", n1, n2, n3);
        else
            printf("%i, %i, %i\n", n1, n2, n3);
    }
	return 0;
}
