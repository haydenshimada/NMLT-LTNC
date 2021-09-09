#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include "draw.h"
#include "start.h"
using namespace std;

void changeColor(int color) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

string getHangPic(int badGuessCount) {
	string picture[] = {
"   ------------\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        ",

"   ------------\n"
"   |          |\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        ",

"   ------------\n"
"   |          |\n"
"   |          O\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        ",

"   ------------\n"
"   |          |\n"
"   |          O\n"
"   |          |\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        ",

"   ------------\n"
"   |          |\n"
"   |          O\n"
"   |         /|\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        ",

"   ------------\n"
"   |          |\n"
"   |          O\n"
"   |         /|\\\n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
"-------        ",

"   ------------\n"
"   |          |\n"
"   |          O\n"
"   |         /|\\\n"
"   |         / \n"
"   |           \n"
"   |           \n"
"   |           \n"
"   |           \n"
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

	};
	return picture[badGuessCount];
}

void congratulation() {
    int n = 30;
    int k = 0;
    while (n != 0) {
        system("cls");
        int color[] = { RED, YELLOW, GREEN, AQUA, BLUE, PURPLE, GRAY };
        int index = 0;
        for (int i = 0; i < congrats.size(); i++) {
            changeColor(color[index]);
            index++;
            cout << congrats[i];
        }
        cout << dancing[k];

        changeColor(BLACK);
        k = (k + 1) % dancing.size();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        n--;
    }
    changeColor(7);
}

void leaderBoard(const string &scores) {
    ifstream file(scores);

    vector <player> vt;
    if (!file.is_open())
        cout << "Open file to show leaderboard failed!" << endl;

    else {
        while (!file.eof()) {
            string name;
            file >> name;
            if (name.empty())
                break;

            float time;
            file >> time;

            int score;
            file >> score;

            vt.push_back({ name, time, score });
        }
        file.close();

        if (vt.empty())
            cout << "This one is empty!" << endl;
        else {
            changeColor(11); // aqua text and black background
            cout << setw(40) << "Leaderboard" << endl;
            changeColor(15); // white text
            cout << "==================================================================" << endl
                << setw(15) << "Name" << setw(10) << '|' << setw(10) << "Time" << setw(10) << '|' << setw(10) << "Score" << endl;
            cout << "------------------------------------------------------------------" << endl;

            int color[] = { 12, 14, 10 , 15}; // red, yello, green, white
            int index = 0;

            for (int i = 0; i < vt.size(); i++) {
                changeColor(color[index]);
                cout << setw(15) << vt[i].name << setw(10) << '|' << setw(10) << vt[i].time << setw(10) << '|' << setw(10) << vt[i].score << endl;
                if (index < 3)
                    index++;
                else index = 3;
            }
            changeColor(15); // white text
        }
    }
}

// Ai funtion
string getDrawing(int incorrectGuess)
{
    static const string figure[] = {
        "   -------------    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |                \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |                \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |           |    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|    \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |                \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          /     \n"
        "   |     \n"
        " -----   \n",
        "   -------------    \n"
        "   |           |    \n"
        "   |           O    \n"
        "   |          /|\\  \n"
        "   |          / \\  \n"
        "   |     \n"
        " -----   \n",
    };

    const int NUMBER_OF_FIGURES = sizeof(figure) / sizeof(string);
    return figure[incorrectGuess % NUMBER_OF_FIGURES];
}
string getNextHangman()
{
    static string figure[] = {
          "   ------------+    \n"
          "   |          /     \n"
          "   |         O      \n"
          "   |        /|\\    \n"
          "   |        / \\    \n"
          "   |        \n"
          " -----      \n" ,
          "   ------------+     \n"
          "   |           |     \n"
          "   |           O     \n"
          "   |          /|\\   \n"
          "   |          / \\   \n"
          "   |        \n"
          " -----      \n",
          "   ------------+      \n"
          "   |            \\    \n"
          "   |            O     \n"
          "   |           /|\\   \n"
          "   |           / \\   \n"
          "   |      \n"
          " -----    \n",
          "   ------------+     \n"
          "   |           |     \n"
          "   |           O     \n"
          "   |          /|\\   \n"
          "   |          / \\   \n"
          "   |        \n"
          " -----      \n",
    };
    const int NUMBER_OF_FIGURES = sizeof(figure) / sizeof(string);
    static int currentFigure = 0;
    return figure[(currentFigure++) % NUMBER_OF_FIGURES];
}

string getNextStandingman()
{
    static string figure[] = {
          "     O     \n"
          "    /|\\   \n"
          "    | |    \n",
          "     O     \n"
          "    /|\\   \n"
          "    / \\   \n",
          "   __O__   \n"
          "     |     \n"
          "    / \\   \n",
          "    \\O/   \n"
          "     |     \n"
          "    / \\   \n",
          "   __O__   \n"
          "     |     \n"
          "    / \\   \n",
          "     O     \n"
          "    /|\\   \n"
          "    / \\   \n" ,
          "    O     \n"
          "    /|\\   \n"
          "    / \\   \n" ,
          "     O     \n"
          "    /|\\   \n"
          "    / \\   \n" ,
          "      O     \n"
          "    /|\\   \n"
          "    / \\   \n" ,
          "     O     \n"
          "    /|\\   \n"
          "    / \\   \n" ,
    };
    const int NUMBER_OF_FIGURES = sizeof(figure) / sizeof(string);
    static int currentFigure = 0;
    return figure[(currentFigure++) % NUMBER_OF_FIGURES];
}

void playAnimation(bool isLosing, const string& word)
{
    if (isLosing) {
        PlaySound(TEXT("GameOver.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    else {
        PlaySound(TEXT("GameClear.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    int n = 10;
    while (n--) {
        clearScreen();
        if (isLosing) {           
            cout << endl << "I lost :(. My best word is: " << word << endl;
        }
        else {
            cout << endl << "Haha, I win :D. The word is: " << word << endl;
        }
        cout << (isLosing ? getNextHangman() : getNextStandingman());
        this_thread::sleep_for(chrono::milliseconds(400));
    }
}