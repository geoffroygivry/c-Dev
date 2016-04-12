#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount {
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EGuessStatus
{
	invalid_status,
	OK,
	Not_Isogram,
	Wrong_Length,
	Not_Lowercase
};

class FBullCowGame {
public:

	FBullCowGame(); //Constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;
	EGuessStatus CheckGuessValidity(FString) const;
	int32 getHiddenWordLength() const;
	FString GetNewWord();


	// counts bulls and cows, and increasing turn number.
	FBullCowCount SubmitGuess(FString);

	void Reset(); //TODO making a more rich return value

private:
	// we don't put values because the constructor will initiate the values for us.
	int32 MyCurrentTries;
	int32 MyMaxTries;
	FString MyHiddenWord;
};