class Main {
  public static void main(String[] args) {
        Lista l = new Lista();

        No n1 = new No("Item1");
        No n2 = new No("Item2");
        No n3 = new No("Item3");
        No n4 = new No("Item4");
        No n5 = new No("Item5");
        No n6 = new No("Item6");

        l.insere(n1);
        l.insere(n2);

        l.imprimeLista();


        l.insere(n3);
        l.insere(n4);

        l.imprimeLista();

        l.insere(n5);
        l.insere(n6);

        l.imprimeLista();


    }
}
