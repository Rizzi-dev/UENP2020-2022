class Main {
  public static void main(String[] args) {
    Veiculo v[] = new Veiculo[3];
    v[0] = new Veiculo("Gol", "ABC123");
    v[1] = new Veiculo("Fiat", "QKS245");
    v[2] = new Veiculo("Ford", "GHF145");

    for (int i=0; i<3; i++) {
      System.out.println(v[i].placa);
    }
  }
}