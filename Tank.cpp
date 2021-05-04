/*
    Tank.cpp
    Alan Getty
    CIS 150
    2019-12-07
    
    Functions for Tank class.
*/

#include "Tank.h"

int Tank::getId() const {return Id;} //An accessor function named getId. It takes no arguments and returns the ID
float Tank::getSpeed() const {return speed;} //An accessor function named getSpeed. It takes no arguments and returns the speed
int Tank::getAmmo() const {return ammo;} //An accessor function named getAmmo. It takes no arguments and returns the ammo.

void Tank::setId(int id) { //mutator function setId. 1 int argu sets ID. If argu < 0, ID = 0. If argu > 50,ID = 50. else set ID to argu
	if (id <0) {
	    id=0;
    } else if (id > 50) {
	    id=50;
	}
    Id=id;
	
}
void Tank::setSpeed(float sp) {
	if (sp<0.0) {
	    sp=0.0;
	} else if (sp>60) {
	    sp=60;
	}
	speed=sp;
}
 void Tank::setAmmo(int am) {
	if (am<0.0) {
	    am=0.0;
	} else if (am>40) {
	    am=40;
	}
	ammo=am;
}
Tank::Tank() { //A public default constructor sets all instance variables to 0 using mutator functions.
    setId(0);
    setSpeed(0.0);
    setAmmo(0);
}
Tank::Tank(int Id, float sp, int am) { //A public constructor that takes three arguments (an int, a float, and an int) for the three instance variables and sets them using the mutator functions.
    setId(Id);
    setSpeed(sp);
    setAmmo(am);
}
void Tank::increaseSpeed() { //A function named increaseSpeed. It takes no argument and tries to increase the speed by 3.5 using setSpeed to provide error checking
    setSpeed(getSpeed() + 3.5);
}
void Tank::decreaseSpeed() { //A function named decreaseSpeed. It takes no argument and tries to decrease the speed by 3.5 using setSpeed to provide error checking
    setSpeed(getSpeed() - 3.5);
}
void Tank::fire() { //A function named fire. It takes no argument and tries to decrease the ammo by 1 using setAmmo to provide error checking
    setAmmo(getAmmo() - 1);
}
void Tank::reload() { //A function named reload. It takes no argument and tries to increase the ammo by 5 using setAmmo to provide error checking
    setAmmo(getAmmo() + 5);
}
