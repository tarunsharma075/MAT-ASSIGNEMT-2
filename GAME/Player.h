#pragma once
#include <cstdlib>
#ifndef PLAYER_H
#define PLAYER_H
#include<string>
using namespace std;
// this function is used to get a random number
// between a random range
int random_range(int min, int max);
// mele is the weapon used the player
// after completion of each level
// the player will get or rewarded with the new weapon or mele
enum  class meletype {
	sword,
	shield,
	armour,
	bow,
	map,
	none,

};


class Player {

protected:
	int health=0;
	int mele_damage=0;
	int defence=0;
	int heal=0;
	int damage=0;
	meletype current_weapon=meletype::none;

public:
	Player();
	//this constructor is made for the hero
	Player(int health_Of_The_Player, int Damage_of_mele, int value_of_the_defence, int value_of_the_healing, int damage_by_player, meletype weapon_at_current_level) {
		health = health_Of_The_Player;
		mele_damage = Damage_of_mele;
		//ranged_damage = rd; we dont need random damage cause
		//its a constructor for the Hero 
		defence = value_of_the_defence;
		heal = value_of_the_healing;
		damage = damage_by_player;
		current_weapon = weapon_at_current_level;
	}


	// this contructor is for enemy
	Player(int health_of_the_enemy, int value_of_defence_for_enemy, int value_of_the_healing, int damage_by_enemy) {
		health = health_of_the_enemy;
		defence = value_of_defence_for_enemy;
		heal = value_of_the_healing;
		damage = damage_by_enemy;


	}

// this function is for take the damage from the other entity
virtual void takedamage(int value_of_the_damage) = 0;
// to get the value of the damage our hero/enemy can give;
virtual int getdamage() = 0;
// this function is for setting the value of the health
// used in where player take damage 
// mostly there is some change in health
virtual void sethealth(int ah) =0;
// this is  get the value of the health in particular moment 
virtual int gethealth() = 0;
// to check which mele(weapon) are hero is currrently have
virtual meletype gettypemele();
// this function is to set the damage by mele(weapons)
// different mele have different damage amount
virtual void setmeledamage(int damage_by_mele);
// get the amount of the damage of mele we are having at any point
virtual int getmeledamage();
// to set the defence of the enemy/hero
// the defence our hero/enemy have at that particular level
 virtual int getdefence();
 // these below function before dodefence is used to set values of attributes at different levels

 virtual void setvalueofdefence(int value_of_defence_at_partiuclar_level) = 0;
 virtual void setvalueofhealing(int value_of_heal_at_partiuclar_level) = 0;
 virtual void setvalueofdamage(int value_of_damage_at_partiuclar_level) = 0;
 //this is hero class specific function but for ease of finding
 // i declare the function here so we can find it easily here
 virtual void setweapon(meletype  weapon_of_particular_level);

virtual void dodefence(Player& target) = 0;
virtual int getheal();
// get healed
virtual  void gethealed() = 0;
virtual ~Player();
};
#endif;