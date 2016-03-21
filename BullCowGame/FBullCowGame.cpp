#include "FBullCowGame.h"


FBullCowGame::FBullCowGame()
{
	Reset();
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTries; }

void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 5;
	MyMaxTries = MAX_TRIES;
	MyCurrentTries = 1;

	return;
}


std::string FBullCowGame::GetNewWord()
{
	return std::string();
}



bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity()
{
	return false;
}
