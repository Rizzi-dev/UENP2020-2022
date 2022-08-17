#include <stdio.h>
#include <string.h>
//Lista de Exercícios Recursão - Ex 3
//Gabriel Rizzi

int palindromo(char *palavra, int in, int fim) {
    int tam = fim-in+1;
    if (tam <= 1)
        return 1;
    else {
        if (palavra[in] == palavra[fim])
            return palindromo(palavra, in+1, fim-1);
        else
            return 0;
    }
}

int main() {
    char p1[] = "casa";
    char p2[] = "arara";
    char p3[] = "gabriel";
    char p4[] = "ovo";
    
    printf("%d\n", palindromo(p1, 0, 3));
    printf("%d\n", palindromo(p2, 0, 4));
    printf("%d\n", palindromo(p3, 0, 6));
    printf("%d\n", palindromo(p4, 0, 2));
    return 0;
}
