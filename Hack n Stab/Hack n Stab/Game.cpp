//=======================================================
//====		   Hack n Stab	                 ============
//====		   Daniel Milliken				 ============
//====		   AI Programming				 ============
//=======================================================
#include "Game.h"

Game::Game() // game instance run function
{
	 m_run = true;
}

void Game::playGame() // set up this function with help of a friend to correctly work 
					  
{
	 m_player.setHealth(10);
	 m_enemy.setHealth(10);
	 
	 m_run = true;
	 do
	 {
		  m_playerDamage = m_player.playerAttack();
		  m_enemyDamage = m_enemy.enemyAttack();

		  if (m_playerDamage == 1 && m_enemyDamage == 1)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if (m_playerDamage == 0 && m_enemyDamage == 1)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if (m_playerDamage == 3 && m_enemyDamage == 1)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if (m_playerDamage == 1 && m_enemyDamage == 0)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if(m_playerDamage == 0 && m_enemyDamage == 0)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if (m_playerDamage == 0 && m_enemyDamage == 3)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if(m_playerDamage == 1 && m_enemyDamage == 3)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if (m_playerDamage == 3 && m_enemyDamage == 0)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
		  else if (m_playerDamage == 3 && m_enemyDamage == 3)
		  {
			   m_player.setHealth(m_player.getHealth() - m_enemyDamage);
			   m_enemy.setHealth(m_enemy.getHealth() - m_playerDamage);

			   cout << "Your health is: " << m_player.getHealth() << endl;
			   cout << "Your enemy's health is: " << m_enemy.getHealth() << endl;

			   if(m_player.getHealth() <= 0)
			   {			   
					if (m_enemy.getHealth() <= 0 && m_player.getHealth() <= 0)
					{
						 cout << "Game Is Tied" << endl;
						 m_run = false;
					}
					cout << "Game over" << endl;
					m_run = false;
			   }
			   else if (m_enemy.getHealth() <= 0)
			   {
					cout << "You win" << endl;
						 m_run = false;
			   }


		  }
	 }while(m_run);
}