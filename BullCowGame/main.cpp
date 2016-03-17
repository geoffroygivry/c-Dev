#include <iostream>
#include <string>

using namespace std;

// Prototypes
void PrintInfo();
string GetGuessAndPrint();


// main function, where the magic starts....
int main() {

	PrintInfo();

	// loop trough the number of guess
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		GetGuessAndPrint();
		cout << endl;
	}

	return 0;
}

// introduce the game
void PrintInfo() {

	constexpr int WORLD_LENGTH = 5;
	cout << "Bulls and Cows" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << " letter I am thinking?\n";
	return;
}

// get a guess from the player
string GetGuessAndPrint() {

	cout << "Your guess please? ";
	string Guess = "";
	getline(cin, Guess);
	// repeat the guess
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}