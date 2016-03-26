#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount {
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame {
public:

	FBullCowGame(); //Constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	FString GetNewWord();
	bool CheckGuessValidity(); //TODO making a more rich return value

	// counts bulls and cows, and increasing turn number.
	FBullCowCount SubmitGuess(FString);

	void Reset(); //TODO making a more rich return value

private:
	// we don't put values because the constructor will initiate the values for us.
	int32 MyCurrentTries;
	int32 MyMaxTries;
	FString MyHiddenWord;
};