public class Atleta {
    String nome; 
    double altura;
    double peso;
    String esporte;
    String patrocinadores;

    public Atleta(String nome, double altura, double peso, String esporte, String patrocinadores){
        this.nome = nome;
        this.altura = altura;
        this.peso = peso;
        this.esporte = esporte;
        this.patrocinadores = patrocinadores;
    }

    public String toString(){
        return "Nome: "+nome+"\nAltura: "+altura+"\nPeso: "+peso+"\nEsporte: "+esporte+"\nPatrocinadores: "+patrocinadores+"\n";
    }
}