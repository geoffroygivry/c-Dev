#pragma once
#include <string>

class FBullCowGame {
public:
	void Reset();
	int GetMaxTries();
	std::string GetNewWord();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity();

private:
	int MyCurrentTries = 1;
	int MyMaxTries = 5;
};