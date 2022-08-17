public class Lista {
    No inicio;
    No fim;

    public void insere(No n){
        if (inicio == null){
            inicio = n;
            fim = n;
        }
        else{
            fim.setProximo(n);
            fim = n;
        }
    }

    public void imprimeLista(){
        No aux = inicio;
        while (aux!=null){
            System.out.println(aux.toString());
            aux = aux.getProximo();
        }
    }


}