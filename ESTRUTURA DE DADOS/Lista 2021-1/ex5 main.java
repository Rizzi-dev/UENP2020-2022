import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    
  Scanner read = new Scanner(System.in);
  int g[] = new int[13];  //gabarito do teste da loteria
  int r[] = new int[13];  //resposta do teste da loteria
  int na;                 //numero apostador
  int nj;                 //numeros jogados
  int i, j;

      for (i = 1; i < 13; i++) {
        System.out.println(g);
      }
 
 
      System.out.println("Digite numero do jogador (-1 para sair)= ");

  na = read.nextInt();

  while(na>=0) { 
    for (i = 1; i < 13; i++) {
      nj = read.nextInt();
    }

  for (i = 1; i < 13; i++) {
    System.out.println(+nj);
  }

    }
  }
}