#ifndef AIGUESS_H
#define AIGUESS_H

#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;
set<char> getRemainingChars(const set<char>& previousGuesses);
char selectRandomChar(const set<char>& s);
char getVowelGuess(const set<char>& remainingChars);
bool isSuitableWord(const string& word, const string& secretWord, const set<char>& remainingChars);
vector<string> getSuitableWords(const vector<string>& wordList, const string& secretWord, const set<char>& remainingChars);
map<char, int> getOccurenceCount(const set<char>& remainingChars, const vector<string>& wordList);
char getMaxOccurenceChar(const set<char>& remainingChars, const map<char, int>& count);
char getNextGuess(const set<char>& previousGuesses, const string& secretWord);

#endif