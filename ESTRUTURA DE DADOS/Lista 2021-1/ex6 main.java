import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int M[][] = new int[5][5];
    int i;
    int j;
    int linha4 = 0;
    int col2 = 0;
    int diagp = 0;
    int diags = 0;
    int total = 0;

    for (i = 0; i < 5; i++) {
      for (j = 0; j <5; j++) {
        System.out.println("Valor para posiÃ§Ã£o ("+(i+1)+","+(j+1)+")");
        M[i][j] = Integer.parseInt(in.nextLine());

          if (i == 3) {
              linha4 += M[i][j];
          }

          if (j == 1) {
              col2 += M[i][j];
          }

          if (i == j) {
              diagp += M[i][j];
          }

          if ((i + j) == 4) {
              diags += M[i][j];
          }

          total += M[i][j];

      }
    }

    for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
        System.out.print(M[i][j]+"   ");
      }
        System.out.println();
    }

        System.out.println("A soma da LINHA 4 Ã© "+linha4);
        System.out.println("A soma da COLUNA 2 Ã© "+col2);
        System.out.println("A soma da DIAGONAL PRINCIPAL Ã© "+diagp);
        System.out.println("A soma da DIAGONAL SECUNDÃRIA Ã© "+diags);
        System.out.println("A soma da TOTAL Ã© "+total);


  }
}