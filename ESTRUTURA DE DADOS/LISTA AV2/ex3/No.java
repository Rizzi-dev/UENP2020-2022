public class No {
    Conteudo c;
    No proximo;

    public No(String c){
        Conteudo c1 = new Conteudo(c);
        this.c = c1;
    }

    public void setProximo(No prox){
        this.proximo = prox;
    }

    public No getProximo(){
        return this.proximo;
    }

    public String toString(){
         if (proximo != null)
            return c.toString();
         else
             return c.toString();
    }
}