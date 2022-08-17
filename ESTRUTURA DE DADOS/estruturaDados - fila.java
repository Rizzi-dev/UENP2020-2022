class Pessoa {

    String nome;
    int idade;

    public Pessoa (String n, int i){
        nome = n;
        idade = i;
    }

    public String toString(){
        return "Nome: "+nome+" idade: "+idade;
    }
}

class Fila {
    static Pessoa fila[] = new Pessoa[20];
    static int inicio = -1; 
    static int fim = -1; 
    
    public int proximo(int pont){
      if((pont+1) == fila.length){
        return 0;
      }else{
        return pont+1;
      }
    }

    public void insere(Pessoa p){
        if(inicio==-1)
            inicio=0;
        if (fim == -1 || fim < (fila.length-1)){
            fim++;
            fila[fim] = p;
        }
    }

    public void imprimeVet(){
        System.out.println("-----IMPRIME fila-------");
        for (int i = 0; i <= fim; i++) {
            System.out.println(" Pos: "+i+ " Elemento: "+ fila[i].toString());
        }
    }


    public Pessoa remove(){
        int r = inicio;
        Pessoa aux = fila[r];
        for(int i = r; i < fim ; i++) {
            fila[i] = fila[i+1];
        }
        fila[fim] = null;
        fim--;
        return aux;
    }

    
}

public class Main {
    public static void main(String[] args) {
        Fila f = new Fila();

        Pessoa p1 = new Pessoa("Gabriel",19);
        Pessoa p2 = new Pessoa("Isabela",15);
        Pessoa p3 = new Pessoa("Lívia",19);
        Pessoa p4 = new Pessoa("João Antonio",17);
        Pessoa p5 = new Pessoa("Miqueias",17);

        f.insere(p1);
        f.insere(p2);
        f.imprimeVet();
        f.insere(p3);
        f.insere(p4);
        f.insere(p5);
        f.imprimeVet();

        f.remove();
        f.proximo(4);

        f.imprimeVet();

    }
}