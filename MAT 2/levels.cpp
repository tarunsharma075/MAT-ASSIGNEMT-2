#include "levels.h"
#include"attacklogic.h"

void levels::setlevel(int current_level)
{
	level = current_level;
}

levels::levels()
{
	H = new Hero(50, 10, 5, 10, 15, meletype::map);
	E = new Enemy(40, 5, 5, 10);
	speicalabilityoffinalenemy=  new finalenemeyspecialability();
	specialabilityofhero= new specialability() ;
}






void levels::staringgame()

{  
	setlevel(1);

		cout << "Sab Kuch Mast" << endl;
		cout << "Sab Kuch 10 Pe 10," << endl;
		cout << "Ye Mange Smoke, Le Kash Pe Kash," << endl;
		cout << "Ye Bande Joke Hum Haste Buss" << endl << endl;
		cout << "WELCOME TO THE GAME HERE YOU ARE $ SIGN WHO IS KIDNAPPED BY EMIJAY" << endl;
		cout << "USE DIFFERENT TOOLS AND YOUR ABILITIES TO ESCAPE FROM THADNI REKORDS" << endl << endl;
		cout << "Now you are level 1 in this level will be one player" << endl << endl;
		 

		cout << "YOU CAN CHOOSE A FOR ATTACK" << endl;
		cout << "YOU CAN CHOOSE D  FOR DEFNECE" << endl;
		cout << "YOU CAN CHOOSE S  FOR SPECIALABILITY" << endl;
		cout << "YOU CAN CHOOSE M  FOR WEAPONATTACK" << endl;
	
		cout << "WARNING AT THERE ARE 6 LEVELS" << endl;
		cout << "TILL 5TH LEVEL NUMBER OF ENEMIES" << endl;
		cout << "THE NUMBER OF ENEMIES WILL ACC TO LEVELS" << endl;
		cout << " IF THE LEVEL IS TWO NUMBER OF ENEIMES WILL BE 2" << endl << endl;

		mainattacklogic();
		
}

void levels::forleveltwo()

{
	setlevel(2);
	H->sethealth(100);
	H->setmeledamage(0);
	H->setvalueofdefence(30);
	H->setvalueofhealing(20);
	H->setvalueofdamage(50);
	H->setweapon(meletype::map);
	E->sethealth(random_range(50, 80));
	E->setvalueofdefence(random_range(15,25));
	E->setvalueofhealing(random_range(10, 15));
	E->setvalueofdamage(random_range(20, 45));

	cout << "HAAN! RAKHTA KHUD KO SHAANT, KARTA MEDITATION" << endl;
	cout << "NO MONEY ON PROMOTION KYUN KI STRONG FOUNDATION" << endl;
	cout << "GAANA DEDH MINUTE KA BANA DUNGA, FUCK DURATION" << endl;
	cout << "17 MILLION MERE YOUTUBE PE, RAKHA MAI PATIENCE" << endl;
	cout << "SEEDHA DISS (SEEDHA DISS)" << endl;
	cout << "IT IS WHAT IT IS?" << endl << endl<<endl;
	mainattacklogic();

}

void levels::forlevethree()
{
	setlevel(3);
	H->sethealth(150);
	H->setmeledamage(50);
	H->setvalueofdefence(50);
	H->setvalueofhealing(30);
	H->setvalueofdamage(80);
	H->setweapon(meletype::sword);
	E->sethealth(random_range(80, 100));
	E->setvalueofdefence(random_range(25, 45));
	E->setvalueofhealing(random_range(15, 25));
	E->setvalueofdamage(random_range(45, 75));


	
			cout << "Baby why you looking at me doubtful" << endl;
			cout << "tumhare liye laru main jitna bhi chaho tum" << endl;
			cout << "rakho vishvas rakho thoda doubt kam" << endl;
			cout << "diye bina chance how you ever know the outcome" << endl;
			cout << "yeh le inhe bhi" << endl << endl;
			mainattacklogic();
		
}

void levels::forlevelfour()
{
	setlevel(4);
	H->sethealth(200);
	H->setmeledamage(0);
	H->setvalueofdefence(100);
	H->setvalueofhealing(50);
	H->setvalueofdamage(100);
	H->setweapon(meletype::shield);// this mele/weapon make dosnt attack but increase the value of defence
	E->sethealth(random_range(100, 150));
	E->setvalueofdefence(random_range(50, 75));
	E->setvalueofhealing(random_range(25, 50));
	E->setvalueofdamage(random_range(75, 100));


	cout << "Tu jinna naal compare kare" << endl;
	cout << "Saade level de ni haan diye" << endl;
	cout << "Marhi janani wangu ni" << endl;
	cout << "Tu jinna naal compare kare" << endl;
	cout << "Saade level de ni haan diye" << endl << endl;
	mainattacklogic();
}

void levels::forlevelfive()
{


	setlevel(5);
	H->sethealth(210);
	H->setmeledamage(0);
	H->setvalueofdefence(125);
	H->setvalueofhealing(80);
	H->setvalueofdamage(150);
	H->setweapon(meletype::armour);
	E->sethealth(random_range(150, 175));
	E->setvalueofdefence(random_range(75, 100));
	E->setvalueofhealing(random_range(50, 75));
	E->setvalueofdamage(random_range(100, 125));

	cout << " Kaffi kar li kamayi kaafi mitraan ne udaa li" << endl;
    cout << "Thode humble aa rakane lembo nivi karwa li" << endl;
	cout << "Nave shora to rakane gaddi chaldi ni sidhi" << endl;
	cout << "La da meech ke ankhan nu back ganne di traali" <<endl << endl;
	mainattacklogic();

}

void levels::forlevelsix()

{

	setlevel(6);
	H->sethealth(250);
	H->setmeledamage(150);
	H->setvalueofdefence(125);
	H->setvalueofhealing(100);
	H->setvalueofdamage(150);
	H->setweapon(meletype::bow);
	E->sethealth(300);
	E->setvalueofdefence(80);
	E->setvalueofhealing(100);
	E->setvalueofdamage(150);


	cout << "WELCOME DOLLAR ITS THE FINAL SHOWDOWN HAA..HAA.. EMIJAY WILL EAT YOU AND TEAR YOU APART" << endl << endl;
	cout << "BANTAI KO LAGELI BHOOK CHUP TERI M** K* *H**T" << endl << endl;
	cout << "Maap baap ke baare mein bolega" << endl;
	cout << "Ise lag ra yeh maar ni khayega" << endl;
	cout << "Address hai tera mere paas" << endl;
	cout << "Agar main aaunga bhaag ni paayega na" << endl << endl;

	mainattacklogic();
}
//  sir i know i can make the  this in a different class
// i tried you can see a file name attacklogic 
// first the make all this in that file 
// but i get an error regarding read access voliation
// i tried my best to resolve the issue till 2 days
// so make the function inside this file 
//
void levels::mainattacklogic()
{while (H->gethealth() > 0 && E->gethealth() > 0) {

		cin >> player_choice;
		player_choice_char_made_upper_case = toupper(player_choice);
		switch (player_choice_char_made_upper_case)
		{
		case 'A': {
			E->takedamage(H->getdamage());
			if (E->gethealth() <= 0) {
				if (getlevel() == 1) {
					system("cls");
					return 
					forleveltwo();
				}
				else if (getlevel() == 2) {
					system("cls");
					return
					forlevethree();
				}
				else if (getlevel() == 3) {
					system("cls");
					return
					forlevelfour();
				}
				else if (getlevel() == 4) {
					system("cls");
					return
					forlevelfive();
				}
				else if (getlevel() == 5) {
					system("cls");
					return
					forlevelsix();
				}
			}
			else {
				cout << "THE HEALTH OF THE ENEMY IS " << E->gethealth() << endl;
			}
			break;
		}

		case 'H': {
			H->gethealed();
			cout << "NOW YOU GET HEALED " << H->gethealth();
			break;
		}

		case 'D': {
			H->dodefence(*E);
			break;
		}
		case'M': {
			if (getlevel() == 1 || getlevel() == 2) {
				cout << "NO NO THERE IS NO WEAPON FOR THESE LEVEL" << endl;
			}
			else {
				E->takedamage(H->getmeledamage());
			}
			break;
		}
		case 'S': {

			if (getlevel() == 1) {
				cout << "THERE IS NOTHING TO SHOW" << endl;
			}
			else if (getlevel() == 2) {
				specialabilityofhero->spfortwo(*E);
			}
			else if (getlevel() == 3) {
				specialabilityofhero->spforthree(*E);
			}
			else if (getlevel() == 4) {
				specialabilityofhero->spforfour(*E);
			}
			else if (getlevel() == 5) {
				specialabilityofhero->spforfive(*E);
			}

			break;
		}
		}

		enemychoice = random_range(1, 4);

		switch (enemychoice) {
		case 1: {
			H->takedamage(E->getdamage());
			if (H->gethealth()==0) {
				break;
			}
			else {
				cout << "YOUR HEALTH IS " << H->gethealth()<<endl;
			}
			break;
		}
		case 2:
			E->dodefence(*H); {
				cout << "LOOK ENEMY DEFEND THE ATTACK " << "THE HEALTH OF THE ENEMY IS " << E->gethealth()<<endl;
				break;
			}
		case 3:
			E->gethealed(); {
				cout << "ENEMY USED ITS HEALING " << "THE HEALTH  OF THE ENEMY IS " << E->gethealth()<<endl;
				break;
			}
		case 4:
			if (getlevel() == 6) {
				enemychoiceforspecialability = random_range(0, 3);
				if (enemychoiceforspecialability == 1) {
					speicalabilityoffinalenemy->groundslash();
				}
				else if (enemychoiceforspecialability == 2) {
					speicalabilityoffinalenemy->healhregenration();
				}
				else if (enemychoiceforspecialability == 3) {
					speicalabilityoffinalenemy->speedash();
				}
			}
			else {
				cout << "THERE IS NOTHING ENEMY CAN DO" << endl << endl;
			}
			}
		
	}
	if (H->gethealth() == 0) {
		if (getlevel() == 1) {
			system("cls");
			cout << "Restart the game from level one" << endl;
			return ;
			

		}
		else if (getlevel() == 2) {
			system("cls");
			return;
			forleveltwo();
		}
		else if (getlevel() == 3) {
			forlevethree();
		}
		else if (getlevel() == 4) {
			forlevelfour();
		}
		else if (getlevel() == 5) {
			forlevelfive();
		}
		else if (getlevel() == 6) {
			forlevelsix();
		}
	}
	else {
		cout << "CONGRAGULATIONS $ SIGN YOU WON THE  AND GET ESCAPED FROM THE EMIJAY THANDI RECORDS"<<endl;
		
	    
	}
}



int levels::getlevel()
{
	return level;
}

levels::~levels()

{
	delete H;
	delete E;
}
