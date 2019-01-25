#include "Arduino.h"
#include "ServoMotore.h"

/**
* Metodo costruttore che setta il pin di scrittura del valore
* da inviare al ServoMotore.
* @param Il pin di scrittura dove viene collegato il ServoMotore.
*/
ServoMotore::ServoMotore(int pin, int velocita)
{
	_pin = pin;
	_velocita = velocita;
	_posizione = POS_MINIMA;
	pinMode(pin, OUTPUT);
}

/**
* Metodo che ritorna la posizione del ServoMotore. Va dalla posizione 0 alla posizione 180;
* @return La posizione del ServoMotore.
*/
void ServoMotore::settaVelocita(int velocita)
{
	if (velocita <= -100)
	{
		_velocita = -100;
	}
	else if (velocita >= 100)
	{
		_velocita = 100;
	}
	else
	{
		_velocita = velocita;
	}
}

/**
* Metodo che ritorna la posizione del ServoMotore. Va dalla posizione 0 alla posizione 180;
* @return La posizione del ServoMotore.
*/
int ServoMotore::ottieniPosizione()
{
	return map(_posizione, POS_MINIMA, POS_MASSIMA, 0, 180);
}

/*
* Metodo che avvia il ServoMotore.
*/
void ServoMotore::avviaServo()
{
	_posizione += _velocita;
	digitalWrite(_pin, HIGH);
	delayMicroseconds(_posizione);
	digitalWrite(_pin, LOW);
	delay(20);
}