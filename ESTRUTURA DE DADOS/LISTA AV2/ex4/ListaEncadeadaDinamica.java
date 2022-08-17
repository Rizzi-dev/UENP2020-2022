public class ListaEncadeadaDinamica {
    No inicio;
    No fim;

    public void insereFim(No n){
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

    public No remove(String texto){
        No ant = null;
        No rem = inicio;

        while (rem!=null){
            if (rem.toString().contains(texto)){
                if (ant!=null){
                    ant.setProximo(rem.getProximo());
                    if (rem == fim){
                        fim = ant;
                    }
                    rem.setProximo(null);
                    System.out.println("Elemento removido. "+rem.toString());
                    return rem;
                }
                else{
                    inicio = rem.getProximo();
                    rem.setProximo(null);
                    if (fim == rem){
                        fim = rem.getProximo();
                    }
                    System.out.println("Elemento removido. "+rem.toString());
                    return rem;
                }
            }
            ant = rem;
            rem = rem.getProximo();
        }
        System.out.println("Elemento nao encontrado para remocao!");
        return null;
    }

    public No busca(String buscar){
        No aux = inicio;
        while(aux!=null){
            if (aux.toString().contains(buscar)){
                return aux;
            }
            aux = aux.getProximo();
        }
        return null;
    }

}