//#include "attacklogic.h"
//#include"levels.h"
//
//
//
//
//
//
//attacklogic::attacklogic()
//{
//	H = new Hero(50, 10, 5, 10, 15, meletype::map);
//	E = new Enemy(40, 5, 5, 10);
//	speicalabilityoffinalenemy=  new finalenemeyspecialability();
//	L= new  levels() ;
//	specialabilityofhero= new specialability() ;
//}
//
//void attacklogic::mainattacklogic()
//{
//	while (H->gethealth() > 0 && E->gethealth() > 0) {
//
//		cin >> player_choice;
//		player_choice_char_made_upper_case = toupper(player_choice);
//		switch (player_choice_char_made_upper_case)
//		{
//		case 'A': {
//			E->takedamage(H->getdamage());
//			if (E->gethealth() <= 0) {
//				if (L->getlevel() == 1) {
//					L->forleveltwo();
//				}
//				else if (L->getlevel() == 2) {
//					L->forlevethree();
//				}
//				else if (L->getlevel() == 3) {
//					L->forlevelfour();
//				}
//				else if (L->getlevel() == 4) {
//					L->forlevelfive();
//				}
//				else if (L->getlevel() == 5) {
//					L->forlevelsix();
//				}
//			}
//			else {
//				cout << "THE HEALTH OF THE ENEMY IS " << E->gethealth() << endl;
//			}
//			break;
//		}
//
//		case 'H': {
//			H->gethealed();
//			cout << "NOW YOU GET HEALED " << H->gethealth();
//			break;
//		}
//
//		case 'D': {
//			H->dodefence(*E);
//			break;
//		}
//		case'M': {
//			if (L->getlevel() == 1 || L->getlevel() == 2) {
//				cout << "NO NO THERE IS NO WEAPON FOR THESE LEVEL" << endl;
//			}
//			else {
//				E->takedamage(H->getmeledamage());
//			}
//			break;
//		}
//		case 'S': {
//
//			if (L->getlevel() == 1) {
//				cout << "THERE IS NOTHING TO SHOW" << endl;
//			}
//			else if (L->getlevel() == 2) {
//				specialabilityofhero->spfortwo(*E);
//			}
//			else if (L->getlevel() == 3) {
//				specialabilityofhero->spforthree(*E);
//			}
//			else if (L->getlevel() == 4) {
//				specialabilityofhero->spforfour(*E);
//			}
//			else if (L->getlevel() == 5) {
//				specialabilityofhero->spforfive(*E);
//			}
//
//			break;
//		}
//		}
//
//		enemychoice = random_range(1, 4);
//
//		switch (enemychoice) {
//		case 1: {
//			H->takedamage(E->getdamage());
//			if (H->gethealth()==0) {
//				break;
//			}
//			else {
//				cout << "YOUR HEALTH IS " << H->gethealth();
//			}
//			break;
//		}
//		case 2:
//			E->dodefence(*H); {
//				cout << "LOOK ENEMY DEFEND THE ATTACK " << "THE HEALTH OF THE ENEMY IS " << E->gethealth();
//				break;
//			}
//		case 3:
//			E->gethealed(); {
//				cout << "ENEMY USED ITS HEALING " << "THE HEALTH  OF THE ENEMY IS " << E->gethealth();
//				break;
//			}
//		case 4:
//			if (L->getlevel() == 6) {
//				enemychoiceforspecialability = random_range(0, 3);
//				if (enemychoiceforspecialability == 1) {
//					speicalabilityoffinalenemy->groundslash();
//				}
//				else if (enemychoiceforspecialability == 2) {
//					speicalabilityoffinalenemy->healhregenration();
//				}
//				else if (enemychoiceforspecialability == 3) {
//					speicalabilityoffinalenemy->speedash();
//				}
//			}
//			else {
//				cout << "THERE IS NOTHING ENEMY CAN DO" << endl << endl;
//			}
//			}
//		
//	}
//	if (H->gethealth() == 0) {
//		if (L->getlevel() == 1) {
//			system("cls");
//			cout << "Restart the game from level one" << endl;
//			return ;
//			
//
//		}
//		else if (L->getlevel() == 2) {
//			system("cls");
//			return;
//			L->forleveltwo();
//		}
//		else if (L->getlevel() == 3) {
//			L->forlevethree();
//		}
//		else if (L->getlevel() == 4) {
//			L->forlevelfour();
//		}
//		else if (L->getlevel() == 5) {
//			L->forlevelfive();
//		}
//		else if (L->getlevel() == 6) {
//			L->forlevelsix();
//		}
//	}
//	else {
//		cout << "CONGRAGULATIONS $ SIGN YOU WON THE  AND GET ESCAPED FROM THE EMIJAY THANDI RECORDS";
//		
//	    
//	}
//}
//
//attacklogic::~attacklogic()
//{
//	delete H;
//	delete E;
//	delete L;
//	delete speicalabilityoffinalenemy;
//	delete specialabilityofhero;
//}
//
//
//
//
