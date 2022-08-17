public class ProdutoUnitario extends Produto implements IProduto  {
   int quantidadeEstoque;

   public ProdutoUnitario(Integer codigo, String nome, double preco, int quantidadeEstoque){
     super(codigo, nome, preco);
     this.quantidadeEstoque = quantidadeEstoque;
   }

  public double calcularValorEmEstoque() {
    double total = this.quantidadeEstoque * getValor();
    return total;
   }

     
  public void adicionarEstoque(int estoque) {
      this.quantidadeEstoque  += estoque;
  }

  public void vender(int qnt) {
      this.quantidadeEstoque -= qnt;
  }

  public int getQuantidadeEstoque() {
    return quantidadeEstoque;
  }

  public void setQuantidadeEstoque(int quantidadeEstoque) {
    this.quantidadeEstoque = quantidadeEstoque;
  } 
}