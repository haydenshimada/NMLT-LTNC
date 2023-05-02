#ifndef AIORHUMAN_H
#define AIORHUMAN_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include <ctime>
#include <set>
#include <Windows.h>
#include "MMSystem.h"
#pragma comment(lib, "Winmm.lib")
#include "draw.h"
#include "start.h"
#include "renderingGame.h"

using namespace std;


void HUMAN(bool& loadingFlag);

void AI(bool& loadingFlag);

#endif
