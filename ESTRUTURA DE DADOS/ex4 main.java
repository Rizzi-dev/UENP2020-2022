import java.util.Scanner;
class Main {
  
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);
    int v1, v2, v3;
    int media;

    System.out.println("Entre com os tres valores: ");
    v1 = read.nextInt();
    v2 = read.nextInt();
    v3 = read.nextInt();

    media = (v1 + v2 + v3) / 3;
    System.out.println("Primeiro valor: "+v1);
    System.out.println("Segundo valor: "+v2);
    System.out.println("Terceiro valor: "+v3);
    System.out.println("A média é: "+media);

  }
}