# ponderada-semaforo-patrick-m4


**Descrição:**
 - 

 - Este projeto consiste em um semáforo construido com apenas três LEDs, sendo um Verde, Amarelo e um Vermelho. Esse sistema e controlado por um ARDUÍNO UNO. 
- Para a modelagem do semaforo, foi utilizado peças de madeira, para construir esse simples modelo representativo de um semaforo.

**Lista de componentes utilizados**:
 - 
 - Um Arduíno UNO
 - Três resistores ômicos
 - Quatro Jumpers Machos
 - Três Jumpers Fêmeas
 - Três LEDs, sendo um verde um amarelo e um vermelho
 - Suporte de madeira para a construção do semáforo

## Codigo Utilizado

````c++
class Semaforo {
  private:
    int pinoVerde;
    int pinoVermelho;
    int pinoAmarelo;

  public:
    Semaforo(int verde, int vermelho, int amarelo) {
      pinoVerde = verde;
      pinoVermelho = vermelho;
      pinoAmarelo = amarelo;
    }

    void iniciar() {
      pinMode(pinoVerde, OUTPUT);
      pinMode(pinoVermelho, OUTPUT);
      pinMode(pinoAmarelo, OUTPUT);
    }

    void ligarVermelho(int tempo) {
      digitalWrite(pinoVermelho, HIGH);
      delay(tempo);
      digitalWrite(pinoVermelho, LOW);
    }

    void ligarVerde(int tempo) {
      digitalWrite(pinoVerde, HIGH);
      delay(tempo);
      digitalWrite(pinoVerde, LOW);
    }

    void ligarAmarelo(int tempo) {
      digitalWrite(pinoAmarelo, HIGH);
      delay(tempo);
      digitalWrite(pinoAmarelo, LOW);
    }

    void cicloCompleto() {
      ligarVermelho(6000);  
      ligarVerde(4000);     
      ligarAmarelo(2000);   
    }
};

Semaforo semaforo(6, 7, 8);

void setup() {
  semaforo.iniciar();
}

void loop() {
  semaforo.cicloCompleto();
}
