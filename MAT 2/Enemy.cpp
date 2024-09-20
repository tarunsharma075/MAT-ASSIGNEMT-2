#include "Enemy.h"


Enemy::Enemy()
{
	
}

Enemy::Enemy(int health_of_enemy, int value_of_defence_of_enemy, int value_of_healing_of_enemy, int damage_by_enemy):Player(health_of_enemy, value_of_defence_of_enemy, value_of_healing_of_enemy, damage_by_enemy)
{
	base_health = health;
}



void Enemy::takedamage(int dt)
{
	int new_health;
	health -= dt;
	new_health = health;
	sethealth(new_health);
}

void Enemy::sethealth(int ah)
{
	health = ah;
  
}

int Enemy::gethealth()
{
	return health;
}



int Enemy::getdefence()
{
	return defence;
}






int Enemy::getdamage()
{
	return damage;
}

int Enemy::getheal()
{
	return heal;
}

void Enemy::gethealed()
{
	int new_health = health + heal;
	if (new_health >= base_health) {
		health = base_health;
	}
	else {
		health = new_health;
	}

}

void Enemy::dodefence(Player& target)
{
	sethealth(target.getdamage() - getdefence());
}

int Enemy::getbasehealth()
{
	return 	base_health;
}

void Enemy::setvalueofdefence(int value_of_defence_at_partiuclar_level)
{
	defence = value_of_defence_at_partiuclar_level;
}

void Enemy::setvalueofhealing(int value_of_heal_at_partiuclar_level)
{
	heal = value_of_heal_at_partiuclar_level;
}

void Enemy::setvalueofdamage(int value_of_damage_at_partiuclar_level)
{
	damage = value_of_damage_at_partiuclar_level;

}
