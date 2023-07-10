#pragma once

void Show_both() {
    system("Color 1F");
    system("cls");
    cout << " \n\n\t\t\t\t";
    SetColor(14, 0);
    cout << " " << name << " Board ";
    SetColor(14, 1);
    cout << "\t\t\t\t\t\t\t\t\t";
    SetColor(14, 0);
    cout << " COMPUTER Board ";
    SetColor(14, 1);
    cout << endl << endl;
    cout << "  ";
    cout << right;
    for (int j = 0; j < 10; j++) {
        cout << " ";
    }
    for (int j = 0; j < s; j++) {
        SetColor(0, 11);
        cout << setw(2) << j << " ";
    }
    SetColor(14, 1);
    cout << "\t\t\t";
    cout << "  ";
    cout << right;
    for (int j = 0; j < s; j++) {
        SetColor(0, 11);
        cout << setw(2) << j << " ";
    }
    SetColor(14, 1);
    cout << endl;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < 10; j++) {
            cout << " ";
        }
        SetColor(0, 11);
        cout << setw(2) << i;
        SetColor(14, 1);
        for (int j = 0; j < s; j++) {
            if (user_v[i][j] == '*') {
                SetColor(0, 4);
                cout << setw(2) << user_v[i][j] << " ";
                SetColor(14, 1);
            }
            else if (user_v[i][j] == a) {
                SetColor(4, 0);
                cout << setw(2) << user_v[i][j] << " ";
                SetColor(14, 1);
            }
            else if (i == 0 || j == 0 || i == s - 1 || j == s - 1) {
                SetColor(14, 9);
                cout << setw(2) << user_v[i][j] << " ";
                SetColor(14, 1);
            }
            else {
                cout << setw(2) << user_v[i][j] << " ";
            }
        }
        SetColor(14, 1);
        cout << "\t\t\t";
        SetColor(0, 11);
        cout << setw(2) << i;
        SetColor(14, 1);
        for (int j = 0; j < s; j++) {
            if (comp_v[i][j] == '*') {
                SetColor(0, 4);
                cout << setw(2) << comp_v[i][j] << " ";
                SetColor(14, 1);
            }
            else if (comp_v[i][j] == a) {
                SetColor(4, 0);
                cout << setw(2) << comp_v[i][j] << " ";
                SetColor(14, 1);
            }
            else if (i == 0 || j == 0 || i == s - 1 || j == s - 1) {
                SetColor(14, 9);
                cout << setw(2) << comp_v[i][j] << " ";
                SetColor(14, 1);
            }
            else {
                cout << setw(2) << comp_v[i][j] << " ";
            }
        }
        cout << endl;
    }
}

void Start_Game() {
    system("Color 1F");
    bool gameover = false;

    while (true) {
        Show_both();
        while (true) {
            cout << endl;
            cout << "\n\t\t\t\t\t\t\t\t\tEnter x and y: ";
            cin >> x >> y;
            if (x > s - 2 || x < 1 || y > s - 2 || y < 1 || comp_v[x][y] == a || comp_v[x][y] == '*') {
                cout << "\n\t\t\t\t\t\t\t\t\tInvalid input... TRY AGAIN!" << endl;
                continue;
            }
            else {
                if (comp[x][y] == 'A' || comp[x][y] == 'B' || comp[x][y] == 'C' || comp[x][y] == 'D') {
                    if (comp_v[x][y] != a) {
                        comp_v[x][y] = a;
                        cout << "\a\a";
                        system("cls");
                        Show_both();
                        win++;
                        if (win == 20) {
                            gameover = true;
                            break;
                        }
                        continue;
                    }
                    else {
                        cout << "\n\t\t\t\t\t\t\t\t\tInvalid input... TRY AGAIN!" << endl;
                        continue;
                    }
                }
                else {
                    comp_v[x][y] = '*';
                    break;
                }
            }
        }
        if (gameover) {
            cout << "\n\n\t\t\t\t\t\t\t\t";
            SetColor(4, 0);
            cout << "  CONGRATULATIONS " << name << "!! YOU WON...  " << endl;
            delay(3000);
            cin.ignore();
            cin.clear();
            break;
        }
        while (true) {
            srand(time(NULL));
            x = rand() % s;
            y = rand() % s;
            if (x > s - 2 || x < 1 || y > s - 2 || y < 1 || user_v[x][y] == a || user_v[x][y] == '*') {
                continue;
            }
            else {
                if (user[x][y] == 'A' || user[x][y] == 'B' || user[x][y] == 'C' || user[x][y] == 'D') {
                    if (user_v[x][y] != a) {
                        user_v[x][y] = a;
                        cout << "\a\a";
                        system("cls");
                        Show_both();
                        delay(1500);
                        comp_win++;
                        if (comp_win == 20) {
                            gameover = true;
                            break;
                        }
                        continue;
                    }
                    else {
                        continue;
                    }
                }
                else {
                    user_v[x][y] = '*';
                    break;
                }
            }
        }
        if (gameover) {
            cout << "\n\n\t\t\t\t\t\t\t\t";
            SetColor(4, 0);
            cout << "  Ooops!! YOU LOSE... COMPUTER WON!!!  " << endl;
            delay(3000);
            cin.ignore();
            cin.clear();
            break;
        }
    }
}