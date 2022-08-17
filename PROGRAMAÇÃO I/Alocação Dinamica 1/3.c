#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//EXERCÍCIO 3 - ALOCAÇÃO DINAMICA
//Gabriel Rizzi

struct aluno
	{ int matricula;
	  char nome[50];
	  float nota;
	};

void* alocaVetor(int tam)
	{ struct aluno *alunos;
	//alocar vetor
	alunos = (struct aluno *) malloc (tam * sizeof(struct aluno));
		//se houver erros
		if (alunos == NULL)
			exit (1);
	}
	
void* desalocaVetor(struct aluno *alunos)
	{ if (alunos != NULL)
		 free(alunos);
	  alunos = NULL;
	}
	
void inserirAluno(struct aluno *alunos, int n)
	{ for (int i=0; i<n; i++)
		{ getchar();
		  alunos[i].matricula = i+1;
		  fgets(alunos[i].nome, 50, stdin);
		  scanf("%f", &alunos[i].nota);
		}
	}
	
void mostrarAluno(struct aluno alunos)
	{ printf("Matricula............... %d\n", alunos.matricula);
	  printf("Nome.................... %s\n", alunos.nome);
	  printf("Situação................ %d\n")
	  
	  //verificar situação dos alunos
	  if (alunos.nota >= 7)
		 printf("Aprovado!!");
		 
	  else if (alunos.nota >= 4 && alunos.nota < 7)
		 printf("Exame!!");
	
	  else 
	     printf("Reprovado!!");
	  
int main()
	{ struct aluno *alunos;
	  int n;
	  
	  scanf("%d", &n);
	  
	  alunos = alocaVetor(n);
	  
	  inserirAluno(alunos, n);
	  
	  for (int i=0; i<n; i++)
		{ mostrarAluno(alunos[i]);
		}
		
		desalocaVetor(alunos);
		return 0;
	}