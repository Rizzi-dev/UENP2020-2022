#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//LISTA ALOCAÇÃO DINAMICA - EXERCíCIO 5
//Gabriel Rizzi

struct aluno {
	char nome[50]
	char sobrenome[50]
	float nota;
};

//Função para verificar a maior nota
void alunoMaiorNota(struct aluno *vetAlunos, int tam) {
	int i, pos;
	float maior=0;
	
	for (i=0; i<tam; i++) {
		if (vetAlunos[i].nota > maior) {
			maior = vetAlunos[i].nota;
			pos = i;
		}
	}
	
	printf("%s %s obteve a maior nota da turma!", vetAlunos[pos].nome, vetAlunos[pos].sobrenome);
}

int main() {
	struct aluno *al;
	int i, n;
	
//Ler numero de alunos
scanf("%d", &n);

//Alocar de acordo com n
al = (struct aluno *) malloc (n * sizeof(struct aluno));
if (al == NULL)
	exit(1);
	
//Ler elementos da estrutura
for (i=0; i<n; i++) {
	getchar();
	gets(al[i].nome);
	gets(al[i].sobrenome);
	scanf("%f", &al[i].nota);
}

//Chamar função que mostra a maior nota
alunoMaiorNota(al, n);

//Liberar memoria
free(al)

