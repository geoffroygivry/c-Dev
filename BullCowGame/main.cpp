#include <iostream>
#include <string>

using namespace std;

// Prototypes
void PrintInfo();
void PlayGame();
string GetGuess();


// main function, where the magic starts....
int main() {

	PrintInfo();
	PlayGame();

	return 0;
}

// introduce the game
void PrintInfo() {

	constexpr int WORLD_LENGTH = 5;
	cout << "Bulls and Cows" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << " letter I am thinking?\n";
	return;
}


void PlayGame()
{
	// loop trough the number of guess
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}


// get a guess from the player
string GetGuess() {

	cout << "Your guess please? ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}
