#pragma once
#include<iostream>
#include"HERO.h"// we need hero health to manipluate
#include"Enemy.h"// need base health of enemy for health regenreation
class finalenemeyspecialability {
	
private:
	Hero* H;
	Enemy* E;

 
public:
	void groundslash();
	void speedash();
	void healhregenration();


};