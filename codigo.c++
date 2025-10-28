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
      ligarVermelho(4000);  
      ligarVerde(6000);     
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
