#include "Ultrasuoni.h"

//Inizializza un oggetto di tipo Ultrasuoni di nome ultrasuoni.
Ultrasuoni* ultrasuoni;

//Viene inizializzata il pin trig del Ultrasuoni.
int trigPin = 2;
//Viene inizializzata il pin trig del Ultrasuoni.
int echoPin = 3;
//Viene inizializzata il pin trig del led.
int ledPin = 0;

void setup() {
  //Istanzia la variabile ultrasuoni assegnando il pin di echo come primo valore nelle parentesi e il pin
  //di trig come secibdi valore delle parentesi
  ultrasuoni = new Ultrasuoni(echoPin, trigPin);
}
void loop() {
  //Viene letta la distanza distanza dal sensore ultrasioni.
  int distance = ultrasuoni->distanzaLetta();
  //Se la distanza è superiore a 10 cm entra nell'if.
  if(distance > 10){
    //Accende il led con l'intesità direttamente proporzionale al valore letto dal sensore ultrasuoni.
    analogWrite(ledPin, distance-10);
  }
}
