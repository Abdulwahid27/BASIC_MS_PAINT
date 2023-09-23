#include "data_header.h"

#define UPKEY 72
#define DOWNKEY 80
#define LEFTKEY 75
#define RIGHTKEY 77
#define BACKSPACE 8
#define SPACEBAR 32
#define HEIGHT 16
#define WIDTH 120
#define ESCAPE 27

// print asterisk based on respective color
void print_symbol(int x, int y, char color, char symbol)
{
    set_color(color);
    gotoxy(x, y);
    printf("%c", symbol);
    reset_color();
}

void free_hand_drawings(char symbol)
{
    int x = 0, y = 15, ArrowKeyPressed = 0;
    ; // Initial cursor position
    gotoxy(40, 15);
    printf("Canvas starts from here");

    // infinite loop causing to run the program as long as user don't quit
    for (;;)
    {
        if (kbhit())
        { // Check if a key is pressed
            char ch = getch();

            if (ch == ESCAPE)
            {
                break; // Exit the loop
            }

            // Check for arrow keys
            if (ch == 0 || ch == -32)
            {
                ch = getch();

                // Move the cursor based on the arrow key
                if (ch == UPKEY)
                    y--;

                else if (ch == DOWNKEY)
                    y++;
                else if (ch == LEFTKEY)
                    x--;
                else if (ch == RIGHTKEY)
                    x++;

                // Limit the cursor within the terminal boundaries
                x = (x < 1) ? 1 : (x > WIDTH) ? WIDTH
                                              : x;
                y = (y < 1) ? 1 : (y < HEIGHT) ? HEIGHT
                                               : y;

                // Move the cursor to the new position without printing anything
                gotoxy(x, y);
                ArrowKeyPressed = 1;
            }
            else if (ArrowKeyPressed && (ch == SPACEBAR))
            { // Check for the spacebar
                print_symbol(x, y, 'w', symbol);
            }

            else if (ArrowKeyPressed && (ch == 'r' || ch == 'g' || ch == 'b' || ch == 'y' || ch == 'w'))
            {

                print_symbol(x, y, ch, symbol);
                ArrowKeyPressed = 0; // reset flag once arrow key is pressed
            }

            else if (ArrowKeyPressed && (ch == BACKSPACE))
            {

                print_symbol(x, y, 'w', ' ');
                gotoxy(x, y);
                ArrowKeyPressed = 0; // reset flag once arrow key is pressed
            }
        }
    }
}
