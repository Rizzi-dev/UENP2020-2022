#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//LISTA ALOCAÇÃO DINAMICA - EXERCíCIO 2
//Gabriel Rizzi

int main() {
	char *frase;
	int i, tam;
	
	//Ler tamanho da string
	scanf("%d", &tam);
	getchar();
	
	//Alocar vetor de caracteres
	frase = (char *) malloc (tam * sizeof(char));
		if (frase == NULL) {
							printf("Erro de alocação de memoria!\n");
							exit(1);
						}
	
	//Ler string
	gets(frase);
	int totalVogais = 0, totalCaracteres = 0;
	float percentualVogais = 0;
	
	//Retorna o total de caracteres
	totalCaracteres = strlen(frase);
	for (i=0; i<totalCaracteres; i++) {
		//Verificar vogais
		if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i'
			|| frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U') {
				//Contabilizar vogais
				totalVogais++;
			}
	}
	
	//Calcular percentual de vogais
	for (i=0; i<=totalCaracteres; i++) {
		percentualVogais = (totalVogais * 100) / totalCaracteres;
									   }
									   
	//Imprimir as saídas
	printf("Total de caracteres na string: %d \n", totalCaracteres);
	printf("Total de vogais na string: %d \n", totalVogais);
	printf("Percentual de vogais na string: %2f \n", percentualVogais);
	
	//Liberação de memoria
	free(frase);
	
	return 0;
	
}