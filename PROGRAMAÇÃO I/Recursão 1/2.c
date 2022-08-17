#include <stdio.h>
//Lista de Exercícios Recursão - Ex 2
//Gabriel Rizzi

int somaRecursiva(int *array, int tam) {
    if (tam == 0)
        return 0;
    else 
        return array[tam-1] + somaRecursiva(array, tam-1);
}

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Soma dos elementos: %d\n", somaRecursiva(array, 10));
    return 0;
}
