#include "gameflow.h"

Gameflow::Gameflow()
{
	l= new levels();
}


void Gameflow::maingame()
{
	l->staringgame();
}

Gameflow::~Gameflow()
{
	delete l;
}
