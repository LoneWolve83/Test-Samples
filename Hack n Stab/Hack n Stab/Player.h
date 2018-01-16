//=======================================================
//====		   Hack n Stab			         ============
//====		   Daniel Milliken				 ============
//====		   AI Programming				 ============
//=======================================================
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
class Player
{
public: //public declarations
	 int playerAttack();
	 Player();
	 void setHealth(int num);
	 int getHealth();

private: // private declarations
	 int m_amountOfLives;
	 int m_playerHealth;
	 int m_playerChoice;
	 int m_playerAttack;

};
#endif