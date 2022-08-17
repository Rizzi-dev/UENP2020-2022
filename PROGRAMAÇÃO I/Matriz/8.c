#include <stdio.h>

int main() {
   int n,m, i, j;

   scanf("%d %d", &m,&n);
   int matriz[m][n];

   //le matriz
   for (i=0; i<m; i++){
      for (j=0; j<n; j++)
         scanf("%d", &matriz[i][j]);
   }

   //transposta
   for (i=0; i<n; i++) {
      for (j=0; j<m; j++) {
         if (j == m-1)
            printf("%d", matriz[j][i]);
         else
            printf("%d ", matriz[j][i]);
      }
      printf("\n");
   }
   return 0;
}
