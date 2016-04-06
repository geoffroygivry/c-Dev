#include <iostream>
#include <string>
#include "FBullCowGame.h"

int main();

// aliases based on Unreal coding standart
using FText = std::string;
using int32 = int;

// Prototypes
void PrintInfo();
void PlayGame();
FText GetGuess();
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


	std::cout << "****Bulls and Cows Game!****\n\n" << std::endl;
	std::cout << "Can you guess the " << BCGame.getHiddenWordLength() << " letter I am thinking?\n\n";
	return;
}


void PlayGame()
{
	int32 MaxTries = BCGame.GetMaxTries();

	// loop trough the number of guess
	//TODO change FOR to WHILE loop once we are validating tries
	for (int32 count = 1; count <= MaxTries; count++)
	{
		FText Guess = GetGuess(); //TODO make loop checking validation
		// submit valid guess  to the game
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		// print number of bulls and cows
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << std::endl;

	}
}


// get a guess from the player
FText GetGuess() 
{

	BCGame.Reset();
	int32 currentTry = BCGame.GetCurrentTry();
	std::cout << "try " << currentTry;
	std::cout << " Your guess please? ";
	FText Guess = "";
	getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?(y/n)\n";
	FText Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
