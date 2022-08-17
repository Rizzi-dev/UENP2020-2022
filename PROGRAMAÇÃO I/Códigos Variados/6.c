#include <stdio.h>

int main(){
    int a, b, c;
    printf("Define o primeiro numero: ");
    scanf("%i", &a);
    printf("Define o segundo numero: ");
    scanf("%i", &b);
    printf("Define o terceiro numero: ");
    scanf("%i", &c);
    if (a == b && b == c){
        printf("1\n");
    }
    else if (a != b && b != c && c != a){
        printf("2\n");
    }
    else if (a == b || b == c || c == a){
        printf("3\n");
    }
	return 0;
}
