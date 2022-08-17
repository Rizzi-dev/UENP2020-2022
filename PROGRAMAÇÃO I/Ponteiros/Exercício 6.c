#include <stdio.h>
#include <stdlib.h>

int main()
{
  int mat[3][3];
  int *p = &mat[0][0];
  int i, x, count;

  for (i = 0; i < 9; i++)
  {
      scanf("%d", &p[i]);
  }

  tam = strlen(p);

  for (i = tam-1; i >= 0; i--)
  {
      printf("%c", p[i]);
  }

    return 0;
}
