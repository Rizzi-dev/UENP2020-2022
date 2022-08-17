#include <stdio.h>
#include <stdlib.h>
#define MES 12
#define COL 2

int main() {
    int i,j,k=0;
    int vendas[MES][COL];
    double valores[2][2];
    double custos[24], lucros[24];
    double ac1=0,ac2=0,al1=0,al2=0;

    for(i=0; i<MES; i++){
        for(j=0; j<COL; j++)
            scanf("%d", &vendas[i][j]);
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++)
            scanf("%lf", &valores[i][j]);
    }

    for(i=0; i<MES; i++){
        custos[i] = vendas[i][0]*valores[0][0];
        custos[i+12]= vendas[i][1]*valores[1][0];
    }

    for(i=0; i<MES; i++){
        lucros[i] = vendas[i][0]*valores[0][1];
        lucros[i+12]= vendas[i][1]*valores[1][1];
    }

    for(i=0; i<MES; i++)
        printf("Motor[%i], Mes[%i], custo=[%.2lf], lucro=[%.2lf]\n", k, i+1, custos[i], lucros[i]);
    k++;

    for(i=0; i<MES; i++)
        printf("Motor[%i], Mes[%i], custo=[%.2lf], lucro=[%.2lf]\n", k, i+1, custos[i+12], lucros[i+12]);

    for(i=0; i<MES; i++){
        ac1 += custos[i];
        al1 += lucros[i];
        ac2 += custos[i+12];
        al2 += lucros[i+12];
    }

    printf("Motor[0], anual, custo=[%.2lf], lucro=[%.2lf]\n",ac1, al1);
    printf("Motor[1], anual, custo=[%.2lf], lucro=[%.2lf]\n", ac2, al2);
    return 0;
}
