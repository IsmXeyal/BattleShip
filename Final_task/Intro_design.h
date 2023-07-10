#pragma once

void PrintName() {
    delay(200);
    for (int i = 0; i < 7; i++) {
        cout << endl;
    }

    SetColor(3, 0);
    delay(300);
    cout << "\t*******       *****     *********   *********   ***         *******     ******   ***    ***   ***   *******   " << endl;
    delay(120);
    cout << "\t**    **     **   **    *********   *********   ***         *******    ***   **  ***    ***   ***   ********  " << endl;
    delay(120);
    cout << "\t**    ***   **     **      ***         ***      ***         ***        ***       ***    ***         ***    ** " << endl;
    delay(120);
    cout << "\t**   ***   **       **     ***         ***      ***         ***        ***       ***    ***   ***   ***    ** " << endl;
    delay(120);
    cout << "\t******     ***********     ***         ***      ***         *******     ******   **********   ***   ********  " << endl;
    delay(120);
    cout << "\t**   ***   ***********     ***         ***      ***         *******         ***  **********   ***   *******   " << endl;
    delay(120);
    cout << "\t**    ***  **       **     ***         ***      ***         ***            ***   ***    ***   ***   ***       " << endl;
    delay(120);
    cout << "\t**   ***   **       **     ***         ***      *********   *******   **   ***   ***    ***   ***   ***       " << endl;
    delay(120);
    cout << "\t******     **       **     ***         ***      *********   *******    ******    ***    ***   ***   ***       " << endl;

    delay(3000);
    system("cls");
}

void Name() {
    while (true) {
        system("cls");
        SetColor(5, 0);
        cout << "\n \t~~~$ Hint: Login name mustn't be less than 10!! and in your name you mustn't put 'space'!!!" << endl;
        for (int i = 0; i < 6; i++) {
            cout << endl;
        }
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        SetColor(3, 0);
        cout << "Enter Your Login Name:" << endl;
        cout << "\t\t\t\t\t---------------------------------" << endl << endl;
        SetColor(6, 0);
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        cout << "\t  ";
        cin.getline(name, 20);
        int len = strlen(name);
        if (len < 10) {
            continue;
        }
        bool has_space = false;
        for (int i = 0; name[i] != '\0'; i++) {
            if (name[i] == ' ') {
                has_space = true;
                break;
            }
        }
        if (has_space) {
            continue;
        }
        break;
    }
}

void SecondPage() {
    while (true) {
        SetColor(14, 14);
        system("cls");

        for (int i = 0; i < 10; i++) {
            cout << endl;
        }
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        SetColor(4, 14);
        cout << " --------------------- " << endl;
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        cout << "| 1.Play Battleship!! |" << endl;
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        cout << " --------------------- " << endl;
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        SetColor(4, 14);
        cout << " --------------------- " << endl;
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        cout << "|      2. Rules...    |" << endl;
        for (int i = 0; i < 45; i++) {
            cout << " ";
        }
        cout << " --------------------- " << endl;
        ch = _getch();

        if (ch == 49) {
            cout << "\a\a\a";
            break;
        }
        if (ch == 50) {
            cout << "\a\a\a";
            system("cls");
            system("Color 0F");
            SetColor(4, 0);
            delay(500);
            cout << "\t\t\t\t   Hi:), Welcome to the Battleship....." << endl << endl;
            SetColor(6, 0);
            delay(500);
            cout << "\t\t\t  This is a simple game and you will have a good time..." << endl << endl;
            delay(500);
            cout << "   The rules are pretty simple, first, you will set your ship's on the board and then the computer will do the same." << endl << endl;
            SetColor(2, 0);
            delay(500);
            cout << "   1. You have to destroy your opponent's war ships before he destroys yours." << endl << endl;
            delay(500);
            cout << "   2. The battlefield is of (20 x 20) grid size in which you place your ships." << endl << endl;
            delay(500);
            cout << "   3. You can place your ships by entering its orientation, i.e horizontal or vertical. \n\tFor horizontal orientation, type 'h' in the orientation option and type 'v' for vertical." << endl << endl;
            delay(500);
            cout << "   4. Its x and y coordinates (both separated by a space) where x is the row number and y is the column number." << endl << endl;
            delay(500);
            cout << "   5. You have a fleet of 4 battle ships: \n\tAircraft Carrier num: 1- (4 units long), \n\tBattleship num: 2- (3 units long), \n\tDestroyer num: 3- (2 units long) \n\tCorvette num: 4- (1 units long)." << endl << endl;
            delay(500);
            cout << "   6. After placing your ships, you can attack the enemy area. To attack a area, enter its x and y coordinate (separated by a space)." << endl << endl;
            delay(500);
            cout << "   7. Attack hit to the enemy ship is denoted by a '" << a << "' and you get an extra turn." << endl << endl;
            delay(500);
            cout << "   8. Attack miss is denoted by a '*' and your turn ends." << endl << endl;
            SetColor(4, 0);
            delay(500);
            cout << "\t\t\t\t   Incredible GAME is waiting for you....." << endl << endl;
            delay(500);
            SetColor(3, 0);
            cout << "\t\t\t\t\tPress ENTER to continue!";
            cin.ignore();
            cin.clear();
            cout << "\a\a";
            continue;
        }
    }
    system("cls");
    system("Color 0F");
}