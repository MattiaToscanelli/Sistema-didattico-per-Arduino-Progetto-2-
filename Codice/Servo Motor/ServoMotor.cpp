#include "Arduino.h"
#include "ServoMotor.h"

/**
* Metodo costruttore che setta il pin di scrittura del valore
* da inviare al ServoMotore.
* @param Il pin di scrittura dove viene collegato il servo Motore.
*/
ServoMotor::ServoMotor(int pin, int velocita)
{
	_pin = pin;
	_velocita = velocita;
	_posizione = POS_INIZIALE;
	pinMode(pin, OUTPUT);
}

/**
* Metodo che restituisce il valore letto dal potenziometro.
* @return Il valore letto dal potenziometro.
*/
void ServoMotor::setVelocita(int velocita)
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
* Metodo che ritorna la posizione del motore. Va dalla posizione 0 alla posizione 180;
* @return La posizione del motore.
*/
int ServoMotor::getPosizione()
{
	return map(_posizione, POS_INIZIALE, POS_FINALE, 0, 180);
}

/*
* Metodo che avvia il servo motore.
*/
void ServoMotor::startServo()
{
	_posizione += _velocita;
	digitalWrite(_pin, HIGH);
	delayMicroseconds(_posizione);
	digitalWrite(_pin, LOW);
	delay(20);
}