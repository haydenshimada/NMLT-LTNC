#include "AIOrHuman.h"

using namespace std;

int main() {
	
	PlaySound(TEXT("Papers, Please.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); 
	bool loadingFlag = 1;
	
	int category;
	int level;
	ifstream wordList;

	string scores;

	char next;
	
	Welcome(next);
	while (next != 'y' && next != 'n') {
		cout << "Please type y or n" << endl;
		cin >> next;
		next = tolower(next);
	}
	clearScreen();

	if (next == 'n') {
		PlaySound(TEXT("Bye, Have a Great Time!.wav"), NULL, SND_FILENAME | SND_ASYNC);

		int n = 0;
		int time = 6;
		while (time--) {
			system("cls");
			cout << "Thanks for visiting" << endl;
			cout << waving[n];
			n = (n + 1) % waving.size();
			this_thread::sleep_for(chrono::milliseconds(300));
		}
		return 0;
	}
	

	while (true) {

		clearScreen();
		cout << "Choose a type:" << endl
			 << "1.Computer vs Human" << setw(30) << "2. Human vs Computer" << endl;
		char choose;
		cin >> choose;
		while (choose != '1' && choose != '2') {
			cout << "Please type the number 1 or 2" << endl;
			cin >> choose;
		}

		clearScreen();
		int choice = choose - 48;
		switch (choice) {
		case 1:
			HUMAN(loadingFlag);
			break;
		case 2:
			AI(loadingFlag);
			break;
		default:
			break;
		}

		cout << "Want to see the leaderboard? Y/N  (Human Intelligence) " << endl;
		char lb;
		cin.ignore();
		cin >> lb;
		lb = tolower(lb);
		while (lb != 'y' && lb != 'n') {
			cout << "Please type Y or N" << endl;
			cin >> lb;
			lb = tolower(lb);
		}
		if (lb == 'y') {
			while (true) {
				clearScreen();
				cout << "Which one do you want to see?" << endl
					<< "1. Easy          2. Medium          3. Hard" << endl;
				int choose;
				cin >> choose;
				while (choose < 1 || choose > 3) {
					cout << "Please type number from 1 to 3" << endl;
					cin >> choose;
				}
				switch (choose)
				{
				case 1:
					scores = "HighScores_easy.txt";
					break;
				case 2:
					scores = "HighScores_medium.txt";
					break;
				case 3:
					scores = "HighScores_hard.txt";
					break;
				default:
					break;
				}
				leaderBoard(scores);

				cout << "Wanna see another one? Y/N " << endl;
				char ans;
				cin >> ans;
				ans = tolower(ans);
				while (ans != 'y' && ans != 'n')
				{
					cout << "Please type Y or N" << endl;
					cin >> ans;
					ans = tolower(ans);
				}
				if (ans == 'n')
					break;
			}
		}
			
		cout << "Wanna play again??? Y/N" << endl;
		char answer;
		cin.ignore();
		cin >> answer;
		answer = tolower(answer);
		while (answer != 'y' && answer != 'n') {
			cout << "Please type Y or N" << endl;
			cin >> answer;
			answer = tolower(answer);
		}
		if (answer == 'y') {
			clearScreen();
		}
		else {
			PlaySound(TEXT("Bye, Have a Great Time!.wav"), NULL, SND_FILENAME | SND_ASYNC);

			int n = 0;
			int time = 6;
			while (time--) {
				clearScreen();
				cout << "Thanks for playing!" << endl;
				cout << waving[n];
				n = (n + 1) % waving.size();
				this_thread::sleep_for(chrono::milliseconds(300));
			}
			break;
		}
	}
	return 0;
}