#include <stdio.h>
#include <stdlib.h>

float imprimePar(float num1, float num2){

    float a, b;

    if(num1>num2){
        if(num1/2 <= 0.1 || num1/2 <= -0.1){
    return printf("\n%.2f %.2f", num1, num2);
        }
    }
    else if(num2>num1){
        if(num2/2 <= 0.1 || num2/2 <= -0.1){
    return printf("\n%.2f %.2f", num1, num2);
        }
    }

    a = num1 + num2;
    b = num2 - num1;

    if(a == 10 && b == 10){
    return printf("\n%.2f %.2f", num1, num2);
    }

}

int main()
{
    float num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    imprimePar(num1, num2);

    return 0;
}

