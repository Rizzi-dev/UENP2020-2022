#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Avaliação III - Exercício 1 (B)
//Gabriel Rizzi

struct voo {
   int numVoo;
   int totalLugares;
   int reserva;
};

int locate(int *num) {
    struct voo voos;
    FILE *file;

    file = fopen("Voos.rec", "rb");
    if (file == NULL) {
        exit(1);
    }

    while(fread(&voos, sizeof(voos), 1, file) == 1) {
        if (voos.numVoo == num) {
            printf("Numero do voo: %i", voos.numVoo);
            printf("Total de lugares: %i", voos.totalLugares);
            printf("Lugares reservados: %i", voos.reserva);
        }
    }
}

int main()
{
    FILE *file;
    struct voo voos;
    int *num;

    file = fopen("Voos.rec", "rb");
    if (file == NULL) {
        exit(1);
    }

    printf("\n----------= BUSCAR VOOS =----------\n");
    printf("Digite o numero do voo a ser encontrado: ");
    scanf("%i", num);

    locate(*num);

    return 0;
}
