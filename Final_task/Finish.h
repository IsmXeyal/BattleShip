#pragma once

void GameOver() {
    system("Color 0F");
    system("cls");
    for (int i = 0; i < 10; i++) {
        delay(60);
        cout << endl;
    }
    SetColor(15, 15);
    cout << "\t\t\t\t\t\t----------------------------------------------------------------------" << endl << endl;
    SetColor(12, 0);
    char* game = new char[500] { "\t\t\t\t\t\t     _____          ___  __ _______   ______      ________ _____  \n"
        "\t\t\t\t\t\t    / ____|    /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ \n"
        "\t\t\t\t\t\t    | |  ___  /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |\n"
        "\t\t\t\t\t\t    | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  / \n"
        "\t\t\t\t\t\t    | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\ \n"
        "\t\t\t\t\t\t    \\______/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ \n\n\n"};
    for (int i = 0; game[i] != '\0'; i++) {
        cout << game[i];
        delay(10);
    }
    SetColor(15, 15);
    cout << "\t\t\t\t\t\t----------------------------------------------------------------------" << endl << endl;
    SetColor(0, 0);
}