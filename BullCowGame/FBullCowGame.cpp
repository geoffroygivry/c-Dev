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
FBullCowCount FBullCowGame::SubmitGuess(FString)
{
	//increment the turn number	
	MyCurrentTries++;
	//setup a return variable
	FBullCowCount BullCowCount;
	//loop trough all letters in the guess
		//compare letters against the hidden word
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
