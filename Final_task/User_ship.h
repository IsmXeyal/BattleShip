#pragma once

void User_Board() {
    SetColor(15, 0);
    for (int i = 0; i < s; i++) {
        user[i] = new char[s];
        comp[i] = new char[s];
        comp_v[i] = new char[s];
        user_v[i] = new char[s];
        for (int j = 0; j < s; j++)
        {
            user[i][j] = '.';
            comp[i][j] = '.';
            comp_v[i][j] = '.';
            user_v[i][j] = '.';
        }
    }
    cout << endl;
    cout << right;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < 20; j++) {
            cout << " ";
        }
        if (i == 0) {
            cout << "    ";
            for (int j = 0; j < s; j++) {
                cout << setw(2) << j << " ";
            }
            cout << endl;
            for (int j = 0; j < 20; j++) {
                cout << " ";
            }
        }
        cout << "  ";
        cout << setw(2) << i;
        for (int j = 0; j < s; j++) {
            cout << setw(2) << user[i][j] << " ";
        }
        cout << endl;
    }
}

void Show_user() {
    SetColor(14, 0);
    system("cls");
    cout << endl;
    cout << right;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < 20; j++) {
            cout << " ";
        }
        if (i == 0) {
            cout << "    ";
            for (int j = 0; j < s; j++) {
                cout << setw(2) << j << " ";
            }
            cout << endl;
            for (int j = 0; j < 20; j++) {
                cout << " ";
            }
        }
        cout << "  ";
        cout << setw(2) << i;
        for (int j = 0; j < s; j++) {
            cout << setw(2) << user[i][j] << " ";
        }
        cout << endl;
    }
}

// Aircraft carrier

void Aircraft() {
    SetColor(3, 0);
    while (true) {
        char orien;
        int x, y;
        cout << "\n\t\t\t~~~$ Hint: Write x and y sidebyside with space!!" << endl;
        cout << "\n\t\t\t\t\t\t~~Aircraft carrier~~" << endl << endl;
        cout << "\t\t\t1.Enter Orientation (h - horizontal, v - vertical): ";
        cin >> orien;
        cout << "\t\t\t2.x and y coordinates: ";
        cin >> x >> y;
        if (orien == 'h') {
            if (x > s - 2 || x < 1 || y < 1 || y > s - 5) {
                cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                continue;
            }
            else {
                for (int i = y; i < y + 4; i++) {
                    user[x][i] = 'A';
                }
                break;
            }
        }
        if (orien == 'v') {
            if (x > s - 5 || x < 1 || y > s - 2 || y < 1) {
                cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                continue;
            }
            else {
                for (int i = x; i < x + 4; i++) {
                    user[i][y] = 'A';
                }
                break;
            }
        }
    }
    Show_user();
}

// Battleship

bool place_ship = false;
void Battleship() {
    int counter = 0;
    while (counter < 2) {
        SetColor(10, 0);
        while (true) {
            place_ship = false;
            cout << "\n\t\t\t~~~$ Hint: Write x and y sidebyside with space!!" << endl;
            cout << "\n\t\t\t\t\t\t~~Battleship~~" << endl << endl;
            cout << "\t\t\t1.Enter Orientation (h - horizontal, v - vertical): ";
            cin >> orien;
            cout << "\t\t\t2.x and y coordinates: ";
            cin >> x >> y;

            if (orien == 'h') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 4) {
                    cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 3; j++) {
                            if (user[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        cout << "\n\t\t\tYou can't place ship here!! TRY AGAIN!" << endl;
                        continue;
                    }
                    else {
                        for (int i = y; i < y + 3; i++) {
                            user[x][i] = 'B';
                        }
                        break;
                    }
                }
            }
            if (orien == 'v') {
                if (x > s - 4 || x < 1 || y < 1 || y > s - 2) {
                    cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 3; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (user[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        cout << "\n\t\t\tYou can't place ship here!! TRY AGAIN!" << endl;
                        continue;
                    }
                    else {
                        for (int i = x; i < x + 3; i++) {
                            user[i][y] = 'B';
                        }
                        break;
                    }
                }
            }
        }
        Show_user();
        counter++;
    }
}

// Destroyer

void Destroyer() {
    int counter = 0;
    while (counter < 3) {
        SetColor(7, 0);
        while (true) {
            place_ship = false;
            cout << "\n\t\t\t~~~$ Hint: Write x and y sidebyside with space!!" << endl;
            cout << "\n\t\t\t\t\t\t~~Destroyer~~" << endl << endl;
            cout << "\t\t\t1.Enter Orientation (h - horizontal, v - vertical): ";
            cin >> orien;
            cout << "\t\t\t2.x and y coordinates: ";
            cin >> x >> y;
            if (orien == 'h') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 3) {
                    cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 2; j++) {
                            if (user[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        cout << "\n\t\t\tYou can't place ship here!! TRY AGAIN!" << endl;
                        continue;
                    }
                    else {
                        for (int i = y; i < y + 2; i++) {
                            user[x][i] = 'D';
                        }
                        break;
                    }
                }
            }
            if (orien == 'v') {
                if (x > s - 3 || x < 1 || y < 1 || y > s - 2) {
                    cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 2; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (user[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        cout << "\n\t\t\tYou can't place ship here!! TRY AGAIN!" << endl;
                        continue;
                    }
                    else {
                        for (int i = x; i < x + 2; i++) {
                            user[i][y] = 'D';
                        }
                        break;
                    }
                }
            }
        }
        Show_user();
        counter++;
    }
}

// Corvette

void Corvette() {
    int counter = 0;
    while (counter < 4) {
        SetColor(6, 0);
        while (true) {
            place_ship = false;
            cout << "\n\t\t\t~~~$ Hint: Write x and y sidebyside with space!!" << endl;
            cout << "\n\t\t\t\t\t\t~~Corvette~~" << endl << endl;
            cout << "\t\t\t1.Enter Orientation (h - horizontal, v - vertical): ";
            cin >> orien;
            cout << "\t\t\t2.x and y coordinates: ";
            cin >> x >> y;
            if (orien == 'h') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 2) {
                    cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (user[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }

                    }
                    if (place_ship) {
                        cout << "\n\t\t\tYou can't place ship here!! TRY AGAIN!" << endl;
                        continue;
                    }
                    else {
                        for (int i = y; i < y + 1; i++) {
                            user[x][i] = 'C';
                        }
                        break;
                    }
                }
            }
            if (orien == 'v') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 2) {
                    cout << "\n\t\t\tWRONG PLACE!!. TRY AGAIN!" << endl;
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (user[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        cout << "\n\t\t\tYou can't place ship here!! TRY AGAIN!" << endl;
                        continue;
                    }
                    else {
                        for (int i = x; i < x + 1; i++) {
                            user[i][y] = 'C';
                        }
                        break;
                    }
                }
            }
        }
        Show_user();
        counter++;
    }

    SetColor(2, 0);
    cout << endl << endl;
    cout << " \t\t\t\t\t\t Press ENTER to continue!";
    cin.ignore();
    cin.clear();
    char ch = _getch();
    cout << ch << "\a\a\a\a";
}