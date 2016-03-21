#pragma once
#include <string>

class FBullCowGame {
public:

	FBullCowGame(); //Constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	std::string GetNewWord();
	bool CheckGuessValidity();
	void Reset();

private:
	// we don't put values because the constructor will initiate the values for us.
	int MyCurrentTries;
	int MyMaxTries;
};