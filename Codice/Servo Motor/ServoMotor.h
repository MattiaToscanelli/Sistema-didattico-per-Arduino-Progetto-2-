#ifndef ServoMotor_h
#define ServoMotor_h

#include "Arduino.h"

class ServoMotor {
	public:
		/**
		* Metodo costruttore che setta il pin di scrittura del valore
		* da inviare al ServoMotore.
		* @param Il pin di scrittura dove viene collegato il servo Motore.
		*/
		ServoMotor(int pin, int velocita);
		/**
		* Metodo che setta la velocità del motore. La velocità va da -100 a 100.
		* @param La velocità del motore.
		*/
		void setVelocita(int velocita);
		/**
		* Metodo che ritorna la posizione del motore. Va dalla posizione 0 alla posizione 180;
		* @return La posizione del motore.
		*/
		int getPosizione();
		/**
		* Metodo che avvia il servo motore.
		*/
		void startServo();
	private:
		/**
		* Il pin a cui è collegato il potenziometro secondo come viene
		* viene stailito nel Digispark.
		*/
		int _pin;
		/**
		* La posizione iniziale del servo motore (0 gradi).
		*/
		const int POS_INIZIALE = 544;
		/**
		* La posizione finale del servo motore (180 gradi).
		*/
		const int POS_FINALE = 2400;
		/*
		* La velocità di muovimento dell'elica.
		*/
		int _velocita;
		/*
		* La posizione del servo motore.
		*/
		int _posizione;
};

#endif