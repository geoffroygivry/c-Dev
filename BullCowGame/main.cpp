#include <iostream>
#include <string>
#include "FBullCowGame.h"

int main();

// Prototypes
void PrintInfo();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; //instanciate a new game

// main function, where the magic starts....
int main() 
{

	PrintInfo();
	do
	{
		PlayGame();
	} while (AskToPlayAgain());

	return 0;
}

// introduce the game
void PrintInfo() 
{

	constexpr int WORLD_LENGTH = 5;
	std::cout << "****Bulls and Cows Game!****\n\n" << std::endl;
	std::cout << "Can you guess the " << WORLD_LENGTH << " letter I am thinking?\n\n";
	return;
}


void PlayGame()
{
	int MaxTries = BCGame.GetMaxTries();

	// loop trough the number of guess
	for (int count = 1; count <= MaxTries; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}


// get a guess from the player
std::string GetGuess() 
{
	int currentTry = BCGame.GetCurrentTry();
	std::cout << "try " << currentTry;
	std::cout << " Your guess please? ";
	std::string Guess = "";
	getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?(y/n)\n";
	std::string Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
