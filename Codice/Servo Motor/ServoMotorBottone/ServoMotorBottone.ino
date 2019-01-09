#include "ServoMotor.h"

//Inizializza un oggetto di tipo Potenziometro di nome potenziometro.
ServoMotor* servoMotor;

//Viene inizializzata la velocita che in seguito verrà settata al Servo Motore.
int velocita = 100;

//Viene iniziazzata la variabile che verificherà che il bottone è stato premuto o no.
int val = 0;

//Viene inizalizzata la variabile che specifica il pin del bottone.
int bottone = 4;

void setup() {
  //Istanzia la variabile servoMotor assegnando il pin nelle parentesi (in questo caso il pin 3) e
  //dopo la virgola la volecita iniziale.
  servoMotor = new ServoMotor(3, velocita);
  //Viene specificato che il pin del bottone è di tipo lettura (input).
  pinMode(bottone, INPUT); 
}

void loop() {
  //Legge il valore del bottone. (Se premuto torna HIGH se no LOW)
  val = digitalRead(bottone);
  //Se il bottone è premuto e la posizione del Servo Motore è superiore o uguale a 0 entra nell'if.
  if (val == LOW && servoMotor->getPosizione() >= 0) {
    //Setta la velocità al servoMotore in negativo (cosi torna indietro).
    servoMotor->setVelocita(-velocita);
    //Avvia il servo motore.
    servoMotor->startServo();
  //Se il bottone non è premuto e la posizione del Servo Motore è inferiore o uguale a 180 entra nell'else if.
  }else if (val == HIGH && servoMotor->getPosizione() <= 180) {
    //Setta la velocità al servoMotore in positivo (cosi va avanti).
    servoMotor->setVelocita(velocita);
    //Avvia il servo motore.
    servoMotor->startServo();
  }
}
