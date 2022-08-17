programa
{
	inclua biblioteca Matematica
	
	funcao inicio()
	{
		real n1, n2, n3, media
		escreva ("Insira a primeira nota:")
		leia (n1)
		escreva ("Insira a segunda nota:")
		leia (n2)
		escreva ("Insira a terceira nota:")
		leia (n3)
		limpa ()
		
		media = ((n1 + n2 + n3) / 3)
		escreva (media)

		se (media >= 7)
		escreva ("Aprovado!!")

		senao se (media < 3)
		escreva ("Reprovado!!")

		senao se (media >= 3 e media < 7)
		escreva ("Prova Final!!")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 456; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */