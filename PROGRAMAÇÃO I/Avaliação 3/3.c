#include <stdio.h>
#include <stdlib.h>
//Avaliação III - Exercício 3
//Gabriel Rizzi

int contaCaracteres() {
    FILE * arq = fopen("teste.txt", "r");

    int contagem = 0;
    char g;
    while ((g = getc(arq)) != EOF) {
        contagem++;
    }
    return contagem;
}

int main() {
    char str[contaCaracteres()];
    FILE *arq = fopen("teste.txt", "r");
    if (arq == NULL) {
        exit(1);
    }
    int count = 0;
    while (fgets(str, contaCaracteres, arq) != NULL) {
        count++;
        printf("%d %s", count, str);
    }

    fclose(arq);
    return 0;

}
