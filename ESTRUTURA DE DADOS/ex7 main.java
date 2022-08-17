class Main {
  private static long fatorial(int n) {
    long fatorial = 1;
    for (int i = 2; i <= n; i++) {
      fatorial *= i;
    }
    return fatorial;
  }

  private static long fatorialRecursivo(int n) {
    if (n <= 1) {
      return 1;
    }
    return n * fatorialRecursivo(n-1);
  }

  private static int fibonacci(int n) {
    int atual = 1;
    int anterior = 1;
    int a = 0;

    while (n > 2) {
      a = atual;
      atual = atual + anterior;
      anterior = a;
      n--;
    }
    return atual;
  }

  private static int fibonacciRecursivo(int n) {
    if (n < 2) {
      return 1;
    }
    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
  }
  
  public static void main(String[] args) {
    System.out.println("Fatorial: ");
    for (int i = 1; i <= 10; i++) {
      System.out.println(i + "! = " + fatorial(i));
    }

    System.out.println("Fatorial Recursivo: ");
    for (int i = 1; i <= 10; i++) {
      System.out.println(i + "! = " + fatorialRecursivo(i));
    }

    System.out.println("Fibonacci: ");
    for (int i = 1; i <= 10; i++) {
      System.out.println(i  +fibonacci(i));
    }

    System.out.println("Fibonacci Recursivo: ");
    for (int i = 1; i <= 10; i++) {
      System.out.println(i +fibonacciRecursivo(i));
    }
    
  }
}