#include "AIOrHuman.h"
#include "AiFuntion.h"
#include "AIGuess.h"

using namespace std;

void HUMAN(bool& loadingFlag) {
	if (loadingFlag == 0) {
		PlaySound(TEXT("Papers, Please.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); 
		loadingFlag = 1;
	}

	rule();
	char next;
	cin >> next;
	next = tolower(next);
	while (next != 'y' && next != 'n') {
		cout << "Please type y or n" << endl;
		cin >> next;
		next = tolower(next);
	}
	clearScreen();
	if (next == 'n') {
		return;
	}

	char category;
	char level;
	ifstream wordList;

	string scores;

		srand(time(0));

		string name;
		cout << "What is your name?: ";
		cin.ignore();
		getline(cin, name);

		string word, hint;
		do {
			cinCategoryAndLevel(category, level);
			pickWordFile(category, level, wordList, scores);

			word = "";
			hint = "";
			generateWordAndHint(word, hint, wordList);
			wordList.close();

			if (word.empty()) {
				cout << "No words are available" << endl
					<< "Please choose another category/level" << endl << endl;
			}
		} while (word.empty());

		string guessedWord(word.length(), '-');
		int badGuessCount = 0;
		const int maxBadGuess = 7;
		string badGuess;

		int hintCount = 0;

		bool tetrisFlag = 0;
		float start = clock();
		do {

			if (tetrisFlag == 0) {
				PlaySound(TEXT("Tetris.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); // tetris
				tetrisFlag = 1;
				loadingFlag = 0;
			}
			
			renderGame(hintCount, guessedWord, hint, badGuessCount, badGuess);
			char guess = guessLetter(hintCount, word, badGuessCount, hint, guessedWord);
			guess = tolower(guess);
			if (isContain(word, guess) && guess != '0')
				update(guessedWord, word, guess);
			else {
				badGuessCount++;
				if (guess != '0')
					badGuess += guess;
			}
		} while (badGuessCount < maxBadGuess && guessedWord != word);
		float end = clock();

		bool win = 0;
		float time = (end - start) / 1000;
		unsigned int mark = point(badGuessCount, time, hintCount);
		printGameOverInfo(guessedWord, word, badGuessCount, win, time, mark);

		player p(name, time, mark);
		if (win == 1) {
			writeToScores(p, scores);
		}	
}

void AI(bool& loadingFlag){

	if (loadingFlag == 0) {
		PlaySound(TEXT("Papers, Please.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC); 
		loadingFlag = 1;
	}

	ruleAI();
	char next;
	cin >> next;
	next = tolower(next);
	while (next != 'y' && next != 'n') {
		cout << "Please type y or n" << endl;
		cin >> next;
		next = tolower(next);
	}
	clearScreen();
	if (next == 'n') {
		return;
	}

	PlaySound(TEXT("Tetris.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	
	int wordLength;
	string secretWord;
	int incorrectGuess;
	set <char> previousGuesses;
	bool stop;

	initialize(wordLength, secretWord, incorrectGuess, previousGuesses, stop);

	render(incorrectGuess, previousGuesses, secretWord);

	do {
		char guess = getNextGuess(previousGuesses, secretWord);
		if (guess == 0) {
			PlaySound(TEXT("GameOver.wav"), NULL, SND_FILENAME | SND_ASYNC);
			cout << "I give up, hang me" << endl;
			return;
		}

		do {
			try {
				string mask = getUserAnswer(guess);
				update(guess, mask, incorrectGuess, previousGuesses, secretWord, stop);
				break;
			}
			catch (invalid_argument e) {
				cout << "Invalid mask, try again" << endl;
			}
		} while (true);
		render(incorrectGuess, previousGuesses, secretWord);
	} while (!stop);
	playAnimation(incorrectGuess == MAX_GUESSES, secretWord);
}