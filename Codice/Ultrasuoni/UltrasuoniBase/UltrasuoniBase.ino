#include "Ultrasuoni.h"

//Inizializza un oggetto di tipo Ultrasuoni di nome ultrasuoni.
Ultrasuoni* ultrasuoni;

//Viene inizializzato il pin trig del Ultrasuoni.
int trigPin = 2;
//Viene inizializzato il pin echo del Ultrasuoni.
int echoPin = 3;
//Viene inizializzato il pin trig del led.
int ledPin = 0;

void setup() {
  //Istanzia la variabile ultrasuoni assegnando il pin di echo come primo valore nelle parentesi e il pin
  //di trig come secondo valore delle parentesi
  ultrasuoni = new Ultrasuoni(echoPin, trigPin);
}
void loop() {
  //Viene letta la distanza dal sensore ultrasuoni.
  int distance = ultrasuoni->distanzaLetta();
  //Se la distanza è superiore di 50 cm entra nell'if.
  if(distance > 50){
    //Accende il led se la distanza letta dal sensore ultrasuoni è superiore di 50 cm.
    digitalWrite(ledPin, HIGH);
  }else{
    //Spegne il led se la distanza letta dal sensore ultrasuoni è inferiore di 50 cm.
    digitalWrite(ledPin, LOW);
  }
}
