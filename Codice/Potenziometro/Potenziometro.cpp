#include "Arduino.h"
#include "Potenziometro.h"

/**
* Metodo costruttore che setta il pin di lettura del valore
* del potenziometro in base ai pin analogici di Digispark.
* (P2 = 1, P3 = 3, P4 = 2, P5 = 0)
* @param pin Il pin di lettura a cui il potenziometro è collegato;
*/
Potenziometro::Potenziometro(int pin)
{
  if(pin == 2){
    _pin = 1;
  }else if(pin == 4){
    _pin = 2;
  }else if(pin == 5){
    _pin = 0;
  }else{
    _pin = 3;
  }
}

/**
* Metodo che restituisce il valore letto dal potenziometro.
* @return Il valore letto dal potenziometro.
*/
int Potenziometro::valoreLetto()
{
  int sensorValue = analogRead(_pin);
  sensorValue = sensorValue/4;
  return sensorValue;
}