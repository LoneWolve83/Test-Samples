//=======================================================
//====		   Hack n Stab			         ============
//====		   Daniel Milliken				 ============
//====		   AI Programming				 ============
//=======================================================
#include "Player.h"

Player::Player()
{
	 m_amountOfLives = 10; // set lives of player
	 m_playerHealth = 10; // set health of player


}
int Player::playerAttack() // player attack function created for player choices
{
	 cout << "You are ready. What would you like to do?" << endl;
	 cout << "1 for stab, 2 for block, 3 for slash: " << endl;
	 cin >> m_playerChoice; 
	 cout << endl;
	 {
		  if (m_playerChoice == 1)
		  {
			    m_playerAttack = 1;
		  }
		  else if (m_playerChoice == 2)
		  {
			   m_playerAttack = 0;
		  }
		  else if (m_playerChoice == 3)
		  {
			   m_playerAttack = 3;
		  }
		  else
		  {
			   cout << "Invalid selection" << endl;
		  }
		  return m_playerAttack;
	 }
}

void Player::setHealth(int num) // setter for player health
{
	 m_playerHealth = num;
}
int Player::getHealth() //getter for player health
{
	 return m_playerHealth;
}
