#include "AiFuntion.h"

vector<string> readWordListFromFile(const string& filePath)
{
    vector<string> wordList;
    string word;
    ifstream wordFile(filePath);
    if (wordFile.is_open()) {
        while (wordFile >> word) {
            wordList.push_back(word);
        }
        wordFile.close();
        return wordList;
    }
    else {
        throw domain_error("Error: Unable to open vocabulary file " + filePath);
    }
}

int getUserWordLength()
{
    int wordLength;
    cout << endl << "Enter your word length: ";
    cin >> wordLength;
    return wordLength;
}

void initialize(int& wordLength, string& secretWord, int& incorrectGuess, set<char>& previousGuesses, bool& stop)
{
    wordLength = getUserWordLength();
    secretWord = string(wordLength, '-');
    incorrectGuess = 0;
    previousGuesses = set<char>();
    stop = false;
}

void render(int incorrectGuess, const set<char>& previousGuesses, const string& secretWord)
{
    clearScreen();
    cout << endl << "Incorrect guess = " << incorrectGuess
        << "   previous guesses = ";
    for (char c : previousGuesses)
        cout << c;
    cout << "   secretWord = " << secretWord << endl;
    cout << getDrawing(incorrectGuess) << endl;
}

string getUserAnswer(char guess)
{
    string answer;
    cout << endl << "I guess " << guess << ", please enter your mask: ";
    cin >> answer;
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    return answer;
}

void update(char guess, const string& mask, int& incorrectGuess, set<char>& previousGuesses, string& secretWord, bool& stop)
{
    if (!isGoodMask(guess, mask, secretWord))
        throw invalid_argument("mistake entering answer");

    previousGuesses.insert(guess);
    if (isAllDash(mask)) {
        incorrectGuess++;
        if (incorrectGuess == MAX_GUESSES) stop = true;
    }
    else {
        updateSecretWord(mask, secretWord);
        if (isAllNotDash(secretWord)) stop = true;
    }
}

bool isGoodMask(char guess, const string& mask, const string& secretWord)
{
    if (mask.length() != secretWord.length()) return false;
    for (unsigned int i = 0; i < secretWord.length(); i++)
        if (mask[i] != '-') {
            if (mask[i] != guess)
                return false;
            if (secretWord[i] != '-' && secretWord[i] != mask[i])
                return false;
        }
    return true;
}

bool isAllDash(const string& s)
{
    for (char c : s)
        if (c != '-') return false;
    return true;
}

bool isAllNotDash(const string& s)
{
    for (char c : s)
        if (c == '-') return false;
    return true;
}

void updateSecretWord(const string& mask, string& secretWord)
{
    for (unsigned int i = 0; i < secretWord.length(); i++)
        if (mask[i] != '-')
            secretWord[i] = mask[i];
}