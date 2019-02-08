#include "ServoMotore.h"

//Inizializza un oggetto di tipo Potenziometro di nome potenziometro.
ServoMotore* servoMotore;

int velocita = 20;

void setup() {
  //Istanzia la variabile servoMotor assegnando il pin nelle parentesi (in questo caso il pin 3) e
  //dopo la virgola la volecita iniziale.
  servoMotore = new ServoMotore(3, velocita);
}

void loop() {
  //Verifica se il servo motore si trova a una posizione uguale o superiore di 180 gradi, se si entra nell'if.
  if(servoMotore->ottieniPosizione() >= 180){
     //Setta la velocità negativo al ServoMotore (cosi torna indietro).
    servoMotore->settaVelocita(-velocita);
  //Verifica se il servo motore si trova a una posizione uguale o inferiore di 0 gradi, se si entra nell'else if.
  }else if(servoMotore->ottieniPosizione() <= 0){
    //Setta la velocità al servoMotore in positivo (così va avanti).
    servoMotore->settaVelocita(velocita);
  }
  //Avvia il servo motore.
  servoMotore->avviaServo();
}
