programa 1
{
	inclua biblioteca Matematica
	
	funcao inicio()
	{
		inteiro: A, B, C;
		escreva ("Escreva um número:  ")
		leia (A)
		escreva ("Escreva um número:  ")
		leia (B)
		escreva ("Escreva um número:  ")
		leia (C)
		se (A == B e B == C){
			escreva("Os três números são iguais!")
		}
		senao se (A != B e B !=C e A!=C){
			escreva ("Os três números são diferentes!")
		}
		senao se (A == B ou A == C ou B == C){
			escreva ("Apenas dois números são iguais!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 10; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */