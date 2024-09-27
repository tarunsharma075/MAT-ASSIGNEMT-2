
#pragma once
#ifndef ENEMY_H
#define ENEMY_H
#include"Player.h"

class Enemy:public Player {


private:
	int base_health;
public:
	Enemy();
	Enemy(int health_of_enemy, int value_of_defence_of_enemy, int value_of_healing_of_enemy, int damage_by_enemy);

	void takedamage(int dt) override;
	void sethealth(int ah)override;
	int gethealth()override;
	int getdefence() override;
	int getdamage()override;
	int getheal() override;
	void gethealed() override;
	void dodefence(Player& target) override;
	int getbasehealth();
	void setvalueofdefence(int value_of_defence_at_partiuclar_level) override;
	void setvalueofhealing(int value_of_heal_at_partiuclar_level) override;
	void setvalueofdamage(int value_of_damage_at_partiuclar_level)override;
};




#endif