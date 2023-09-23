#include <windows.h>
#include <stdio.h>
#include "color.h"

void set_color(char color)
{
    int COLOR;
    if (color == 'r')
    {
        COLOR = RED;
    }
    else if (color == 'g')
    {
        COLOR = GREEN;
    }
    else if (color == 'b')
    {
        COLOR = BLUE;
    }
    else if (color == 'y')
    {
        COLOR = YELLOW;
    }
    else if (color == 'w')
    {
        COLOR = WHITE;
    }
    else
    {
        printf("Invalid color select from (r/g/b/w)!");
        exit(0);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), COLOR);
}

void reset_color()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}
