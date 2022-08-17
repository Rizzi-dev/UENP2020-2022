class Main {
  public static void main(String[] args) {
    String[] Vetor1 = {"Gabriel", "João", "Livia", "José" , "Isabela"};
    String[] Vetor2 = new String[Vetor1.length];

    for(int i=0; i < Vetor1.length; i++){
    Vetor2[i] = Vetor1[i];
    System.out.print(Vetor2[i]+ " ");
    }
  }
}