programa
{
	
	funcao inicio()
	{
		inteiro c1, c2, c3, c4, c5
		escreva ("Competência    ")
		escreva ("\nInterface Gráfica  ")
		leia (c1)
		escreva ("Inteligência Artifical  ")
		leia (c2)
		escreva ("Encapslumanto  ")
		leia (c3)
		escreva ("Indentação  ")
		leia (c4)
		escreva ("Structs  ")
		leia (c5)

		se ((c1 == 1 e c2 == 0 ou c1 == 0 e c2 == 1) e c3 == 1 e c4 == 1 e c4 == 1){
			limpa ()
			escreva ("SEU TRABALHO ATENDEU TODAS OS REQUISITOS    ")
			escreva ("\nAVALIADO")
		}
		senao{
			limpa ()
			escreva ("SEU TRABALHO NÃO ATENDEU ALGUM REQUISITO   ")
			escreva ("\nSUA NOTA É ZERO!")		
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 608; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */