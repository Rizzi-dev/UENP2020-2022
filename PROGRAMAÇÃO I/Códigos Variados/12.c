#include <stdio.h>

int main(){
    int valor1, valor2, valor3;

    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);

    if(valor1 == 0 || valor1 == 1 || valor2 == 0 || valor2 == 1 || valor3 == 0 || valor3 == 1){
        if(valor1 != valor2 && valor1 != valor3){
            printf("A\n");
        }
        if(valor2 != valor1 && valor2 != valor3){
            printf("B\n");
        }
        if(valor3 != valor1 && valor3 != valor2){
            printf("C\n");
        }
        if(valor1 == valor2 && valor1 == valor3){
            printf("*\n");
        }
    }
	return 0;
}
