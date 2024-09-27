#include "Player.h"

//most of the definition here are empty cause i dont want base class definition
// reason is that the function are going to use by particular 
// for ease of finding and maintain a structure declared in the base class

int  random_range(int min, int max)
{
	return min + rand() % (max - min+1);
}

Player::Player()
{
}





meletype Player::gettypemele()
{
	return meletype();
}

void Player::setmeledamage(int md)
{
	// class specific do nothing here
}

int Player::getmeledamage()
{
	return 0;
}


int Player::getdefence()
{
	return 0;
}

//void Player::setrangeddamage(int ra)
//{
//	// class specific do nothing here
//}
//
//int Player::getrangeddamage()
//{
//	return 0;
//}

void Player::setweapon(meletype weapon_at_particular_level)
{
}

int Player::getheal()
{
	return 0;
}

Player::~Player()
{
}
