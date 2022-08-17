#include <stdio.h>
#define MAX 100
#define MASCULINO 'm'
#define FEMININO ’f’
#define AZUL ’a’
#define VERDE ’v’
#define CASTANHO ’c’
#define LOIRO ’l’
#define PRETO ’p’
//Lista Final - Exercício 2
//Gabriel Rizzi


struct habitante {
    int idade ;
    char sexo ;
    char olhos ;
    char cabelos ;
};

struct resposta {
    int maiorIdade ;
    double percentualMulheres ;
};


int lerHabitantes ( struct habitante * h ) {
    scanf ("%d", &h -> idade ) ;
    getchar () ; // ignora o \n
    if (h -> idade != -1) {
    scanf ("%c %c %c" , &h -> sexo , &h -> cabelos , &h -> olhos ) ;
    return 1;
}
    else
    return 0;
}


void encontrarRespostas ( struct habitante * array , int n , struct resposta * r ) {
    int i ;
    int qtdeMulheres = 0;

    r -> maiorIdade = -1;
    for ( i =0; i < n ; ++ i ) {
    if ( array [ i ]. idade > r -> maiorIdade )
    r -> maiorIdade = array [ i ]. idade ;
    if ( array [ i ]. sexo == FEMININO &&
    array [ i ]. idade >= 18 &&
    array [ i ]. idade <=35 && array [ i ]. cabelos == LOIRO &&
    array [ i ]. olhos == VERDE ) {
    qtdeMulheres ++;
    }
}
    r - > percentualMulheres = ( qtdeMulheres / ( double ) n ) * 100;
}

int main () {
    FILE *file;
    file = fopen("populacao.txt", "w");
        if (file == NULL) {
            exit (1);
    }
    int habitantesLidos = 0;
    struct resposta resp ;
    struct habitante habitantes [ MAX ];

    while ( lerHabitantes (& habitantes [ habitantesLidos ]) ) {
    ++ habitantesLidos ;
}

    encontrarRespostas ( habitantes , habitantesLidos , & resp ) ;
    printf (" Mais velho : %d\n", resp . maiorIdade ) ;
    printf (" Mulheres com olhos verdes , loiras com 18 a 35 anos : %.2 lf %%\n",
    resp . percentualMulheres ) ;

    fwrite(&populacao, sizeof(populacao), 1, file);


    return 0;
}
