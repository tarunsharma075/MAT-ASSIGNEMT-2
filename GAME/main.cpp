#include"gameflow.h"
#include<cstdlib>
#include<ctime>


int main() {
	srand(static_cast<unsigned int>(time(0)));
	Gameflow* g1;
	g1 = new Gameflow();

	g1->maingame();
	return 0;
}