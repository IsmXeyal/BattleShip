#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <iomanip>

using namespace std;

void SetColor(int fg, int bg) {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, fg | (bg << 4));
}

void delay(clock_t a) {
    clock_t start = clock();
    while (clock() - start < a);
}

#include "Variables.h"

#include "Intro_design.h"

#include "User_ship.h"

#include "Comp_ship.h"

#include "Play_game.h"

#include "Finish.h"

void Delete_arr() {
    for (int i = 0; i < s; i++) {
        delete[] user[i];
        delete[] comp[i];
        delete[] comp_v[i];
        delete[] user_v[i];
    }
    delete[] user;
    delete[] comp;
    delete[] comp_v;
    delete[] user_v;
}

int main() {
    PrintName();
    Name();
    SecondPage();
    User_Board();
    Aircraft();
    Battleship();
    Destroyer();
    Corvette();
    comp_Aircraft();
    comp_Battleship();
    comp_Destroyer();
    comp_Corvette();
    Show_both();
    Start_Game();
    GameOver();
    Delete_arr();

    return 0;
}
