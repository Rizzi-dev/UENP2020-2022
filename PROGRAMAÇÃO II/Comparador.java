import java.util.Comparator;

public class Comparador implements Comparator<Produto> {
  @Override
  public int compare(Produto p1, Produto p2) {
    return p1.getCodigo() - p2.getCodigo();
  }
}