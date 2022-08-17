import java.util.Date;
import java.text.SimpleDateFormat; 

class Carro {
  String placa;
    public Carro(String placa) {
      this.placa = placa;
    }
    public String getPlaca() {
      return placa;
    }
}


class Estacionamento {
  private Carro[] vagas;
  private int vagasLivres;
   
    public Estacionamento(int quantidadeVagas) {
      this.vagas = new Carro[quantidadeVagas];
      this.vagasLivres = quantidadeVagas;
  }


public boolean estacionar(Carro carro) {
  if (this.vagasLivres == 0) {
    return false;
  }

  for (int i = 0; i < vagas.length; i++) {
    if (this.vagas[i] == null) {
      this. vagas[i] = carro;
      this.vagasLivres--;
      break;
    }
  }
  
  return true;
}

public void retirar(Carro carro) {
  for (int i = 0; i < vagas.length; i++) {
    if (this.vagas[i].getPlaca().equals(carro.getPlaca())) {
      this.vagas[i] = null;
      this.vagasLivres++;
      break;
    }
  }
  
  
 
 
  
}

public void horarioValor() {
  Date data1 = new Date();
  Date data2 = new Date();
  SimpleDateFormat formatar = new SimpleDateFormat("k.m");
  setHora(formatar.format(data1));
  String horaSaida = (formatar.format(dataSaida));
 
  double valorTotal = ((Double.parseDouble(horaSaida) - Double.parseDouble(hora)) * 5);

}



public int vagasDisponiveis() {
  return this.vagasLivres;
  }

}

class Main {
    public static void main(String[] args) {
    Estacionamento est = new Estacionamento(12);
    Carro c[] = new Carro[] {
      new Carro("ABC-1234"),
      new Carro("QWE-1010"), 
      new Carro("ASD-5442"),
      new Carro("ARL-2421")
    };
    for (int i = 0; i < 4; i++) {
      est.estacionar(c[i]);
    }
    est.retirar(c[2]);

    
    est.horarioValor();

  }
}