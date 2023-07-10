#pragma once

// Computer_ship

void comp_Aircraft() {
    srand(time(NULL));
    while (true) {
        place_ship = false;
        if (rand() % 2 == 1) {
            orien = 'h';
        }
        else {
            orien = 'v';
        }
        x = rand() % s;
        y = rand() % s;
        if (orien == 'h') {
            if (x > s - 2 || x < 1 || y < 1 || y > s - 5) {
                continue;
            }
            else {
                for (int i = y; i < y + 4; i++) {
                    comp[x][i] = 'A';
                }
                break;
            }
        }
        if (orien == 'v') {
            if (x > s - 5 || x < 1 || y > s - 2 || y < 1) {
                continue;
            }
            else {
                for (int i = x; i < x + 4; i++) {
                    comp[i][y] = 'A';
                }
                break;
            }
        }
    }
}

void comp_Battleship() {
    srand(time(NULL));
    int counter = 0;
    while (counter < 2) {
        while (true) {
            place_ship = false;
            if (rand() % 2 == 1) {
                orien = 'h';
            }
            else {
                orien = 'v';
            }
            x = rand() % s;
            y = rand() % s;
            if (orien == 'h') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 3) {
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 3; j++) {
                            if (comp[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        continue;
                    }
                    else {
                        for (int i = y; i < y + 3; i++) {
                            comp[x][i] = 'B';
                        }
                        break;
                    }
                }
            }
            if (orien == 'v') {
                if (x > s - 3 || x < 1 || y < 1 || y > s - 2) {
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 3; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (comp[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        continue;
                    }
                    else {
                        for (int i = x; i < x + 3; i++) {
                            comp[i][y] = 'B';
                        }
                        break;
                    }
                }
            }
        }
        counter++;
    }
}

void comp_Destroyer() {
    srand(time(NULL));
    int counter = 0;
    while (counter < 3) {
        while (true) {
            place_ship = false;
            if (rand() % 2 == 1) {
                orien = 'h';
            }
            else {
                orien = 'v';
            }
            x = rand() % s;
            y = rand() % s;
            if (orien == 'h') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 3) {
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 2; j++) {
                            if (comp[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        continue;
                    }
                    else {
                        for (int i = y; i < y + 2; i++) {
                            comp[x][i] = 'D';
                        }
                        break;
                    }
                }
            }
            if (orien == 'v') {
                if (x > s - 3 || x < 1 || y < 1 || y > s - 2) {
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 2; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (comp[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        continue;
                    }
                    else {
                        for (int i = x; i < x + 2; i++) {
                            comp[i][y] = 'D';
                        }
                        break;
                    }
                }
            }
        }
        counter++;
    }
}

void comp_Corvette() {
    srand(time(NULL));
    int counter = 0;
    while (counter < 4) {
        while (true) {
            place_ship = false;
            if (rand() % 2 == 1) {
                orien = 'h';
            }
            else {
                orien = 'v';
            }
            x = rand() % s;
            y = rand() % s;
            if (orien == 'h') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 2) {
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (comp[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        continue;
                    }
                    else {
                        for (int i = y; i < y + 1; i++) {
                            comp[x][i] = 'C';
                        }
                        break;
                    }
                }
            }
            if (orien == 'v') {
                if (x > s - 2 || x < 1 || y < 1 || y > s - 2) {
                    continue;
                }
                else {
                    for (int i = x - 1; i <= x + 1; i++) {
                        for (int j = y - 1; j <= y + 1; j++) {
                            if (comp[i][j] != '.') {
                                place_ship = true;
                                break;
                            }
                        }
                    }
                    if (place_ship) {
                        continue;
                    }
                    else {
                        for (int i = x; i < x + 1; i++) {
                            comp[i][y] = 'C';
                        }
                        break;
                    }
                }
            }
        }
        counter++;
    }
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            user_v[i][j] = user[i][j];
        }
    }
}