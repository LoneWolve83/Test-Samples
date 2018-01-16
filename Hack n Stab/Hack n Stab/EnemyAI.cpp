//=======================================================
//====		   Hack n Stab	                 ============
//====		   Daniel Milliken				 ============
//====		   AI Programming				 ============
//=======================================================
#include "EnemyAI.h" // include the EnemyAI header file

EnemyAI::EnemyAI() // function creating EnemyAI
{
	 m_amountOfLives = 10; // set amount of lives
	 m_health = 10;	// set amount of health
	 full = true; // if the EnemyAI helth is full
	 half = false; // if the EnemyAI health is half
	 quarter = false; // if the EnemyAI heatlh is quarter
	 srand(time(NULL)); // random generator
}
int EnemyAI::enemyAttack() // function for attack
{
	 //m_choice = rand() % 3 + 1; // function did not work right so i used the one below
  
	 // this function is a random choice generator for the enemy AI attacks
	 if (full) // if health is full
	 {
		  if(m_health <= 5) // if health is less than or equal to 5
		  {
			   if (m_health <= 3) // if health is less than or equal to 3
			   {
					m_choice = rand() % 1 + 1; // percentage of choice
			   } 
			   m_choice = rand() % 4 + 1; // percentage of choice
		  }
		  m_choice = rand() % 9+ 1;		 // percentage of choice
	 }
	 //Switch statement used to make chocies for EnemyAI attack
	 switch(m_choice)
	 {
	 case 1:
		  cout << "The enemy has stabbed you!" << endl;
		  m_attack = 1;
		 break;
	 case 2:
		  cout << " The enemy has blocked your attack!" << endl;
		  m_attack = 0;
		  break;
	 case 3:
		  cout << "The enemy has slashed you!" << endl;
		  m_attack = 3;
		  break;
	 case 4:
		  cout << "The enemy has stabbed you!" << endl;
		  m_attack = 1;
		 break;
	 case 5:
		  cout << "The enemy has stabbed you!" << endl;
		  m_attack = 1;
		 break;
	 case 6:
		  cout << "The enemy has slashed you!" << endl;
		  m_attack = 3;
		  break;
	 case 7:
		  cout << " The enemy has blocked your attack!" << endl;
		  m_attack = 0;
		  break;
	 case 8:
		  cout << "The enemy has slashed you!" << endl;
		  m_attack = 3;
		  break;
	 case 9:
		  cout << " The enemy has blocked your attack!" << endl;
		  m_attack = 0;
		  break;
	 case 10:
		  cout << "The enemy has stabbed you!" << endl;
		  m_attack = 1;
		 break;
	 }
	 return m_attack;
		
}
void EnemyAI::setHealth(int num) // setter of health for EnemyAI
{
	 m_health = num;
}
int EnemyAI::getHealth() // getter of health for EnemyAI
{
	 return m_health;
}