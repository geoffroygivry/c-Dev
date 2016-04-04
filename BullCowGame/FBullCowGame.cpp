#include "FBullCowGame.h"

using FString = std::string;
using int32 = int;

FBullCowGame::FBullCowGame()
{
	Reset();
}

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTries; }


//receives a valid guess, increments turns and returns count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	//increment the turn number	
	MyCurrentTries++;

	//setup a return variable
	FBullCowCount BullCowCount;

	int32 HiddenWorldLength = MyHiddenWord.length();
	//loop trough all letters in the guess
	for (int32 i = 0; i < HiddenWorldLength; i++) {
		//compare letters against the hidden word
		for (int32 j = 0; j < HiddenWorldLength; j++) {
			// if they match
			if (Guess[j] == MyHiddenWord[i]) {
				if (i == j) {// if they are in the same place
					BullCowCount.Bulls++;
				} // increments bulls
					
				else
				{
					BullCowCount.Cows++; // increments cows
				}
					
			}
		}
	}

	return BullCowCount;
}

void FBullCowGame::Reset()
{

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	constexpr int32 MAX_TRIES = 5;
	MyMaxTries = MAX_TRIES;
	MyCurrentTries = 1;

	return;
}


FString FBullCowGame::GetNewWord()
{
	return FString();
}



bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity()
{
	return false;
}
