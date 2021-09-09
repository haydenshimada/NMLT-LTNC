#include "start.h"

void Welcome(char &next) {
	changeColor(4);
	Sleep(1100);
	for (int i = 0; i < welcome.size(); i++) {
		cout << welcome[i];
		Sleep(1200);
	}
	changeColor(6);
	for (int i = 0; i < to.size(); i++) {
		cout << to[i];
		Sleep(1200);
	}
	changeColor(10);
	for (int i = 0; i < hangman.size(); i++) {
		cout << hangman[i];
		Sleep(1200);
	}
	changeColor(7);

	cout << "\nContinue? Y/N" << endl;
	cin >> next;
	next = tolower(next);
}
void rule() {
	cout << "=================================================================================================" << endl
		<< "The Rule Is Simple:" << endl
		<< "	The computer will \"think\" of a word and the player tries to guess what it is, one letter at a time" << endl
		<< "    a number of dashes equivalent to the number of letters in the word will be drawn" << endl
		<< "    If the player suggests a letter that occurs in the word, " << endl
		<< "        the the computer fills in the blanks with that letter in the right places" << endl
		<< "    If the word does not contain the suggested letter, " << endl
		<< "        one element of a hangman’s gallows will be drawn" << endl
		<< "    As the game progresses, a segment of the gallows and of a victim is added for every suggested letter not in the word" << endl
		<< "    There are 7 chances" << endl
		<< "    Goodluck!" << endl
		<< "==================================================================================================" << endl << endl
		<< "How points are calculated: " << endl
		<< "    - Each round you will have 100 points" << endl
		<< "    - For every wrong guessed letter, minus 2 points" << endl
		<< "    - For every minutes, minus 10 points" << endl
		<< "    - If hint is called, minus 30 points" << endl << endl
		<< "Continue? Y/N" << endl;
}
void ruleAI() {
	cout << "=================================================================================================" << endl
		<< "The Rule Is Simple:" << endl
		<< "    1. Think of a word then type in the length of it" << endl
		<< "    2. The computer will guess a letter" << endl
		<< "	       If the letter is included in the word, type --\'letter\'--" << endl
		<< "           otherwise, type ------" << endl
		<< "   (the number of dashes equivalent to the number of letters in the word)" << endl
		<< "===================================================================================================" << endl << endl
		<< "Continue? Y/N" << endl;
}
void clearScreen()
{
#ifdef _WIN32
	system("cls");
#elif __linux__
	system("clear");
#endif // _WIN32
}
void cinCategoryAndLevel(char &category, char &level) {
	cout << "Choose Category\n";
	cout << "Please choose a number" << endl;
	cout << "1.Animals          2.Food          3. Science" << endl;


	cin >> category;
	while (category < '1' || category > '3') {
		cout << "Please choose a number for 1 to 3" << endl;
		cin >> category;
	}
	clearScreen();
	cout << "Pick a Level" << endl;
	cout << "1.Easy          2.Medium          3.Hard" << endl;

	cin >> level;
	while (level < '1' || level > '3') {
		cout << "Please choose a number for 1 to 3" << endl;
		cin >> level;
	}
	clearScreen();
}
void pickWordFile(char &category, char &level, ifstream &wordList, string &scores ) {
	int cate = category - 48;
	int lv = level - 48;
	switch (cate)
	{
	case 1:
		switch (lv)
		{
		case 1:
			wordList.open("easyAnimals.txt");
			scores = "HighScores_easy.txt";
			break;
		case 2:
			wordList.open("mediumAnimals.txt");
			scores= "HighScores_medium.txt";
			break;
		case 3:
			wordList.open("hardAnimals.txt");
			scores = "HighScores_hard.txt" ;
			break;
		default:
			break;
		}
		break;
	case 2:
		switch (lv)
		{
		case 1:
			wordList.open("easyFood.txt");
			scores = "HighScores_easy.txt" ;
			break;
		case 2:
			wordList.open("mediumFood.txt");
			scores = "HighScores_medium.txt" ;
			break;
		case 3:
			wordList.open("hardFood.txt");
			scores = "HighScores_hard.txt";
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (lv)
		{
		case 1:
			wordList.open("easyScience.txt");
			scores = "HighScores_easy.txt";
			break;
		case 2:
			wordList.open("mediumScience.txt");
			scores = "HighScores_medium.txt";
			break;
		case 3:
			wordList.open("hardScience.txt");
			scores = "HighScores_hard.txt";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void generateWordAndHint(string& word, string& hint, ifstream &wordList) {
	vector <string> data;
	if (!wordList.is_open())
		cout << "Open file failed!" << endl;
	else {
		while (!wordList.eof()) {
			string line;
			getline(wordList, line);
			if (wordList && !line.empty())
				data.push_back(line);
		}
		
		string volcabulary = data[rand() % data.size()];
		
		unsigned int flag = 0;
		for (int i = 0; i < volcabulary.size(); i++)
			if (volcabulary[i] != ',')
				word += volcabulary[i];
			else {
				flag = i;
				break;
			}
		for (int i = flag + 2; i < volcabulary.size(); i++)
			hint += volcabulary[i];
	}
}