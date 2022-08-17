#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//EXERCÍCIO 4 - ALOCAÇÃO DINAMICA
//Gabriel Rizzi

struct endereco
	{ char rua[50];
	  char bairro[50];
	};

struct loja
	{ char nome[50];
	  struct endereco address;
	  char telefone[28];
	  float preco;
	};
int main()
	{ struct loja *lojas;
	  int n, i;
	  float media=0, soma=0;
	  
	  //numero de lojas
	  scanf("%d", &n);
	  
	  //alocar struct de n lojas
	  lojas = (struct loja *) malloc (n * sizeof(struct loja));
		if (lojas == NULL)
		    exit(1);
			
	  //ler os dados
	  for (int i=0; i<n; i++)
		{ getchar();
		  fgets(lojas[i].nome, 50, stdin);
		  fgets(lojas[i].address.rua, 50, stdin);
		  fgets(lojas[i].address.bairro, 50, stdin);
		  fgets(lojas[i].telefone, 28, stdin);
		  scanf("%f", &lojas[i].preco);
		}
		
	  //calculo das medias
	  for (i=0; i<n; i++)
		{ soma = soma + lojas[i].preco;
		}
		
		media = soma / n;
		printf("Média de preços: %.2f, media);
		
	  for (i=0; i<n; i++)
		{ lojas[i].preco < media)
			{ printf("%s %s %s %s", lojas[i].nome, lojas[i].address.rua; lojas[i].address.bairro, lojas[i].telefone);
			}
		}
		return 0;
	}