#include "Ultrasuoni.h"

//Inizializza un oggetto di tipo Ultrasuoni di nome ultrasuoni.
Ultrasuoni* ultrasuoni;

//Viene inizializzato il pin trig del Ultrasuoni.
int trigPin = 2;
//Viene inizializzato il pin trig del Ultrasuoni.
int echoPin = 3;
//Viene inizializzato il pin del led.
int led = 0;

void setup() {
  //Istanzia la variabile ultrasuoni assegnando il pin di echo come primo valore nelle parentesi e il pin
  //di trig come secibdi valore delle parentesi
  ultrasuoni = new Ultrasuoni(echoPin, trigPin);
  //Viene specificato che il pin del bottone è di tipo scrittura (output).
  pinMode(led, OUTPUT);
}
void loop() {
  //Fa una pausa in millisecondi corrispondente alla distanza in centimetri moltiplicata per due.
  delay(ultrasuoni->distanzaLetta()*2);
  //Accende il led.
  digitalWrite(led, HIGH);
  //Fa una pausa in millisecondi corrispondente alla distanza in centimetri moltiplicata per due.
  delay(ultrasuoni->distanzaLetta()*2);
  //Spegne il led.
  digitalWrite(led, LOW);
}
