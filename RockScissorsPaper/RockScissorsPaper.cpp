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
		gameRoom(player1(choicePlayer1), player2 (choicePlayer1));
	}

	std::system("pause");
	return 0;
}

int player1(int choicePlayer)
{
	std::cout << std::endl;
	std::cout << "Your move gringo..." << std::endl;
	std::cout << "0 - scissors, 1 - paper, 2 - rock: ";
	std::cin >> choicePlayer;
	return choicePlayer;

}
int player2(int choicePlayer)
{
	srand(time(NULL)); // adding this line created issue where all results are shown as draw
	choicePlayer = rand() % 3;
	
	
	return choicePlayer;
}
void gameRoom(int choicePlayer1, int choicePlayer2)
{
	static int  computerScore = 0, humanScore = 0;

	if (choicePlayer1 == 0 && choicePlayer2 == 0)
	{
		std::cout << "Computer Scissors - Human Scissors" << std::endl;
		std::cout << "This is a Draw" << std::endl;
		std::cout << "Score - Human: " << humanScore << " Computer: " << computerScore << std::endl;
	}
	if (choicePlayer1 == 0 && choicePlayer2 == 1)
	{
		std::cout << "Computer Paper - Human Scissors" << std::endl;
		std::cout << "Human WON!" << std::endl;
		std::cout << "Score - Human: " << ++humanScore << " Computer: " << computerScore << std::endl;
	}
	if (choicePlayer1 == 0 && choicePlayer2 == 2)
	{
		std::cout << "Computer Rock - Human Scissors" << std::endl;
		std::cout << "Computer WON!" << std::endl;
		std::cout << "Score - Human: " << humanScore << " Computer: " << ++computerScore << std::endl;
	}
	if (choicePlayer1 == 1 && choicePlayer2 == 0)
	{
		std::cout << "Computer Scissors - Human Paper" << std::endl;
		std::cout << "Computer WON!" << std::endl;
		std::cout << "Score - Human: " << humanScore << " Computer: " << ++computerScore << std::endl;
	}
	if (choicePlayer1 == 1 && choicePlayer2 == 1)
	{
		std::cout << "Computer Paper - Human Paper" << std::endl;
		std::cout << "This is a Draw" << std::endl;
		std::cout << "Score - Human: " << humanScore << " Computer: " << computerScore << std::endl;
	}
	if (choicePlayer1 == 1 && choicePlayer2 == 2)
	{
		std::cout << "Computer Rock - Human Paper" << std::endl;
		std::cout << "Human WON!" << std::endl;
		std::cout << "Score - Human: " << ++humanScore << " Computer: " << computerScore << std::endl;
	}
	if (choicePlayer1 == 2 && choicePlayer2 == 0)
	{
		std::cout << "Computer Scissors - Human Rock" << std::endl;
		std::cout << "Human WON!" << std::endl;
		std::cout << "Score - Human: " << ++humanScore << " Computer: " << computerScore << std::endl;
	}
	if (choicePlayer1 == 2 && choicePlayer2 == 1)
	{
		std::cout << "Computer Paper - Human Rock" << std::endl;
		std::cout << "Computer WON!" << std::endl;
		std::cout << "Score - Human: " << humanScore << " Computer: " << ++computerScore << std::endl;
	}
	if (choicePlayer1 == 2 && choicePlayer2 == 2)
	{
		std::cout << "Computer Rock - Human Rock" << std::endl;
		std::cout << "This is a Draw" << std::endl;
		std::cout << "Score - Human: " << humanScore << " Computer: " << computerScore << std::endl;
	}

}
