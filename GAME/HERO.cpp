#include "HERO.h"


Hero::Hero()
{
}

Hero::Hero(int health_of_hero, int damage_of_mele, int value_of_the_defnence, int value_of_the_healing, int damage_by_hero, meletype weapon_at_current_level) :Player(health_of_hero, damage_of_mele, value_of_the_defnence, value_of_the_healing, damage_by_hero, weapon_at_current_level)
{
	max_health = health;
}


void Hero::takedamage(int damage_by_hero)  {
	health -= damage_by_hero;
	int new_health = health;
	sethealth(new_health);
}

void  Hero::sethealth(int value_of_the_new_health) {
	health = value_of_the_new_health;
}
int Hero::gethealth() {
	return health;
}

meletype  Hero::gettypemele() {
return current_weapon ;
}
void  Hero::setmeledamage(int value_of_the_damage_by_weapon) {
	mele_damage = value_of_the_damage_by_weapon;
}
int  Hero::getmeledamage() {
	return mele_damage;
}

int Hero::getdefence() {
	return defence;
}

int Hero::getdamage()
{
	return damage;
}

int Hero::getheal()
{
	return heal;
}

void Hero::gethealed()
{

		int new_health = health + heal;
		if (new_health >= max_health) {
		health = max_health;
		}
	else {
			health = new_health;
		}
	

}

void Hero::dodefence(Player &target)
{
	sethealth(target.getdamage() - getdefence());
}

int Hero::getbasehealth()
{
	return max_health;
}

void Hero::setvalueofdefence(int value_of_defence_at_partiuclar_level)
{
	defence = value_of_defence_at_partiuclar_level;
}

void Hero::setvalueofhealing(int value_of_heal_at_partiuclar_level)
{
	heal = value_of_heal_at_partiuclar_level;
}

void Hero::setvalueofdamage(int value_of_damage_at_partiuclar_level)
{
	damage = value_of_damage_at_partiuclar_level;
}

void Hero::setweapon(meletype weapon_of_particular_level)
{
	current_weapon = weapon_of_particular_level;
	
}

string Hero::meletypeToString(meletype type)
{
switch (type) {
case meletype::map: return "Map";
case meletype::sword: return "Sword";
case meletype::shield: return "Shield";
case meletype::armour: return "Armour";
case meletype::bow: return "Bow";
default: return "NONE";
}
	
}

Hero::~Hero()
{
}
