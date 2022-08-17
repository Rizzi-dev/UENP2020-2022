#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Avaliação Programação 2021 - Ex 3
//Gabriel Rizzi 

struct aluno {
    char nome[50];
    int matricula;
    int faltas;
};

//alocar matriz
int** alocaMatriz(int l, int c) { 
    struct aluno *alunos;
    alunos = (struct aluno*) malloc (l * sizeof(struct aluno));
    //Verificação de erros
    if (alunos == NULL)
        exit (1);
        
		for (int i=0; i<l; i++) { 
		    alunos = (struct aluno*) malloc (c * sizeof(struct aluno));
		    //Verificação de erros
			if (alunos == NULL)
				exit(1);
		}
		return alunos;
}
	
//desalocar matriz
int** desalocaMatriz(int **alunos, int l)
if (alunos != NULL) {
    for (int i=0; i<l; i++) {
        if (alunos != NULL)
            free(alunos);
    }

	  free(alunos);
	  return NULL;
}

//inserir alunos
int inserirAluno(struct aluno *alunos, int n) {
    for (int i=0; i<n; i++) {
        printf("Insira o numero da matricula: ");
        getchar();
        alunos[i].matricula = i + 1;
        printf("Insira o nome do aluno: ");
        fgets(alunos[i].nome, 50, stdin);
        printf("Insira o numero de faltas: ");
        scanf("%d", alunos[i].faltas);
    }
}

//listar alunos
int listarAlunos(struct aluno *alunos) {
    printf("Numero da Matricula...............................%d\n", alunos[i].matricula);
    printf("Nome do Aluno.....................................%s\n", alunos[i].nome);
    printf("Quantidade de Faltas..............................%d\n", alunos[i].faltas);
}

int main() {
    struct aluno *alunos;
    int n;
    
    printf("Insira quantos alunos deseja cadastrar: ");
    scanf("%d", &n);
    
    alunos = alocaMatriz(n);
    
    inserirAluno(alunos, n);
    
    for (int i=0; i<n; i++) {
        listarAlunos(alunos[i]);
    }
    
    desalocaMatriz(alunos);
    
    return 0;
}
