#include "Potenziometro.h"

//Inizializza un oggetto di tipo Potenziometro di nome potenziometro.
Potenziometro* potenziometro;

int led = 0;

void setup() {
  //Istanzia la variabile potenziometro assegnado la porta analogica all'interno delle parentesi. (in questo caso 2)
  potenziometro = new Potenziometro(2);
  pinMode(led, OUTPUT);
}

void loop() {
  //Fa una pausa in milliseconsi del valre letto del potenziometro moltiplicata per due (0-255 * 2)
  delay(potenziometro->valoreLetto()*2);
  digitalWrite(led, HIGH);
  //Fa una pausa in milliseconsi del valre letto del potenziometro moltiplicata per due (0-255 * 2)
  delay(potenziometro->valoreLetto()*2);
  digitalWrite(led, LOW);
}
