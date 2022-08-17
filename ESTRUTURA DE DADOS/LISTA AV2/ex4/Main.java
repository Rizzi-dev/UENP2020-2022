class Main {
  public static void main(String[] args) {
    ListaEncadeadaDinamica lista = new ListaEncadeadaDinamica();

    Atleta a1 = new Atleta("Ney", 1.72, 70.0, "Futebol", "Nike");
    Atleta a2 = new Atleta("Mbappe", 1.78, 73.0, "Futebol", "Nike");
    Atleta a3 = new Atleta("CR7", 1.87, 84.0, "Futebol", "Nike");
    Atleta a4 = new Atleta("LeBron James", 2.06, 82.0, "Basquete", "AT&T");

    lista.insereFim(new No(a1));
    lista.insereFim(new No(a2));
    lista.insereFim(new No(a3));
    lista.insereFim(new No(a4));

    lista.imprimeLista();

  }
}