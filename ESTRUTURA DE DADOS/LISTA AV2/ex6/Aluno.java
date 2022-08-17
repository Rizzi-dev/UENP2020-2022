public class Aluno {
    String nome; 
    int matricula;
    double nota;
    String nomeCurso;

    public Aluno(String nome, int matricula, double nota, String nomeCurso){
        this.nome = nome;
        this.matricula = matricula;
        this.nota = nota;
        this.nomeCurso = nomeCurso;

    }

    public String toString(){
        return "Nome: "+nome+"\nMatricula: "+matricula+"\nNota: "+nota+"\nCurso: "+nomeCurso+"\n";
    }
}