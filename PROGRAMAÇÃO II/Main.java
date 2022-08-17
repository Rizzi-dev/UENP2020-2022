import java.util.ArrayList;

class Main {
  public static void main(String[] args) {
    ArrayList<Produto> lista = new ArrayList<>();
    double total = 0;

    ProdutoUnitario p1 = new ProdutoUnitario(1, "Arroz - 5kg", 10, 10);
    ProdutoUnitario p2 = new ProdutoUnitario(2, "Feijão - 2kg", 8, 20);
    ProdutoUnitario p3 = new ProdutoUnitario(3, "Batata Pringles - Original", 11, 5);
    ProdutoUnitario p4 = new ProdutoUnitario(4, "Bolacha Simples", 3, 15);
    ProdutoFracionado p5 = new ProdutoFracionado(5, "Maça - KG", 2.99, 60);
    ProdutoFracionado p6 = new ProdutoFracionado(6, "Banana - KG", 3.45, 45);
    ProdutoFracionado p7 = new ProdutoFracionado(7, "Manga - KG", 5.24, 30);
    ProdutoFracionado p8 = new ProdutoFracionado(8, "Kiwi - KG", 8.42, 60);

    lista.add(p1);
    lista.add(p2);
    lista.add(p3);
    lista.add(p4);
    lista.add(p5);
    lista.add(p6);
    lista.add(p7);
    lista.add(p8);

    total += p1.calcularValorEmEstoque();
    total += p2.calcularValorEmEstoque();
    total += p3.calcularValorEmEstoque();
    total += p4.calcularValorEmEstoque();
    total += p5.calcularValorEmEstoque();
    total += p6.calcularValorEmEstoque();
    total += p7.calcularValorEmEstoque();
    total += p8.calcularValorEmEstoque();

    System.out.println(lista);
    System.out.println("Valor total em estoque: " +total);
   }

    
      

    
    
  }