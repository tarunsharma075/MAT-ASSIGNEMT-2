#ifndef LEVELS_H
#define LEVELS_H
#pragma once

#include "Hero.h"
#include "Enemy.h"
#include<iostream>
#include "finalbosspecialabilities.h"
#include "specialability.h"
#include <cstdlib> 




class levels {
private:
    Hero* H;
    Enemy* E;
    int level = 1;
    finalenemeyspecialability* speicalabilityoffinalenemy;
    specialability* specialabilityofhero;
    void setlevel(int current_level);
    int enemychoice;
    int enemychoiceforspecialability; // for enemy to choose between different special abilities of enemy i
public:
    levels();
    char player_choice;
   char player_choice_char_made_upper_case;
    void staringgame();
    void forleveltwo();
    void forlevethree();
    void forlevelfour();
    void forlevelfive();
    void forlevelsix();
    void mainattacklogic();
    int getlevel();
    ~levels();
};

#endif
