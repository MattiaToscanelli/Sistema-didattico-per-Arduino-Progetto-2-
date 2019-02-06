#include "Potenziometro.h"

//Inizializza un oggetto di tipo Potenziometro di nome potenziometro.
Potenziometro* potenziometro;

int led = 0;

void setup() {
  //Istanzia la variabile potenziometro assegnando la porta analogica all'interno delle parentesi. (in questo caso 2)
  potenziometro = new Potenziometro(2);
  pinMode(led, OUTPUT);
}

void loop() {
  //Scrive sul LED il valore letto dal potenziometro.
  analogWrite(led, potenziometro->valoreLetto());
}
