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
  //Legge il valore del potenziometro da 0 a 255.
  int valore = potenziometro->valoreLetto();
  //Se il valore è minore di 128 entra nell if se no nell'else.
  if(valore < 128){
    //Scrive nel LED il valore moltiplicato per 2. (Così a meta corsa il LED è acceso al massimo)
    analogWrite(led,valore*2);
  }else{
    //Scrive nel LED il valore massimo moltiplicato per 2 meno il valore letto moltiplicato per 2 (Così a meta corsa il LED incomincia a spegnersi)
    analogWrite(led,(255*2)-(valore*2));
  }
}
