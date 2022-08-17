public abstract class Produto {
  private Integer codigo;
  private String nome;
  private double valor;

  public void setCodigo(Integer codigo) {
    this.codigo = codigo;
  }
  
  public Integer getCodigo() {
    return codigo;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }
  
  public String getNome() {
    return nome;
  }

  public void setValor(double valor) {
    this.valor = valor;
  }
  
  public double getValor() {
    return valor;
  }

  public Produto(Integer codigo, String nome, double valor){
    setCodigo(codigo);
    setNome(nome);
    setValor(valor);
  }

  public String toString() {
    return codigo + "-" + nome + "-" + valor;
  }
}