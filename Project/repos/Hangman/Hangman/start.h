#ifndef START_H
#define START_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <Windows.h>
#include "draw.h"

using namespace std;

const vector <string> welcome = {
"	              ____          ____   ____              ____  \n"
"	   |      |  |      |      |      |    |  |\\    /|  |    \n",
"	   |  /\\  |  |____  |      |      |    |  | \\  / |  |____\n",
"	   | /  \\ |  |      |      |      |    |  |  \\/  |  |    \n",
"	   |/    \\|  |____  |____  |____  |____|  |      |  |____\n"
};
const vector <string> to = {
"	                     _____   ____  \n"
"	                       |    |    |\n",
"	                       |    |    |\n",
"	                       |    |    |\n",
"	                       |    |____|\n"
};
const vector <string> hangman = {
"	                           ____                                     \n"
"	|    |     /\\     |\\   |  |       |\\    /|     /\\     |\\   |  \n",
"	|____|    /__\\    | \\  |  |  __   | \\  / |    /__\\    | \\  |  \n" ,
"	|    |   /    \\   |  \\ |  |    |  |  \\/  |   /    \\   |  \\ |  \n",
"	|    |  /      \\  |   \\|  |____|  |      |  /      \\  |   \\|  \n"
};

void Welcome(char &next);
void rule();
void ruleAI();
void clearScreen();
void cinCategoryAndLevel(char &, char &) ;
void pickWordFile(char &, char &, ifstream &, string & scores);
void generateWordAndHint(string&, string&, ifstream &wordList);

#endif
