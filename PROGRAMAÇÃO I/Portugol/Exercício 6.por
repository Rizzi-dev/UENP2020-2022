programa
{
	
	funcao inicio()
	{
		inteiro I, F
		escreva ("Informe sua altura, em cm:")
		leia (F)
		escreva ("Informe sua idade:")
		leia (I)

		se (F == 150 e I == 12)
		escreva ("Você pode andar em apenas um brinquedo!")

		senao se (F == 140 e I == 14)
		escreva ("Você pode andar em apenas um brinquedo!")

		senao se (F == 170 e I == 16)
		escreva ("Você pode andar em apenas um brinquedo!")

		senao se (F >= 170 e I >= 16)
		escreva ("Você pode andar nos três brinquedos!")

		senao se (F >= 150 e I > 14)
		escreva ("Você pode andar em apenas dois brinquedos!")

		senao se (F < 140 e I < 12)
		escreva ("Você não pode andar em nenhum brinquedo!")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 658; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */