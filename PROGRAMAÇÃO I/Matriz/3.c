#include <stdio.h>

int main() {
    int n;
    int i,j,k;
    scanf("%d", &n); //le dimensao dos dois mapas
    int mapa1[n][n], mapa2[n][n], mapa3[n][n];

    //le mapa 1
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
            scanf("%d", &mapa1[i][j]);
    }

    //le mapa 2
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
            scanf("%d", &mapa2[i][j]);
    }

    //qtde de chuva acumulada
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
            mapa3[i][j] = mapa1[i][j]+mapa2[i][j];
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%d ", mapa3[i][j]);
        printf("\n");
    }
    return 0;
}
