public class Fila {
    int TAM = 10;
    No fila[];
    int comeco = -1;
    int fim = -1;

    public Fila(int tam){
        fila = new No[tam];
        this.TAM = tam;
    }

    public void insere(No n){
        if(comeco == -1){
            comeco = 0;
            fim = 0;
            fila[fim] = n;
            System.out.println("Elemento inserido..."+n.tostring());
        }
        else if(fim < (TAM-1)){
            fim = fim +1;
            fila[fim] = n;
            System.out.println("Elemento inserido..."+n.tostring());
        }
        else {
            System.out.println("FILA CHEIA...");
        }
    }

    public No remove(){
        if (this.comeco != -1){
            No temp = fila[comeco];
            for (int i = comeco; i <fim ; i++) {
                fila[i] = fila[i+1];
            }
            fila[fim] = null;
            fim = fim - 1;
            System.out.println("Removido com sucesso: "+ temp.tostring());
            return temp;
        }
        else{
            System.out.println("Lista vazia");
            return null;
        }
    }

    public void imprime(){
        for (int i = this.comeco; i <= this.fim; i++) {
            System.out.println(i+" - " +fila[i].tostring());
        }
    }
}