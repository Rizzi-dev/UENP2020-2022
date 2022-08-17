# include <stdio.h>
# include <string.h>
# define MAX 500
//Lista Final - Exercício 1
//Gabriel Rizzi

struct jogos {
    char nome [30];
    char genero [30];
    char modoJogo [20];
    char plataforma [30];
    int ranking ;
};


void cadastrarJogos ( struct jogos *j , int tam ) {
    for (int i =0; i < tam ; i ++) {
        fgets ( j [ i ]. nome , 30 , stdin ) ;
        fgets ( j [ i ]. genero , 30 , stdin ) ;
        fgets ( j [ i ]. modoJogo , 20 , stdin ) ;
        fgets ( j [ i ]. plataforma , 30 , stdin ) ;
        scanf ("%d", & j [ i ]. ranking ) ;
        setbuf ( stdin , 0) ;// limpar buffer do teclado
    }
}


void exibirGenero ( struct jogos j [] , int tam ) {
    int i ;
    char escolha [30];
    printf (" Escolha o genero : ") ;
    setbuf ( stdin , 0) ;
    fgets ( escolha , 30 , stdin ) ;
        for ( i = 0; i < tam ; i ++) {
            if( strcmp ( escolha , j [ i ]. genero ) == 0) {
                printf (" Nome ...........: %s", j [ i ]. nome ) ;
                printf (" Genero .........: %s", j [ i ]. genero ) ;
                printf (" Modo de Jogo ...: %s", j [ i ]. modoJogo ) ;
                printf (" Plataforma .....: %s", j [ i ]. plataforma ) ;
                printf (" Ranking ........: %d\n", j [ i ]. ranking ) ;
                printf ("\n") ;
            }
    }

}


void exibirRanking ( struct jogos j [] , int tam ) {
    int i , escolha ;
    printf (" Escolha o ranking entre 1 e 5: ") ;
    scanf ("%d", & escolha ) ;
    for ( i = 0; i < tam ; i ++) {
        if( j [ i ]. ranking == escolha ) {
            printf (" Nome ...........: %s", j [ i ]. nome ) ;
            printf (" Genero .........: %s", j [ i ]. genero ) ;
            printf (" Modo de Jogo ...: %s", j [ i ]. modoJogo ) ;
            printf (" Plataforma .....: %s", j [ i ]. plataforma ) ;
            printf (" Ranking ........: %d\n", j [ i ]. ranking ) ;
            printf ("\n") ;
        }
    }
}


void exibirFavorito ( struct jogos j [] , int tam ) {
    int i ;
    char escolha [30];
    printf (" Escolha o nome do jogo : ") ;
    setbuf ( stdin , 0) ;
    fgets ( escolha , 30 , stdin ) ;
    for ( i = 0; i < tam ; i ++) {
    if ( j [ i ]. ranking == 5) {
    if ( strcmp ( escolha , j [ i ]. nome ) == 0)
    printf ("Eh um dos favoritos !!!\ n") ;
    else
    printf (" Nao eh um dos favoritos !!!\ n") ;
        }
    }
 }



int main () {
    FILE *file;
    file = fopen("jogos.txt", "w");
        if (file == NULL) {
            exit (1);
    }
    int i , op , jogos =0;
    struct jogos j [ MAX ];
    do {
        printf (" Escolha uma opcao :\n") ;
        printf (" (1) Cadastrar Jogos \n") ;
        printf (" (2) Exibir por Genero \n") ;
        printf (" (3) Exibir por Ranking \n") ;
        printf (" (4) Exibir Favorito \n") ;
        printf (" (0) Sair \n") ;

        scanf ("%d", & op ) ;
        setbuf ( stdin , 0) ;
        switch ( op ) {
        case 0: break ;
        case 1:
        cadastrarJogos (j , MAX ) ;
        break ;
        case 2:
        exibirGenero (j , MAX ) ;
        break ;
        case 3:
        exibirRanking (j , MAX ) ;
        break ;
        case 4:
        exibirFavorito (j , MAX ) ;
        break ;

        fwrite(&jogos, sizeof(jogos), 1, file);
                    }


            }

            while ( op != 0) ;
            return 0;
}
