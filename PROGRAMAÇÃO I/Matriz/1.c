#include <stdio.h>

#define TAM 4

void lerMatriz(int tam, int matriz[tam][tam]) {
    int i, j;
    for (i = 0; i < tam; i++)
        for (j = 0; j < tam; j++)
            scanf("%d", &matriz[j][i]);
}

void multiplicaDiagonalMatriz(int tam, int matriz[tam][tam], int multiplicador) {
    int i;
    for (i = 0; i < tam; i++)
        matriz[i][i] *= multiplicador;
}

void exibirMatriz(int tam, int matriz[tam][tam]) {
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
}

int main() {
    int k;
    scanf("%d", &k); //le constante k
    int matriz[TAM][TAM];
    while (k != 0) {
        lerMatriz(TAM, matriz);
        multiplicaDiagonalMatriz(TAM, matriz, k);
        exibirMatriz(TAM, matriz);
        scanf("%d", &k);
    }
    return 0;
}
