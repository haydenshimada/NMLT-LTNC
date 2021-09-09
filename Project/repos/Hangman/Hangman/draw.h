#ifndef DRAW_H
#define DRAW_H
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <fstream>
#include <chrono>
#include "renderingGame.h"

using namespace std;

const vector <string> waving = {
"   __o   \n"
"     |\\ \n"
"    / \\ \n",
"    \\o   \n"
"     |\\ \n"
"    / \\ \n",
};

void changeColor(int color);
string getHangPic(int badGuessCount);
const vector<string> HANGED = {
"   ------------\n"
"   |         /\n"
"   |        O\n"
"   |       /|\\\n"
"   |       / \\\n"
"   |         \n"
"   |         \n"
"   |         \n"
"   |         \n"
"-------        ",
"   ------------\n"
"   |          |\n"
"   |          O\n"
"   |         /|\\\n"
"   |         / \\\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        ",
"   ------------\n"
"   |           \\\n"
"   |            O\n"
"   |           /|\\\n"
"   |           / \\\n"
"   |             \n"
"   |             \n"
"   |             \n"
"   |             \n"
"-------        ",
"   ------------\n"
"   |          |\n"
"   |          O\n"
"   |         /|\\\n"
"   |         / \\\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        \n"
};
const vector <string> congrats = {
" #####    #####   #     #   #####   ######    #####   #######  #     #  #         #####   #######  #   #####   #     #\n",
"#     #  #     #  ##    #  #     #  #     #  #     #     #     #     #  #        #     #     #     #  #     #  ##    #\n",
"#        #     #  # #   #  #        #     #  #     #     #     #     #  #        #     #     #     #  #     #  # #   #\n",
"#        #     #  #  #  #  #  ####  ######   #     #     #     #     #  #        #     #     #     #  #     #  #  #  #\n",
"#        #     #  #   # #  #  #  #  #     #  #######     #     #     #  #        #######     #     #  #     #  #   # #\n",
"#     #  #     #  #    ##  #     #  #     #  #     #     #     #     #  #        #     #     #     #  #     #  #    ##\n",
" #####    #####   #     #   #####   #     #  #     #     #      #####   #######  #     #     #     #   #####   #     #\n"
};
const vector <string> dancing = {
"                                                  __O__    \n"
"                                                 / _| /    \n"
"                                                  | |      \n",

"                                                  __O__    \n"
"                                                  | | |    \n"
"                                                   / \\    \n",

"                                                  __O__    \n"
"                                                  \\ |_ \\  \n"
"                                                    | |    \n",

"                                                  __O__    \n"
"                                                  | | |    \n"
"                                                   / \\    \n",

};
void congratulation();
void leaderBoard(const string &scores);


//these colors has white background
const int BLUE = 241;
const int GREEN = 242;
const int RED = 244;
const int PURPLE = 245;
const int WHITE = 247;
const int GRAY = 248;
const int YELLOW = 246;
const int AQUA = 243;
const int BLACK = 240;


// AI draw
string getDrawing(int incorrectGuess);
string getNextHangman();
string getNextStandingman();
void playAnimation(bool isLosing, const string& word);

#endif
