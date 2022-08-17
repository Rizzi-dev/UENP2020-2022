#include <stdio.h>
#include <stdlib.h>


void troca (int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int x, y, z;

    scanf("%d %d %d", x, y, z);

        //x seja o maior
    if (x > y || x > z)
    {
        //y seja o menor
        if (y < z)
            troca(&x, &y);
        //z seja o menor
        else
            troca(&x, &z);
    }

    printf("%d %d %d", x, y, z);

        return 0;
}
