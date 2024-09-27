#pragma once
#ifndef HERO_H
#define HERO_H

#include"Player.h"
class Hero :public Player {
private:
	int max_health;
public:
	Hero();
	Hero(int health_of_hero, int damage_of_mele, int value_of_the_defence, int value_of_the_healing, int damage_by_hero, meletype weapon_at_current_level);
	
	void takedamage(int damage_by_hero) override;
	void sethealth(int value_of_the_new_health) override;
	int gethealth();
	meletype gettypemele();
    void setmeledamage(int value_of_the_damage_by_weapon);
	int getmeledamage()  ;
	int getdefence()  override;
	int getdamage() override;
	int getheal() override;
	void gethealed()override;
	void dodefence(Player& target) override;
	int getbasehealth();
	void setvalueofdefence(int value_of_defence_at_partiuclar_level) override;
	void setvalueofhealing(int value_of_heal_at_partiuclar_level) override;
	void setvalueofdamage(int value_of_damage_at_partiuclar_level)override;
	void setweapon(meletype weapon_of_particular_level);
	// so this function is used to print weapon
	// as meletype is enum to get the weapon at particular level
	// we returning the name of the weapon from the enum class
	string meletypeToString(meletype type);
	~Hero();
};

#endif