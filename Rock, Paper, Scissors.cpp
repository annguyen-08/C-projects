#include <iostream>
#include <ctime> // library for srand ()

using namespace std;

char user_input (); // function to get user's input
char computer_input (); // function to get computer's input
void showchoice (char choice); // function to show r, s, p to Rock, Paper, Scissors
void chooseWinner (char player, char computer); // function to declare the winner

int main () {
	char player = user_input ();
	cout << "Your choice: ";
	showchoice (player);

	char computer = computer_input ();
	cout << "Computer's choice: ";
	showchoice (computer);

	chooseWinner (player, computer);
	return 0;
}

char user_input () {
	char player;

	do {
		cout << "rock, paper, scissors?" << endl;
		cin >> player;
	} while (player != 'r' && player != 'p' && player != 's');

	return player;
}

void showchoice (char choice) {
	switch (choice) {
		case 'r': cout << "Rock" << endl;
				break;
		case 'p': cout << "Paper" << endl;
				break;
		case 's': cout << "Scissors" << endl;
				break;
	}
}

char computer_input () {
	srand (time (0));

	int num = rand () % 3 + 1;

	switch (num) {
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}
}

void chooseWinner (char player, char computer) {
	if (player == computer) {
		cout << "It's a tie!";
	}
	else {
		switch (player) {
			case 'r': 
				if (computer == 'p') {
					cout << "Computer wins!";
					}
				else {
					cout << "You win";
				}
				break;
			case 'p':
				if (computer == 'r') {
					cout << "You win";
				}
				else {
					cout << "Computer wins";
				}
				break;
			case 's':
				if (computer == 'r') {
					cout << "Computer wins";
				}
				else {
					cout << "You win";
				}
				break;
		}
	}
}
