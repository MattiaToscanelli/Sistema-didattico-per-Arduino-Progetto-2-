#ifndef ServoMotore_h
#define ServoMotore_h

#include "Arduino.h"

class ServoMotore {
	public:
		/**
		* Metodo costruttore che setta il pin di scrittura del valore
		* da inviare al ServoMotore.
		* @param Il pin di scrittura dove viene collegato il ServoMotore.
		*/
		ServoMotore(int pin, int velocita);
		/**
		* Metodo che setta la velocità del ServoMotore. La velocità va da -100 a 100.
		* @param La velocità del ServoMotore.
		*/
		void settaVelocita(int velocita);
		/**
		* Metodo che ritorna la posizione del ServoMotore. Va dalla posizione 0 alla posizione 180;
		* @return La posizione del ServoMotore.
		*/
		int ottieniPosizione();
		/**
		* Metodo che avvia il ServoMotore.
		*/
		void avviaServo();
	private:
		/**
		* Il pin a cui è collegato il terminale di lettura del ServoMotore.
		*/
		int _pin;
		/**
		* La posizione minima del ServoMotore (0 gradi).
		*/
		const int POS_MINIMA = 544;
		/**
		* La posizione massima del ServoMotore (180 gradi).
		*/
		const int POS_MASSIMA = 2400;
		/*
		* La velocità di muovimento dell'elica.
		*/
		int _velocita;
		/*
		* La posizione del sServoMotore.
		*/
		int _posizione;
};

#endif