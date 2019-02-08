 #include "ServoMotore.h"

//Inizializza un oggetto di tipo ServoMotor di nome servoMotor.
ServoMotore* servoMotore;

//Inizializza la velocità iniziale del Servo Motore (in questo caso 1).
int i = 1;

void setup() {
  //Istanzia la variabile servoMotor assegnando il pin nelle parentesi (in questo caso il pin 3) e
  //dopo la virgola la velocità iniziale.
  servoMotore = new ServoMotore(3, i);
}

void loop() {
  //Verifica se il servo motore si trova a una posizione uguale o superiore di 180 gradi, se si entra nell'if.
  if(servoMotore->ottieniPosizione() >= 180){
    //Incrementa la velocità.
    i++;
    //Setta la nuova velocità al servoMotore in negativo (cosi torna indietro).
    servoMotore->settaVelocita(-i);
  //Verifica se il servo motore si trova a una posizione uguale o inferiore di 0 gradi, se si entra nell'else if.
  }else if(servoMotore->ottieniPosizione() <= 0){
    //Incrementa la velocità.
    i++;
    //Setta la nuova velocità al servoMotore in positivo (cosi va avanti).
    servoMotore->settaVelocita(i);
  }
  //Avvia il servo motore.
  servoMotore->avviaServo();
}
