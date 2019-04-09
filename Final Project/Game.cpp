/******************************************************
Program Name: Final Project - Dungeon game
Author: Christian Roccanova
Date: 6/6/2017
Description: Game class - contains the play function that runs the game.
******************************************************/

#include "Game.hpp"

Game::Game()
{
	//sets initial space to MainRoom class object
	winState = 0;
	current = &mainRm;
	main = current;
	currentRoom = 1;
	
	// sets turn limit of 150 moves
	turn = 150;
}

void Game::play()
{
	cout << "This is the starting board." << endl;
	
	// loops until either the player defeats the monster, is defeated or runs out of turns.
	while (winState == 0 && turn > 0)
	{
		cout << "You have " << turn << " moves left." << endl;
		current->printBoard();
		cout << "Please make a move (w = up, s = down, a = left, d = right)" << endl;
		cin >> direction;
		
		// checks if input is a valid direction
		while (direction != "w" && direction != "a" && direction != "s" && direction != "d")
		{
			cout << "Sorry, that was not a valid input, please try again." << endl;
			cin >> direction;
		}

		turn--;
		roomNum = current->move(direction);

		// checks if the bridge switch has been activated
		if (switchRm.specialSpace(switchRm.getX(), switchRm.getY()))
		{
			// lowers the bridge
			mainRm.lowerBridge();
		}

		// checks if the key switch for the boss room has been activated
		if (keyRm.specialSpace(keyRm.getX(), keyRm.getY()))
		{
			// unlocks boss room
			mainRm.unlock();
		}

		
		
			// checks if the sword has been activated and adds it to the inventory
			if (swordRm.specialSpace(swordRm.getX(), swordRm.getY()))
			{
				// caps inventory size at 2
				if (inventory.size() <= 2)
				{
					inventory.push("sword");
				}
			}

			// checks if the shield has been activated and adds it to the inventory
			if (shieldRm.specialSpace(shieldRm.getX(), shieldRm.getY()))
			{
				// caps inventory size at 2
				if (inventory.size() <= 2)
				{
					inventory.push("shield");
				}
			}

			// checks if the player has won or lost
			// player wins
			if (bossRm.specialSpace(bossRm.getX(), bossRm.getY()))
			{
				if ((inventory.front() == "shield" || inventory.back() == "shield") && (inventory.front() == "sword" || inventory.back() == "sword"))
				{
					cout << "Congratulations! You have slain the monster!" << endl << "YOU WIN!" << endl << endl;
					winState = 2;
				}

				// player loses
				else
				{
					cout << "You fought the monster while lacking equipment and have failed." << endl << "GAME OVER" << endl << endl;
					winState = 3;
				}
			}
		
		
		// checks if the room has changed and switches to the correct object
		if (currentRoom != roomNum)
		{
			// switches to main room
			if (roomNum == 1)
			{
				current = &mainRm;
				currentRoom = 1;
			}
			// switches to "key" room
			else if (roomNum == 2)
			{
				current = &keyRm;
				currentRoom = 2;
			}
			// switches to sword room
			else if (roomNum == 3)
			{
				current = &swordRm;
				currentRoom = 3;
			}
			// switches to shield room
			else if (roomNum == 4)
			{
				current = &shieldRm;
				currentRoom = 4;
			}
			// switches to switch room
			else if (roomNum == 5)
			{
				current = &switchRm;
				currentRoom = 5;
			}
			// switches to boss room
			else if (roomNum == 6)
			{
				current = &bossRm;
				currentRoom = 6;
			}
		}
		
		// prints game over message if player has run out of moves
		if (turn == 0)
		{
			cout << "You have run out of moves." << endl << "GAME OVER" << endl << endl;
		}
	}


}





