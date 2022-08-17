#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media = ((n1 + n2 + n3) / 3);
    if (media >= 7){
        printf("Aprovado\n");
        }
    else if (media < 3){
        printf("Reprovado\n");
        }
    else if (media >= 3 && media < 7){
        printf("Prova final\n");
        }
	return 0;
}
