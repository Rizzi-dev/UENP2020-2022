#include <stdio.h>

int main(){
    int X, Y;
    printf("Defina o valor para X: ");
    scanf("%i", &X);
    printf("Defina o valor para Y: ");
    scanf("%i", &Y);
    if (X > 0 && Y > 0){
            printf("primeiro quadrante\n");
        }
    else if (X < 0 && Y > 0){
            printf("segundo quadrante\n");
        }
    else if (X < 0 && Y < 0){
            printf("terceiro quadrante\n");
        }
    else if (X > 0 && Y < 0){
            printf("quarto quadrante\n");
        }
    else if (X != 0 && Y == 0){
            printf("Essa coordenada está no eixo X\n");
        }
    else if (X == 0 && Y != 0){
            printf("Essa coordenada está no eixo Y\n");
        }
    else if (X == 0 && Y ==0){
            printf("Essa coordenda esta posicionada na origem\n");
        }
    else{
            printf("Você determinou um numero errado");
        }
}
