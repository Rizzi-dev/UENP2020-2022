#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    float ctlg[TAM];
    int i;
    float *p = ctlg;

    for (i = 0; i < TAM; i++)
    {
        scanf("%f", p);
        p++;
    }

    for (i = 0; i < TAM; i++)
    {
        p = &ctlg[i];
        *p += *p * 0.1;
        printf("%.2f", *p);
    }

    return 0;
}
