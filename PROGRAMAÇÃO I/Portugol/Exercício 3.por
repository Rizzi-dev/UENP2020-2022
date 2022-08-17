programa
{
	inclua biblioteca Matematica
	
	funcao inicio()
	{inteiro: A, B, C
		escreva ("Informe o primeiro número:  ")
		leia (A)
		escreva ("Escreva o segundo número:  ")
		leia (B)
		escreva ("Escreva o terceiro número:  ")
		leia (C)
		
		se(A < B e B < C){
		escreva ("O menor número é:",   A)
		}
		senao se(C < B e C < A){
		escreva ("O menor número é:",   C)
		}
	     senao se(B < A e B < C){
		escreva ("O menor número é:",   B)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 438; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */