//=======================================================
//====		   Hack n Stab Assignment        ============
//====		   Daniel Milliken				 ============
//====		   AI Programming				 ============
//=======================================================
#include <iostream>
#include <cstdlib>
#include "Game.h"

using namespace std;

// main program run
int main()
{
	 //declarations 
	 bool running = true;
	 Game m_run;
	 int userChoice;

	 do
	 {

	 //menu function running
	 Menu();
	 {
		  cin >> userChoice;
		  {
		  switch (userChoice)
		  {
		  case 1:
			   userChoice = 1;
			   m_run.playGame();
			   break;
		  case 2:
			   userChoice = 2;
			   return 0;
			   break;
		  case 3:
			   cout << "Invalid Input!" << endl;
			   break;
		  }
		  // following code would not work with original menu display function
		  /*if(userChoice = 1)
		  {
			   m_run.playGame();
		  }
		  else if(userChoice = 2)
		  {
			   //running = false;
			   exit(0);
			   //return 0;
			
		  }
		  else
		  {
			   cout << "Invlid input!" << endl;
		  }*/
	 }
	 }
	 
	 }while(running);

	 return 0;
}