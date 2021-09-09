#include <iostream>
#include <string>
#include <thread>
#include <Windows.h> 
#include "renderingGame.h"
#include "draw.h"
#include "start.h"
using namespace std;

string normalize(const string& s) {
	string news;
	for (int i = 0; i < s.size(); i++)
		news += tolower(s[i]);
	return news;
}

char guessLetter(int &hintCount, const string& word, int &badGuessCount, const string &hint, string &guessedWord) {
	string guess;
	cout << "Enter your Guess" << endl
		<< "(If your guess has more than 1 letter then you should be guessing the WHOLE WORD!)" << endl;
	cout << "If you want any hint, type \"Hint\". However, you will lose 30 points" << endl;
	cin >> guess;
	guess = normalize(guess);
	if (guess.size() == 1)
		return guess[0];
	else {
		if (guess == "hint") {
			hintCount = 1;
			badGuessCount--;
			return '0';
		}
		if (guess != "hint" && guess != word) {
			badGuessCount = 6;
			return '0';
		}
		if (guess == word) {
			guessedWord = word;
			return '1';
		}
	}
}

void update(string& guessedWord, const string& word, char guess) {

	for (int i = 0; i < guessedWord.size(); i++) {
		if (word[i] == guess)
			guessedWord[i] = guess;
	}	
}

bool isContain(string word, char guess) {
	for (int i = 0; i < word.size(); i++)
		if (word[i] == guess)
			return 1;
	return 0;
}

void renderGame(const int hintCount, string guessedWord, const string hint, int badGuessCount, string badGuess = "" ) {
	system("cls");
	cout << "The Word has " << guessedWord.size() << " letters" << endl
		<< "Current Guess: " << guessedWord << endl;
	cout << "You have made " << badGuessCount << " bad guess(es)" << endl
		<< "Bad guessed letter: " << badGuess << endl
		<< getHangPic(badGuessCount) << endl;
	if (hintCount != 0) {
		changeColor(12); // red with black background
		cout << "Your hint: " << hint << endl;
		changeColor(7); // white with black background
	}
}

void printGameOverInfo(string guessedWord, const string word, int badGuessCount, bool &win, float &time, const int mark) {
	system("cls");
	if (guessedWord != word) {
		PlaySound(TEXT("GameOver.wav"), NULL, SND_FILENAME | SND_ASYNC); // mario lose
		int n = 0;
		int time = 8;
		while (time--) {
			clearScreen();
			cout << "GAME OVER!" << endl
				<< "YOU ARE HANGED" << endl;
			cout << "The correct word is " << word << endl;
			cout << HANGED[n];
			n = (n + 1) % HANGED.size();
			this_thread::sleep_for(chrono::milliseconds(300));
		}
	}
	else {
		PlaySound(TEXT("GameClear.wav"), NULL, SND_FILENAME | SND_ASYNC); // mario win stage
		win = 1;

		congratulation();

		cout << "You win!" << endl
			 << "The word is: " << word << endl
			 << "Your time is: " << time << " seconds" << endl
			 << "Your score is: " << mark << endl;
		
	}
}

void writeToScores(const player p, const string scores) {
	ifstream file(scores);
	if (!file.is_open()) {
		cout << "Open file HighScore error" << endl;
	}

	vector <player> vt;
	while (!file.eof()) {
		string name;
		file >> name;
		if (name.empty())
			break;

		float time;
		file >> time;

		int score;
		file >> score;
		file.ignore();

		vt.push_back({ name, time, score });
	}
	file.close();

	ofstream high(scores);
	vt.push_back({p.name, p.time, p.score});

	sort(vt.begin(), vt.end(), greater<player>());

	while (vt.size() > 10) {
		vt.erase(vt.end() - 1);
	}

	for (int i = 0; i < vt.size(); i++) {
		if (i == vt.size() - 1)
			high << vt[i].name << ' ' << vt[i].time << ' ' << vt[i].score;
		else
			high << vt[i].name << ' ' << vt[i].time << ' ' << vt[i].score << endl;
	}
	high.close();
}

long point(const int BadGuessCount, const float time, const int hintCount) {
	unsigned int p = 100;
	p -= BadGuessCount * 2;
	if (hintCount != 0)
		p -= 30;
	float tmp = time;
	while (tmp > 60) {
		tmp -= 60;
		p -= 10;
	}
	if (p < 0)
		p = 0;

	return p;
}