#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2
//Exercícios Structs

//A
struct jogos
{
    char nome[50];
    char genero[50];
    char modoJogo[30];
    char plataforma[30];
    int ranking;
};

 //B
 void cadastroJogo (struct jogos j[], int tam)
 {
     for (int i=0; i<tam; i++)
     {
         scanf("%s", &j[i].nome);
         scanf("%s", &j[i].genero);
         scanf("%s", &j[i].modoJogo);
         scanf("%s", &j[i].plataforma);
         scanf("%d", &j[i].ranking);
     }
 }

  //C
  void exGender (struct jogos j[], int tam)
  {
      int i;
      char escolha[30];

      printf("Escolha o genero: ");
      scanf("%s", &escolha);
      for (i=0; i<tam; i++)
      {
          if (strcmp(escolha, j[i].genero) == 0)
          {
              printf("Nome.............................%s\n, j[i].nome");
              printf("Genero...........................%s\n, j[i].genero");
              printf("Modo de Jogo.....................%s\n, j[i].modoJogo");
              printf("Plataforma.......................%s\n, j[i].plataforma");
              printf("Ranking..........................%d\n, j[i].ranking");

          }
      }
  }

   //D
   void exibirRank(struct jogos j[], int tam)
   {
     int i;
     int escolha;
     printf("Escolha um ranking de 1 a 5: ");
     scanf("%d", &escolha);
     for (i=0; i<tam; i++)
     {
         if (j[i].ranking == escolha)
         {
              printf("Nome.............................%s\n, j[i].nome");
              printf("Genero...........................%s\n, j[i].genero");
              printf("Modo de Jogo.....................%s\n, j[i].modoJogo");
              printf("Plataforma.......................%s\n, j[i].plataforma");
              printf("Ranking..........................%d\n, j[i].ranking");
         }
     }
   }


   //E
    void exibirFav(struct jogos j[], int tam) {
        int i;
        char escolha[50];
        printf("Escolha o nome do jogo: ");
        scanf("%s", &escolha);

        for (i=0; i<tam; i++) {
                if (j[i].ranking == 5) {
                    if (strcmp(escolha, j[i].nome) == 0) {
                        printf("Favorito!\n");
                    }
                    else {
                        printf("Não é favorito!\n");
                    }
                }



        }
    }






   int main()
   {
       int i;
       int op;
       struct jogos j[MAX];

        do {
            printf("Escolha uma opção:  \n");
            printf("1 ---- CADASTRAR ---- \n");
            printf("2 ---- GENERO ---- \n");
            printf("3 ---- RANKING ---- \n");
            printf("4 ---- FAVORITO ---- \n");
            printf("0 ---- SAIR ---- \n");
            scanf("%d", op);

            switch (op){
            case 0: break;
            case 1:
                cadastroJogo(j,MAX);
                break;
            case 2:
                exGender(j,MAX);
                break;
            case 3:
                exibirRank(j,MAX);
                break;
            case 4:
                exibirFav(j,MAX);
                break;
             }
        }
    }
