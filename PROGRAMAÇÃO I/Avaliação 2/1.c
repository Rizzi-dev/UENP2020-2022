#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Avaliação Programação 2021 - Ex 1
//Gabriel Rizzi 

typedef struct lojas {
    int codigo;
    int conta;
    int vencimento;
    int pagamento;
    float valor;
    float juros;
}loja;

void insereContas (loja*info, int quantidade) {
  for(int i=0;i<quantidade;i++) {
      printf("Insira o valor da conta: ");
      scanf("%d", &info[i].conta);
      printf("Insira o codigo do cliente: ");
      scanf("%d", &info[i].codigo);
      printf("Insira a data de vencimento: ");
      scanf("%d", &info[i].vencimento);
      printf("Insira a data do pagamento: ");
      scanf("%d", &info[i].pagamento);
      printf("Insira o valor do pagamento: ");
      scanf("%f", &info[i].valor);
      if(info[i].pagamento > info[i].vencimento) {
          float calc=0;
          calc=(info[i].pagamento-info[i].vencimento)*0.4;
          info[i].juros= calc;
      }
  }
}

void exibeContas (loja info) {
            printf("Codigo do cliente......................%d\n", info.codigo);
            printf("Valor da conta.........................%d\n", info.conta);
            printf("Data do Vencimento.....................%d\n", info.vencimento);
            printf("Data do Pagamento......................%d\n", info.pagamento);
            printf("Valor Pago.............................%f\n", info.valor);
            printf("Juros..................................%f\n", info.juros);
            printf("------------------------------------------------------------\n");
}

void buscaConta (int codigo, loja*info, int quantidade) {
    for(int i=0; i<quantidade; i++) {
        if(codigo==info[i].codigo) {
            printf("Codigo do cliente.............%d\n", info[i].codigo);
            printf("Numero da conta...............%d\n", info[i].conta);
            printf("Vencimento....................%d\n", info[i].vencimento);
            printf("Pagamento.....................%d\n", info[i].pagamento);
            printf("Valor.........................%f\n", info[i].valor);
            if(info[i].juros>0) {
                printf("Juros.....................%f\n", info[i].juros);
            }
        }
    }
}

int bomPagador(int codigo, loja*info, int quantidade) {
    for(int i=0; i<quantidade; i++) {
        if(codigo==info[i].codigo) {
           if(info[i].juros==0) {
               return 1;
            }
           else {
               return 0;
                }
        }
    }
}

int exibeStatusCliente (loja*info, int resultado, int quantidade) {
    for(int i=0;i<quantidade;i++) {
    if(info[i].juros == 0) {
        printf("Codigo do cliente..........%d\n", info[i].codigo);
        printf("Bom pagador!\n");
    }
    else {
         printf("Codigo do cliente..........%d\n", info[i].codigo);
         printf("Mal pagador!\n");
        }
    }
}

int main() {
    loja*info;
    int i, quant, codigo;
    int resultado;
    printf("Insira a quantidade de contas a cadastrar: \n");
    scanf("%d", &quant);
    info=(loja *) malloc (quant * sizeof(loja));
    if(info==NULL) {
        printf("Erro");
        exit(1);
    }
    
    insereContas(info, quant);
    for(i=0;i<quant;i++) {
        exibeContas(info[i]);
        printf("------------------------------------------------------------\n");
    }
    printf("Digite o codigo do cliente: \n");
    scanf("%d", &codigo);
    
    resultado = bomPagador(codigo, info, quant);
    if(resultado==1) {
        exibeStatusCliente(info, resultado, quant);
    }
    else if(resultado==0) {
        exibeStatusCliente(info, resultado, quant);
    }
    
    free(info);

    return 0;
}


