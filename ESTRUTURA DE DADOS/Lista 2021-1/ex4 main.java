class Main {
  static void exibirValores(int[] v) {
    for (int i=0; i<20; i++) {
      System.out.print(v[i] + ", ");
    }
  }

  public static void main(String[] args) {
    int n = 20;
    int i, j, aux;
    int[] v = new int[n];
    
    for (i=0; i<n; i++) {
      v[i] = (i + 1) * 10;
     }
     exibirValores(v);

    j = n - 1;
    i = 0;
    while (i < j) {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
        j--;
        i++;
    }
    exibirValores(v);

  } 
}