#include <stdio.h>

int main(){
	int produto, quantidade;
	float preco, pagar;

	scanf("%d", &produto);
    scanf("%d", &quantidade);

	switch(produto){
		case 1: preco=5.3;
		break;
		case 2: preco=6.;
		break;
		case 3: preco=3.2;
		break;
		case 4: preco=2.5;
		break;
	}

	pagar= preco*quantidade;

	if(quantidade>=15 || pagar>=40){
		pagar=pagar - pagar*0.15;
	}

	printf("R$ %.2f",pagar);
	return 0;
}
