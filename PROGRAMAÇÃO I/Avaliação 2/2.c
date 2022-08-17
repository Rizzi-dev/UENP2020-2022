#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Avaliação Programação 2021 - Ex 2
//Gabriel Rizzi 

typedef struct aluno {
    int matricula;
    char nome[50];
    int opcao;
    float valor;
    int ep;
};

//Alocar vetor
void* alocaVetor(int tam) {
    struct aluno *alunos;
    //Alocar vetor
    alunos = (struct aluno *) malloc (tam *sizeof(struct aluno));
    //Verificação de erros
    if (alunos == NULL) {
        exit(1);
    }   
}

//Desalocar vetor
void* desalocaVetor(struct aluno *alunos) {
    if (alunos != NULL)
        free(alunos);
    alunos = NULL;
}

//Inserir alunos
void inserirAluno(struct aluno *alunos, int n) {
    for (int i=0; i<n; i++) {
        getchar();
        alunos[i].matricula = i+1;
        printf("Insira o nome: ");
        fgets(alunos[i].nome, 50, stdin);
        printf("Insira a opcao de inscrição: \n");
        printf("<1> Inscrição + 1 minicurso........................................R$50,00 \n");
        printf("<2> Inscrição + 2 minicursos.......................................R$65,00 \n");
        printf("<3> Inscrição + 3 minicursos.......................................R$80,00 \n");
        printf("<4> Inscrição + participação em todos os minicursos...............R$100,00 \n");
        scanf("%d", alunos[i].opcao);
        getchar();
        printf("O aluno estudou em escola pública?  \n");
        printf("<1> SIM  \n");
        printf("<2> NÃO  \n");
        scanf("%d", alunos[i].ep);
        
        for (int i=0; i<n; i++) {
            if (alunos[i].opcao == 1){
                if(alunos[i].ep == 1) {
                    alunos[i].valor = (50-((30 * 50) / 100));
            }
            else{
                alunos[i].valor = 50;
            }
        }
        if(alunos[i].opcao == 2){
            if(alunos[i].ep == 1){
                alunos[i].valor = (65-((30 * 65) / 100));
            }
            else{
                alunos[i].valor = 65;
            }
        }
        if(alunos[i].opcao == 3){
            if(alunos[i].ep == 1){
                alunos[i].valor = (80-((30 * 80) / 100));
            }
            else{
                alunos[i].valor = 80;
            }
        }
        if(alunos[i].opcao == 4){
            if(alunos[i].ep == 1){
                alunos[i].valor = (100-((30 * 100) / 100));
            }
            else{
                alunos[i].valor = 100;
            }
        }
    }
    }
}

int main() {
    struct aluno *alunos;
    int n;
    printf("Insira a quantidade de alunos a ser cadastrado: ");
    scanf("%d", &n);
    
    alunos = alocaVetor(n);
    
    inserirAluno(alunos, n);
    
    desalocaVetor(alunos);
    
    return 0;
}

