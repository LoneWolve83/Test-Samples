//=======================================================
//====		   Hack n Stab			         ============
//====		   Daniel Milliken				 ============
//====		   AI Programming				 ============
//=======================================================
#ifndef ENEMYAI_H
#define ENEMYAI_H
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

class EnemyAI
{
public: // public declarations
	 int enemyAttack();
	 EnemyAI();
	 void setHealth(int num);
	 int getHealth();

private:// private declarations
	 int m_amountOfLives;
	 int m_choice;
	 int m_health;
	 int m_attack;
	 bool full;
	 bool half;
	 bool quarter;
};
#endif