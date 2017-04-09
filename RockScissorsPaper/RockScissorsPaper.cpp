// RockScissorsPaper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>

int player1(int);
int player2(int);
void gameRoom(int, int);

int main()
{

	std::string scissors, paper, rock;

	int choicePlayer1 = -1;
	int choicePlayer2 = -1;


	for (int i = 0; i < 100; i++)
	{
		gameRoom(player1(choicePlayer1), player1 (choicePlayer1));
	}

	std::system("pause");
	return 0;
}

int player1(int choicePlayer)
{
	srand(time(NULL));
	choicePlayer = rand() % 3;

	return choicePlayer;

}
int player2(int choicePlayer)
{
	srand(time(NULL));
	choicePlayer = rand() % 3;

	return choicePlayer;

}
void gameRoom(int choicePlayer1, int choicePlayer2)
{

	if (choicePlayer1 > choicePlayer2)
	{
		if (choicePlayer1 == 0)
		{	
			std::cout << "Player 1 = Scisors WON" << std::endl;

		}
		if (choicePlayer1 == 1)
		{
			std::cout << "Player 1 = Paper WON" << std::endl;

		}
		else
		{
			std::cout << "Player 1 = Rock WON" << std::endl;
		}
	}
	if (choicePlayer1 < choicePlayer2)
	{
		if (choicePlayer2 == 0)
		{
			std::cout << "Player 2 = Scisors WON" << std::endl;

		}
		if (choicePlayer2 == 1)
		{
			std::cout << "Player 2 = Paper WON" << std::endl;

		}
		else
		{
			std::cout << "Player 2 = Rock WON" << std::endl;
		}
	}
	else
	{
		std::cout << "Draw " << std::endl;
	}

}
