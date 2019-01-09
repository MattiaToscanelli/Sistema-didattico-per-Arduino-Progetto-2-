#include "ServoMotor.h"

//Inizializza un oggetto di tipo ServoMotor di nome servoMotor.
ServoMotor* servoMotor;

//Inizializza la velocità iniziale del Servo Motore (in questo caso 1).
int i = 1;

void setup() {
  //Istanzia la variabile servoMotor assegnando il pin nelle parentesi (in questo caso il pin 3) e
  //dopo la virgola la volecita iniziale.
  servoMotor = new ServoMotor(3, i);
}

void loop() {
  //Verifica se il servo motore si trova a una posizione uguale o supriore di 180 gradi, se si entra nell'if.
  if(servoMotor->getPosizione() >= 180){
    //Incrementa la velocità.
    i++;
    //Setta la nuova velocità al servoMotore in negativo (cosi torna indietro).
    servoMotor->setVelocita(-i);
  //Verifica se il servo motore si trova a una posizione uguale o inferiore di 0 gradi, se si entra nell'else if.
  }else if(servoMotor->getPosizione() <= 0){
    //Incrementa la velocità.
    i++;
    //Setta la nuova velocità al servoMotore in positivo (cosi va avanti).
    servoMotor->setVelocita(i);
  }
  //Avvia il servo motore.
  servoMotor->startServo();
}
