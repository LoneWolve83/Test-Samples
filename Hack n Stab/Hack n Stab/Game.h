//=======================================================
//====		   Hack n Stab			         ============
//====		   Daniel Milliken				 ============
//====		   AI Programming				 ============
//=======================================================
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "EnemyAI.h"
#include "Player.h"
#include "Menu.h"

using namespace std;


class Game
{
public:
	 void playGame();
	 Game();

private:
	 EnemyAI m_enemy;
	 Player m_player;
	 bool m_run;
	 int m_playerDamage;
	 int m_enemyDamage;
};
#endif