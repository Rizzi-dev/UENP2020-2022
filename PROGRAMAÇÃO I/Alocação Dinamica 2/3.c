#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//LISTA ALOCAÇÃO DINAMICA - EXERCíCIO 3
//Gabriel Rizzi

typedef struct bancoDados {
	int codigo;
	char tt[50];
	char autor[50]
	char assunto[50];
} livros;

//Função para cadastrar livros
void cadastraLivros(livros *livro, int quant) {	
		for (int i=0; i<quant; i++) {
			scanf("%d", &livro[i].codigo);
			getchar();
			fgets(livro[i].tt, 50, stdin);
			fgets(livro[i].autor, 50, stdin);
			fgets(livro[i].assunto, 50, stdin);
		}
}

//Função para buscar livros
int buscaLivro(int cod, livros *livro, int quant) {
		for (int i=0; i<quant; i++) {
			if (cod == livro[i].codigo)
				return 1;
		}
		return 0;
}

//Função para mostrar livros
void exibeLivro(livros livro) {
		printf ("Codigo................................%d\n", livro.codigo);
		printf ("Titulo................................%d\n", livro.tt);
		printf ("Autor.................................%d\n", livro.autor);
		printf ("Assunto...............................%d\n", livro.assunto);
		printf ("\n");
}

int main () {
	livros *livro;
	int i, quant, codigo;
	
//Ler quantidade de livros
scanf("%d", &quant);

//Aloca vetor de struct de acordo com a quantidade
livro == (livros *) malloc (quant * sizeof(livros));
if (livro == NULL)
	exit(1);
	
//Chamar função de cadastro
cadastraLivros(livro, quant);

//Chamar função de exibição
for (i=0; i<quant; i++) {
	exibeLivro(livro[i]);
}

//Busca livro
printf("Informe o codigo do livro: ");
scanf("%d", &codigo);

//Chamar função de busca
int result =  buscaLivro(codigo, livro, quant);
if (result == 1)
	printf("Livro Encontrado!\n");
else
	printf("Livro não encontrado!\n");
	
//Liberar memoria
free(livro)

return 0;

}