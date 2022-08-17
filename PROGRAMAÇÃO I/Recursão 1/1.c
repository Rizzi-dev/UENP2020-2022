#include <stdio.h>
//Lista de Exercícios Recursão - Ex 1
//Gabriel Rizzi

int somaRecursiva(int *array, int i, int tam) {
    if (i == tam-1)
        return array[i];
    else 
        return array[i] + somaRecursiva(array, i+1, tam);
}

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    printf("Soma dos elementos: %d\n", somaRecursiva(array, 0, 10));
    return 0;
}
