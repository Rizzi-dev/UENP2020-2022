programa
{
	inclua biblioteca Matematica
	
	funcao inicio()
	{
		real quantidade_produto, codigo_produto
		escreva ("Digite o código do produto: ")
		leia (codigo_produto)
		escreva ("Digite a quantidade: ")
		leia (quantidade_produto)
		limpa ()

		se (codigo_produto <= 0 ou codigo_produto >= 5){
			escreva ("Produto inexistente!")
		}

		senao se (quantidade_produto <=0){
			escreva ("Quantidade não permitida!")
		}

		senao se (codigo_produto == 1 e quantidade_produto >= 15 ou quantidade_produto*5.30 >= 40){
			escreva ("Valor total com desconto: R$", (quantidade_produto*5.30)-(quantidade_produto*5.30)*0.15))
		}

		senao se (codigo_produto == 2 e quantidade_produto >= 15 ou quantidade_produto*6.00 >= 40){
			escreva ("Valor total com desconto: R$", (quantidade_produto*6.00)-(quantidade_produto*6.00)*0.15))
			
		}
		
		senao se (codigo_produto == 3 e quantidade_produto >= 15 ou quantidade_produto*3.20 >= 40){
			escreva ("Valor total com desconto: R$", (quantidade_produto*3.20))
		}

		senao se (codigo_produto == 4 e quantidade_produto >= 15 ou quantidade_produto*2.50 >= 40){
			escreva ("Valor total com desconto: R$", (quantidade_produto*2.50)-(quantidade_produto*2.50)*0.15))
		}
		
		senao se (codigo_produto == 1 e quantidade_produto < 15 ou quantidade_produto*5.30 < 40){
			escreva ("Valor total sem desconto: R$", (quantidade_produto*5.30))
			escreva ("\nPara obter desconto, compre 15 + unidades ou ultrapasse R$40,00!")
		}

		senao se (codigo_produto == 2 e quantidade_produto < 15 ou quantidade_produto*6.00 < 40){
			escreva ("Valor total sem desconto: R$", (quantidade_produto*6.00))
			escreva ("\nPara obter desconto, compre 15 + unidades ou ultrapasse R$40,00!")
		}
		
		senao se (codigo_produto == 3 e quantidade_produto < 15 ou quantidade_produto*3.20 < 40){
			escreva ("Valor total sem desconto: R$", (quantidade_produto*3.20))
			escreva ("\nPara obter desconto, compre 15 + unidades ou ultrapasse R$40,00!")
		}

		senao se (codigo_produto == 4 e quantidade_produto < 15 ou quantidade_produto*2.50 < 40){
			escreva ("Valor total sem desconto: R$", (quantidade_produto*2.50))
			escreva ("\nPara obter desconto, compre 15 + unidades ou ultrapasse R$40,00!")
		}

	}
		
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 2168; 
 * @PONTOS-DE-PARADA = 32;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */