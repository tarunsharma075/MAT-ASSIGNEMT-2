#include "specialability.h"


void specialability::spfortwo(Player& target)
{
	int prob = rand()%2;
	static int count;

	if (prob == 1) {
		if (count <=10) {
			target.takedamage(h->getdamage()*3);

			count++;
		}
		else if(count > 10) {
			cout << "NO  BRO YOU CANT USE YOUR SPECIAL ABILITY" << endl;
		}
	}
	else if (prob == 0) {
		cout << "PLEASE TRY AGAIN IN  THE NEXT TURN" << endl;
	}

}

void specialability::spforthree(Player& target)
{
	int prob = rand() % 2;
	static int count;
	if (prob == 1) {
		if (count <= 10) {
			int current_health = h->gethealth();
			int new_health = current_health + target.getdamage();
			h->sethealth(new_health);
			count++;
		}
		else if (count > 10) {
			cout << "NOW  THE ABILITY IS OVER" << endl;
		}
	}
	else if (prob == 0) {
		cout << "TRY ON THE OTHER TURN NOW" << endl;
	}
	 
}

void specialability::spforfour(Player& target)
{
	target.takedamage(h->getdamage());
	h->sethealth(20);
}

void specialability::spforfive(Player& target)
{
	target.takedamage(random_range(10, 20));
	int new_health = h->gethealth()+target.getdamage();
	h->sethealth(new_health);

}



