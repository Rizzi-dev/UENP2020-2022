#include <stdio.h>
#include <stdlib.h>
int main()
{
    int alunos, matricula[30], percentual;
    float notas[30], notas2[20], media=0, soma=0, soma2=0;
    float n1;
    int count=0, count2=0;
    int i, x;
    for(int i=0; i<3;i++)
    {
    printf("Digite o numero da matricula:\n");
    scanf("%d", &matricula[i]);
    }
    for(i=0; i<3; i++)
    {
    for(x=0; x<2; x++)
    {
        printf("Digite a nota da questao %d:", x+1);
        scanf("%f", &notas2[x]);
        soma=soma+notas2[x];
    }
    soma2=soma+notas2[x];
    n1=soma2/3;
    }
    media=soma/3;
    if(media>=7.0)
    {
        count++;
    }
    else
    {
        count2++;
    }
    percentual=count*100/30;
    for(i=0; i<3; i++)
    {
       printf("Matricula: %d, Nota: %.1f\n", matricula[i], n1);
    }
    printf("Media da turma: %.1f\n", media);
    printf("Percentual de aprovacao: %d\n", percentual);

    return 0;
}
