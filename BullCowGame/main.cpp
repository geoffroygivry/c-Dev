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
FText GetValidGuess();
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
	for (int32 count = 1; count <= MaxTries; count++) //TODO change FOR to WHILE loop once we are validating tries
	{
		FText Guess = GetValidGuess(); //TODO make loop checking validation
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess); // submit valid guess  to the game
		
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << "\n\n" ;

	}
}

// loop continually until the user gives a valid guess
FText GetValidGuess() 
{
	EGuessStatus status = EGuessStatus::invalid_status;
	do {
		int32 currentTry = BCGame.GetCurrentTry();
		std::cout << "try " << currentTry;
		std::cout << " Your guess please? ";
		FText Guess = "";
		getline(std::cin, Guess);

		status = BCGame.CheckGuessValidity(Guess); // check the validity of the guess word
		switch (status)
		{
		case EGuessStatus::Not_Isogram:
			std::cout << "Please enter an isogram letter word: \n";
			break;
		case EGuessStatus::Not_Lowercase:
			std::cout << "Please enter an non Lowercase letter word: \n";
			break;
		case EGuessStatus::Wrong_Length:
			std::cout << "Please enter a " << BCGame.getHiddenWordLength() << " letter word: \n";
			break;
		default:
			return Guess;
		}
	} while (status != EGuessStatus::OK); // keep looping until valid guess
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again?(y/n)\n";
	FText Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
