#include "Arduino.h"
#include "Ultrasuoni.h"

/**
* Metodo costruttore che setta il pin di trig e il pin di echo
* del sensore ultrasuoni.
* @param echo Il pin di echo del sensore ultrasuoni.
* @param trig Il pin di trig del sensore ultrasuoni,
*/
Ultrasuoni::Ultrasuoni(int echo, int trig)
{
	_echo = echo;
	_trig = trig;
	pinMode(_trig, OUTPUT);
	pinMode(_echo, INPUT);
}

/**
* Metodo che restituisce la distanza in centimetri letta dal sensore.
* @return Il valore letto dal sensore ultrasuoni.
*/
int Ultrasuoni::distanza()
{
	digitalWrite(_trig, LOW);
	delayMicroseconds(2);
	digitalWrite(_trig, HIGH);
	delayMicroseconds(10);
	digitalWrite(_trig, LOW);
	long duration = pulseIn(_echo, HIGH);
	return (duration * 0.034 / 2);

}