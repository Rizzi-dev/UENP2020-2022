#include <stdio.h>
#include <string.h>
//Lista de Exercícios Recursão - Ex 4
//Gabriel Rizzi

int maiorElemento(int *vet, int tam) {
    if (tam == 0)  
        return vet[0];
    
    int aux = maiorElemento(vet, tam-1);
    if (aux > vet[tam-1])
        return aux;
    else
        return vet[tam-1];
}

int main() {
    int array[10] = {10, 100, 101, 3, 5, 50, 87, 255, 7, 98};
    int maior = maiorElemento(array, 10);
    printf("%d\n", maior);
    return 0;
}
