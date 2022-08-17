#include <stdio.h>

int main(){
		int n;
		float v;
		printf("Digite quantos metros cubicos de agua sua residencia gastou: ");
		scanf("%i", &n);
		if (n <= 10){
			printf("Valor: R$7.00");
			}
		else if (n >= 11 &&  n <= 30){
			v = (n - 10);
			printf("Valor: R$", v * 1 + 7);
			}
		else if (n >= 31 &&  n <= 100){
			v = (n - 30);
			printf("Valor: R$", v * 2 + 7 + 20 );
			}
		else if (n >= 101){
			v = (n - 100);
			printf("Valor: R$", v * 5 + 7 + 20 + 140);
			}
	return 0;
}
