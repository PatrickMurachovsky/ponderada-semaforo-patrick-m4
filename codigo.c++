class Semaforo {
  private:
    int pinoVerde;
    int pinoVermelho;
    int pinoAmarelo;

  public:
    Semaforo(int verde, int vermelho, int amarelo)
      : pinoVerde(verde), pinoVermelho(vermelho), pinoAmarelo(amarelo) {}

    void iniciar() {
      pinMode(pinoVerde, OUTPUT);
      pinMode(pinoVermelho, OUTPUT);
      pinMode(pinoAmarelo, OUTPUT);
      digitalWrite(pinoVerde, LOW);
      digitalWrite(pinoVermelho, LOW);
      digitalWrite(pinoAmarelo, LOW);
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

Semaforo* semaforo = nullptr;

void setup() {
  semaforo = new Semaforo(6, 7, 8); 
  semaforo->iniciar();
}

void loop() {
  if (semaforo != nullptr) {
    semaforo->cicloCompleto();
  }
}



