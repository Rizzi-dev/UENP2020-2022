#include <stdio.h>
#include <string.h>

int main()
{
   float preco[5][20], menor[5][2];


   for(int x = 0; x <= 4; x++){
       for(int y = 0; y <= 19; y++){
           printf("Digite o valor do produto %d da loja %d: ", y+1, x+1);
           scanf("%f", &preco[x][y]);
           fflush(stdin);
       }
   }

   for(int x = 0; x <=4; x++){
       menor[x][0] = preco[x][0];
       menor[x][1] = 0;
       for(int y = 1; y <= 19; y++){
           if(preco[x][y] < menor[x][0]){
               menorPreco[x][0] = preco[x][y];
               menorPreco[x][1] = y;
           }
       }
   }

  printf("Resultado:\n");
  for(int x = 0;x<=4;x++)
  {
    printf("Loja %d, produto %.0f: %f\n",x+1,menor[x][1],menor[x][0]);   }
  }
