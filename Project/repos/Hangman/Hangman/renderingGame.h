#ifndef RENDERINGGAME_H
#define RENDERINGGAME_H
#include <string>
#include <fstream>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;
struct player
{
	string name;
	float time;
	int score;
	
	player() {}
	player (string _name, float _time, int _score) {
		name = _name;
		time = _time;
		score = _score;
	}
	// sắp xếp theo score giảm dần
	// nếu score bằng nhau thì xếp time tăng dần
	bool operator > (const player& p) const
	{
		return (score > p.score) || ((score == p.score) && (time < p.time));
	}
};

char guessLetter(int &hintCount, const string& word, int& badGuessCount, const string& hint, string& guessWord);
void update(string& guessedWord, const string& word, char guess);
bool isContain(string word, char guess);
void renderGame(const int hintCount, string guessedWord,const string hint, int badGuessCount, string badGuess );
void printGameOverInfo(string guessedWord,const string word, int badGuessCount, bool &win, float &time, const int mark);
string normalize(const string& s);
void writeToScores(const player p, const string scores);
long point(const int BadGuessCount, const float time, const int hintCount);

#endif
