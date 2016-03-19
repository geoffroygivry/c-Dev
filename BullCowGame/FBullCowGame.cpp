#include "FBullCowGame.h"


int FBullCowGame::GetMaxTries() { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() { return MyCurrentTries; }

void FBullCowGame::Reset()
{
	return;
}


std::string FBullCowGame::GetNewWord()
{
	return std::string();
}



bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValidity()
{
	return false;
}
