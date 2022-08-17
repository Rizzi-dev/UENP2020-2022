#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2
//Exercício 2

typedef struct lanchonete {
        int codigo;
        char nome[100];
        float preco
                          } ambrosina;

int main()
{
    int codigo
    int i, op, quantidade, n;
    float valorFinal;

    //quantidade de produtos para cadastrar
    printf("Quantidade de Produtos a cadastrar: ");
    scanf("%d", &n);
    ambrosina produtos [n]; //array struct de tam n

    //leitura de n produtos
    for (i=0; i<n; i++)
    {
        scanf("%d", &produtos[i].codigo);
        getchar();
        fgets(produtos[i].nome, 100, stdin);
        scanf("%f", &produtos[i].preco);
        getchar();
    }

    valorFinal = 0.0;
    codigo = -1;

    while (codigo != 0) {
                            printf("Insira o codigo do produto: ");
                            scanf("%d", &codigo);
                            if (codigo == 0)
                                break;
                            printf("Insira a quantidade de itens: ");
                            scanf("%d", &quantidade);

                            if (quantidade > 0) {
                                                    for (i=0; i<n; i++) {
                                                        if (codigo == produtos[i].codigo)
                                                            valorFinal += (produtos[i].preco * quantidade);
                                                                        }
                                                }
                        }
    printf("Valor total a ser pago: %.2f\n", valorFinal);
    return 0;
}
