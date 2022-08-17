#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500
//Exercícios Structs


struct bancoDados
    {
   int idade;
   char nome[50];
   char sexo;
   char estadoCivil;
   int amigos;
   int fotos;
    };

void inserirUsuario (struct bancoDados *usuarios, int qtd)
    {
   for(int i = 0; i < qtd; i++)
        {
            scanf("%d", &usuarios[i].idade);
            getchar();
            fgets(usuarios[i].nome, 50, stdin);
            scanf("%c",&usuarios[i].sexo);
            getchar();
            scanf("%c",&usuarios[i].estadoCivil);
            scanf("%d",&usuarios[i].amigos);
            scanf("%d",&usuarios[i].fotos);
        }
    }

void exibirUsuario (struct bancoDados usuarios)
        {
                printf("Idade...............: %d\n", usuarios.idade);
                printf("Nome................: %s", usuarios.nome);
                printf("Sexo................: %c\n", usuarios.sexo);
                printf("Estado Civil........: %c\n", usuarios.estadoCivil);
                printf("Numero amigos.......: %d\n", usuarios.amigos);
                printf("Numero fotos........: %d\n", usuarios.fotos);
                printf("\n");
        }

int main()
    {
   struct bancoDados usuarios[MAX];
   int qtdeUsuarios,i;
   scanf("%d",&qtdeUsuarios);
   inserirUsuario(usuarios, qtdeUsuarios);

   for(i=0; i < qtdeUsuarios; i++)
      exibirUsuario(usuarios[i]);
  return 0;
    }
