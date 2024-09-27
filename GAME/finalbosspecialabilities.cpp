#include "finalbosspecialabilities.h"

void finalenemeyspecialability::groundslash()
{
	H->takedamage(E->getdamage() * 2);
	// here our  hero take 2 times of damage 
}

void finalenemeyspecialability::speedash()
{
	H->takedamage(E->getdamage() * 4);
	// this is a critical blow  for hero
}

void finalenemeyspecialability::healhregenration()
{
	if (E->gethealth() < E->getbasehealth()) {
		E->sethealth(E->getbasehealth());
	}
	else if (E->gethealth() >= E->getbasehealth()) {
		cout << "ENEMY HAS FULL HEALTH" << endl;
	   }
}
