programa
{
	
	funcao inicio()
	{
		real a, b, c

		escreva ("Digite um lado do triângulo: ")
		leia (a)
		escreva ("Digite um lado do triângulo: ")
		leia (b)
		escreva ("Digite um lado do triângulo: ")
		leia (c)
		limpa ()

		se (a == b e b == c)
		escreva ("TRIANGULO EQUILATERO!")

		senao se (a == b e b != c ou a == c e c != b ou b == c e c != a)
		escreva ("TRIANGULO ISÓSCELES!")

		senao se (a != b e b != c)
		escreva ("TRIANGULO ESCALENO!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 158; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */