#include <windows.h>

void gotoxy(int x, int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void inputs_pos(int p, int q)
{

    COORD coord;
    coord.X = p;
    coord.Y = q;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
