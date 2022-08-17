import java.util.Scanner;
import java.util.ArrayList;

class Carro{
  String marca;  
  String modelo;
  int anoFabricacao, numPortas;

}


class Main {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);
    Carro car1 = new Carro();
    Carro car2 = new Carro();
    Carro car3 = new Carro();
    
    System.out.print("Insira a Marca do carro: ");
    car1.marca = read.nextLine();
    System.out.print("Insira a Modelo do carro: ");
    car1.modelo = read.nextLine();
    System.out.print("Insira o ano de fabricação do carro: ");
    car1.anoFabricacao = read.nextInt();
    System.out.print("Insira o numero de portas do carro: ");
    car1.numPortas = read.nextInt();
    System.out.print("Armazenando dados...");

    System.out.print("Insira a Marca do carro: ");
    car2.marca = read.next();
    System.out.print("Insira a Modelo do carro: ");
    car2.modelo = read.next();
    System.out.print("Insira o ano de fabricação do carro: ");
    car2.anoFabricacao = read.nextInt();
    System.out.print("Insira o numero de portas do carro: ");
    car2.numPortas = read.nextInt();
    System.out.print("Armazenando dados...");

    System.out.print("Insira a Marca do carro: ");
    car3.marca = read.nextLine();
    System.out.print("Insira a Modelo do carro: ");
    car3.modelo = read.nextLine();
    System.out.print("Insira o ano de fabricação do carro: ");
    car3.anoFabricacao = read.nextInt();
    System.out.print("Insira o numero de portas do carro: ");
    car3.numPortas = read.nextInt();
    System.out.print("Armazenando dados...");

    System.out.print("Dados armazenados: ");
    System.out.print("Marca: "+car1.marca);
    System.out.print("Modelo: "+car1.modelo);
    System.out.print("Ano de Fabricação: "+car1.anoFabricacao);
    System.out.print("Portas: "+car1.numPortas);

    System.out.print("Marca: "+car2.marca);
    System.out.print("Modelo: "+car2.modelo);
    System.out.print("Ano de Fabricação: "+car2.anoFabricacao);
    System.out.print("Portas: "+car2.numPortas);

    System.out.print("Marca: "+car3.marca);
    System.out.print("Modelo: "+car3.modelo);
    System.out.print("Ano de Fabricação: "+car3.anoFabricacao);
    System.out.print("Portas: "+car3.numPortas);
      
  }
}