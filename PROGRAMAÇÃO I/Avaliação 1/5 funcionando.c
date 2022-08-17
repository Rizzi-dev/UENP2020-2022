#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

typedef struct lista
{
    float c, a, r, l, d;
    float quantidade_gasta, total;
}
Lista;

main()
{
    float c, a, r, l, d;
    float quantidade_gasta, total;
    setlocale(LC_ALL,"");
    Lista *primeiro= NULL;
    char opcao;
    int segundo = 30;
    while(opcao!='s')
    {


        printf("\t\t\t     ORÇAMENTO DOMÉSTICO!");

printf("\n");
        printf("    <1>  Atualizar Orcamento          \n");
        printf("    <2>  Visualizar Orcamento Atual   \n");
        printf("    <3>  Encerrar Sessão              \n");

        fflush(stdin);
        opcao= getch();


        switch(opcao)
        {
        case '1':
            fflush(stdin);
            system("cls");
            printf("    <1>  Comida             \n");
            scanf("%f", c);
            printf("    <2>  Aluguel            \n");
            scanf("%f", a);
            printf("    <3>  Roupa              \n");
            scanf("%f", r);
            printf("    <4>  Agua/Luz           \n");
            scanf("%f", l);
            printf("    <5>  Divertimento       \n");
            scanf("%f", d);

            getch();
            system("cls");
            break;

        case '2':
            system ("cls");
            printf("\t\t\t     Orcamento Atual");
            printf("\t\t\t      \n");

            total = (c+a+r+l+d);

            printf ("%f", total);
            getch();
            system("cls");
            break;


        case '3':
            opcao='s';
            break;

        default:
            system("cls");
            break;
        }
    }
}

