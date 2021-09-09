#ifndef AIFUNTION_H
#define AIFUNTION_H

#include <iostream>
#include <set>
#include <vector>
#include "start.h"
#include "draw.h"

using namespace std;

#define MAX_GUESSES 7

vector<string> readWordListFromFile(const string& filePath);
int getUserWordLength();
void initialize(int& wordLength, string& secretWord, int& incorrectGuess, set<char>& previousGuesses, bool& stop);
void render(int incorrectGuess, const set<char>& previousGuesses,const string& secretWord);
string getUserAnswer(char guess);
void update(char guess, const string& mask, int& incorrectGuess, set<char>& previousGuesses, string& secretWord, bool& stop);
bool isGoodMask(char guess, const string& mask, const string& secretWord);
bool isAllDash(const string& s);
bool isAllNotDash(const string& s);
void updateSecretWord(const string& mask, string& secretWord);

#endif
