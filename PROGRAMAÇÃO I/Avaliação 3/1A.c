#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Avaliação III - Exercício 1 (A)
//Gabriel Rizzi

struct voo {
   int numVoo;
   int totalLugares;
   int reserva;
};

int main()
{
    FILE *file;
    struct voo voos;
    char continuar = '1';

    file = fopen("Voos.rec", "wb");
    if (file == NULL) {
        exit (1);
    }

    while(continuar == '1') {
    printf("\n----------= CADASTRO DE VOOS =----------\n");
    printf("Digite o numero do voo a ser cadastrado: ");
    scanf("%i", &voos.numVoo);
    printf("\nDigite o total de lugares do respectivo voo: ");
    scanf("%i", &voos.totalLugares);
    printf("\nQuantos lugares ja foram reservados? ");
    scanf("%i", &voos.reserva);
    getchar();

    fwrite(&voos, sizeof(voos), 1, file);

    printf("\nDeseja cadastrar outro voo? (1/0): ");
    scanf(" %c", &continuar);
    getchar();
    }

    fclose(file);
    return 0;
}
