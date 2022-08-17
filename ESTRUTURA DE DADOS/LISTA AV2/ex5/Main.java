import java.util.ArrayList;

class Main {
  public static void main(String[] args) {
  
    Fila fi = new Fila(4);
    Pilha pi = new Pilha(6);

        for (int i = 0; i < 5; i++) {
            No n = new No("i: "+i,i);
            fi.insere(n);
        }
        fi.imprime();
        System.out.println("Adicionando mais elementos...");
        for (int i = 0; i < 6; i++) {
            No n = new No("i2: "+i,i);
            fi.insere(n);
        }

        fi.imprime();
        fi.remove();
        fi.remove();
        fi.imprime();

        System.out.println("\n\n");

        for (int i=0; i<7; i++){
            No n = new No("pilha:"+i, i);
            pi.empilha(n);
        }
        System.out.println("Imprime pilha...");
        pi.imprime();

        pi.desempilha();
        pi.desempilha();

        pi.imprime();
        pi.desempilha();
        pi.desempilha();
        pi.imprime();
        pi.desempilha();
        pi.desempilha();
  }    
}