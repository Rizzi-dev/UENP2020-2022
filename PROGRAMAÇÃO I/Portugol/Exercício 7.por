programa
{
	inclua biblioteca Matematica
	
	funcao inicio()
	{
		inteiro N

		escreva ("Digite um número:")
		leia (N)

		se (N == 0){
		escreva ("NULO")}

		senao se (N % 2==0 e N > 0){
		escreva ("POSITIVO PAR")}

		senao se (N % 2!=0 e N > 0){
		escreva ("POSITIVO ÍMPAR")}

		senao se (N % 2==0 e N < 0){
		escreva ("NEGATIVO PAR")}

		senao se (N % 2!=0 e N < 0){
		escreva ("NEGATIVO ÍMPAR")}
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 308; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */