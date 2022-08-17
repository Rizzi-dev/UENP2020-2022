#include <stdio.h>

void lerMatriz(int tam, double array[tam][tam]) {
    int i, j;
    for (i = 0; i < tam; i++)
        for (j = 0; j < tam; j++)
            scanf("%lf", &array[i][j]);
}

void calculaTracoMatiz(int tam, double array1[tam][tam]) {
    int i, j;
    double array2 = 0;

    for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            if (i == j) {
                printf(" (%.2lf) ", array1[i][j]);
                array2 += array1[i][j]++;
            }
        }
        for (j=0;j<tam-1;j++) {
            if (i == j)
                printf("+");
        }
    }
    printf("= %.2lf", array2);
}

int main() {
    int i, j, n;
    scanf("%d", &n); // le dimensoes da matriz
    double array1[n][n],array2 = 0;

    lerMatriz(n, array1);
    printf("tr(A) =");
    calculaTracoMatiz(n, array1);
    return 0;
}
