#ifndef Ultrasuoni_h
#define Ultrasuoni_h

#include "Arduino.h"

class Ultrasuoni {
	public:
		/**
		* Metodo costruttore che setta il pin di trig e il pin di echo
		* del sensore ultrasuoni.
		* @param echo Il pin di echo del sensore ultrasuoni.
		* @param trig Il pin di trig del sensore ultrasuoni,
		*/
		Ultrasuoni(int echo, int trig);
		/**
		* Metodo che restituisce la distanza in centimetri letta dal sensore.
		* @return Il valore letto dal sensore ultrasuoni.
		*/
		int distanzaLetta();
	private:
		/**
		* Il pin a cui è collegato il trig.
		*/
		int _echo;
		/**
		* Il pin a cui è collegato il trig.
		*/
		int _trig;
};

#endif