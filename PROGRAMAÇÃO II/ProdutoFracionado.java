public class ProdutoFracionado extends Produto implements IProduto {
  double quantidadeEstoque;

  public ProdutoFracionado(Integer codigo, String nome, double preco, double quantidadeEstoque){
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

  public double getQuantidadeEstoque() {
    return quantidadeEstoque;
  }

  public void setQuantidadeEstoque(double quantidadeEstoque) {
    this.quantidadeEstoque = quantidadeEstoque;
  } 
}