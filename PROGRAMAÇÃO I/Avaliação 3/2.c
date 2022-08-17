#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Avaliação III - Exercício 2
//Gabriel Rizzi

struct pessoa {
    char nome [30];
    char sobrenome [30];
    int idade ;
    float altura ;
    float peso ;
};

int main(){
    int i;
    int continuar = 1;
    struct pessoa pessoas;

    FILE *file = fopen ("pessoa.txt", "w");

    if(file == NULL){
         exit(1);
    }

    while (continuar != 0){
        printf("\n----------= CADASTRO DE PESSOAS =----------\n");
        printf("Digite o nome da pessoa: ");
        gets(pessoas.nome);

        printf("Digite o sobrenome da pessoa: ");
        gets(pessoas.sobrenome);

        printf("Insira a idade: ");
        scanf("%d", &pessoas.idade);

        printf("Insira a altura:  ");
        scanf("%f", &pessoas.altura);

        printf("Insira o peso: ");
        scanf("%f", &pessoas.peso);
        getchar();

        fwrite(&pessoas, sizeof(pessoas), 1, file);

        printf("Deseja adicionar outras pessoas? (1/0): ");
        scanf("%d", &continuar);
        getchar();
    }
   fclose(file);
   return 0;
}
