#include "ServoMotor.h"

//Inizializza un oggetto di tipo Potenziometro di nome potenziometro.
ServoMotor* servoMotor;

int velocita = 20;

void setup() {
  //Istanzia la variabile servoMotor assegnando il pin nelle parentesi (in questo caso il pin 3) e
  //dopo la virgola la volecita iniziale.
  servoMotor = new ServoMotor(3, velocita);
}

void loop() {
  //Verifica se il servo motore si trova a una posizione uguale o supriore di 180 gradi, se si entra nell'if.
  if(servoMotor->getPosizione() >= 180){
     //Setta la velocità al servoMotore al negativo (cosi torna indietro).
    servoMotor->setVelocita(-velocita);
  //Verifica se il servo motore si trova a una posizione uguale o inferiore di 0 gradi, se si entra nell'else if.
  }else if(servoMotor->getPosizione() <= 0){
    //Setta la velocità al servoMotore in positivo (cosi va avanti).
    servoMotor->setVelocita(velocita);
  }
  //Avvia il servo motore.
  servoMotor->startServo();
}
