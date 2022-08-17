class Main {
  public static void main(String[] args) {
    ListaDuplamenteEncadeada lista = new ListaDuplamenteEncadeada();

    Aluno a1 = new Aluno("Gabriel", 0001, 100.0, "CC");
    Aluno a2 = new Aluno("Joaquim", 0002, 74.0, "Agronomia");
    Aluno a3 = new Aluno("João Antonio", 0003, 60.0, "Jornalismo");
    Aluno a4 = new Aluno("Maria", 0004, 82.0, "Direito");
    Aluno a5 = new Aluno("Vitoria", 0005, 98.0, "Letras");

    lista.insereFim(new No(a1));
    lista.insereFim(new No(a2));
    lista.insereFim(new No(a3));
    lista.insereFim(new No(a4));
    lista.insereFim(new No(a5));

    lista.imprimeLista();

  }
}