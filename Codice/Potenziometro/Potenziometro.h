#ifndef Potenziometro_h
#define Potenziometro_h

#include "Arduino.h"

class Potenziometro{
  public:
    /**
    * Metodo costruttore che setta il pin di lettura del valore
    * del potenziometro in base ai pin analogici di Digispark.
    * (P2 = 1, P3 = 3, P4 = 2, P5 = 0)
    * @param Il pin di lettura a cui il potenziometro è collegato;
    */
    Potenziometro (int pin);
    /**
    * Metodo che restituisce il valore letto dal potenziometro.
    * @return Il valore letto dal potenziometro.
    */
    int valoreLetto();
  private:
    /**
    * Il pin a cui è collegato il potenziometro secondo come viene
    * viene stailito nel Digispark.
    */
    int _pin;
};

#endif