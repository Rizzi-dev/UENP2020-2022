#include <stdio.h>

int main() {
    int num = 0;
    int l,c;
    int matriz[3][3];

    do {
        for(l = 0; l < 3; l++) {
            for(c = 0; c < 3; c++) {
                num = -1;
                scanf("%d",&num);
                if(num == -1)
                    break;
                matriz[l][c] = num;
            }
        }
        if( num != -1){
            if(matriz[1][0] + matriz[2][0] + matriz[2][1] == 0)
                printf("Por baixo\n");
            else if(matriz[0][1] + matriz[0][2] + matriz[1][2] == 0)
                printf("Por cima\n");
            else
                printf("Nao pode atravessar\n");
        }
    }
    while(num!=-1);
    return 0;
}
