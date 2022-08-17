#include <stdio.h>

int main(){
		int n1, n2, n3, n4, n5;
		printf("1 - se seu trabalho POSSUI esse requisito\n");
		printf("0 - se seu trabalhao NAO possui esse requisito\n\n");
		printf("Interface Grafica: ");
		scanf("%i", &n1);
        printf("Inteligencia Artificial: ");
		scanf("%i", &n2);
		printf("Encapsulamento: ");
		scanf("%i", &n3);
		printf("Indentacao: ");
		scanf("%i", &n4);
		printf("Structs: ");
		scanf("%i", &n5);
		if ((n1 < 0 || n1 > 1) || (n2 < 0 || n2 > 1) || (n3 < 0 || n3 > 1) || (n4 < 0 || n4 > 1) || (n5 < 0 || n5 > 1)){
				printf("------------------- ERRO -------------------\n");
				printf("1 - se seu trabalho POSSUI esse requisito\n");
				printf("0 - se seu trabalhao NAO possui esse requisito\n");
			}
		else if ((n1 == 1 && n2 == 0 || n1 == 0 && n2 == 1) && n3 == 1 && n4 == 1 && n5 == 1){
				printf("AVALIADO\n");
			}
		else{
				printf("0\n");
			}
	return 0;
}
