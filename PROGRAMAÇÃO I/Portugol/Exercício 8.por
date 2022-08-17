programa
{
	
	funcao inicio()
	{
		inteiro x, y

		escreva ("Digite a coordenada x:")
		leia (x)
		escreva ("Digite a coordenada y:")
		leia (y)
		limpa ()

	{	se (x > 0 e y > 0)
		escreva ("Essa coordenada pertence ao primeiro quadrante!")

		senao se (x > 0 e y < 0)
		escreva ("Essa coordenada pertence ao quarto quadrante!")

		senao se (x < 0 e y > 0)
		escreva ("Essa coordenada pertence ao segundo quadrante!")

		senao se (x < 0 e y < 0)
		escreva ("Essa coordenada pertence ao terceiro quadrante!")

		senao se (x != 0 e y == 0)
		escreva ("Essa coordenada pertence ao eixo x")

		senao se (x == 0 e y != 0)
		escreva ("Essa coordenada pertence ao eixo y")

		senao se (x == 0 e y == 0)
		escreva ("Essa coordenada esta na origem!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 744; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */