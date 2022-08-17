import java.util.Scanner;

import javax.print.attribute.standard.Media;

class Aluno {
  String nome;
  int mediaNotas;

  void mostrarNotas() {
    System.out.println("Aluno: "+nome);
    System.out.println("Média do Aluno: "+mediaNotas);
  }
}


class Main {
  public static void main(String[] args) {
    String nome;
    int nota, nota1, nota2, nota3;

    Scanner read4 = new Scanner(System.in);
    Scanner read5 = new Scanner(System.in);

    Aluno nome1 = new Aluno();
    nome1 = Gabriel;
    Aluno nome2 = new Aluno();
    nome2 = Isabela;
    Aluno nome3 = new Aluno();
    nome3 = Rafael;
    Aluno nome4 = new Aluno();
    Aluno nome5 = new Aluno();

    System.out.print("Aluno: "+nome1);
    nome1;
    System.out.print("Média: "+nota1);
    nota1 = 70;

    System.out.print("Aluno: "+nome2);
    nome2;
    System.out.print("Média: "+nota2);
    nota2 = 80;

    System.out.print("Aluno: "+nome3);
    nome3;
    System.out.print("Média: "+nota3);
    nota3 = 100;

    System.out.print("Digite o nome do Aluno: ");
    nome = read4.nextLine();
    System.out.print("Digite a media do aluno: ");
    nota = read4.nextInt();

    nome4.nome = nome;
    nome4.mediaNotas = nota;

    nome4.mostrarNotas();

    System.out.print("Digite o nome do Aluno: ");
    nome = read5.nextLine();
    System.out.print("Digite a media do aluno: ");
    nota = read5.nextInt();

    nome5.nome = nome;
    nome5.mediaNotas = nota;

    nome5.mostrarNotas();

  }
}