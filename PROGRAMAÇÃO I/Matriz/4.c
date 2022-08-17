#include <stdio.h>
#define TAM 4

int main()
{
    double a[TAM][TAM];
    int i,j,k;
    double pastel, empada, kibe;
    pastel = empada = kibe = 0;

    //le qtde de ingredientes usados em cada produto
    for(i=0; i<TAM; i++) {
        for(j=0; j<TAM; j++)
            scanf("%lf", &a[i][j]);
    }

    //le preco dos ingredintes para cada produto, calculando seu custo
    for(i=0; i<TAM; i++)
        pastel += a[0][i]*a[3][i];

    for(i=0; i<TAM; i++)
        empada += a[1][i]*a[3][i];

    for(i=0; i<TAM; i++)
        kibe += a[2][i]*a[3][i];

    printf("%.2lf\n%.2lf\n%.2lf\n", pastel, empada, kibe);
    return 0;
}
