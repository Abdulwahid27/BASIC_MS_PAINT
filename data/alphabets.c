#include "data_header.h"

void print_all_alphabets(char symbol, char color, int x, int y, int size)
{
    char c, start = 65, end = 90;

    for (int i = start; i <= end; i++)
    {
        if (i != start)
        {
            y = y + size + 3;
        }

        alpha_range(x, y, size, symbol, color, i);
    }
}

void print_alphabets_range(char symbol, char color, int x, int y, int size, char start, char end)
{
    for (int i = start; i <= end; i++)
    {
        if (i != start)
        {
            y = y + size + 3;
        }

        alpha_range(x, y, size, symbol, color, i);
    }
}

// function for range
void alpha_range(int x, int y, int size, char symbol, char color, int i)
{
    if (i == 65 || i == 97)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_a(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 66 || i == 98)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_b(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 67 || i == 99)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_c(x, y, size, symbol);
        reset_color(); // for reseting the specified color
        char a = 'A';
    }
    else if (i == 68 || i == 100)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_d(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 69 || i == 101)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_e(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 70 || i == 102)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_f(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 71 || i == 103)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_g(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 72 || i == 104)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_h(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 73 || i == 105)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_i(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 74 || i == 106)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_j(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 75 || i == 107)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_k(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 76 || i == 108)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_l(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 77 || i == 109)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_m(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 78 || i == 110)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_n(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 79 || i == 111)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_o(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 80 || i == 112)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_p(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 81 || i == 113)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_q(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 82 || i == 114)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_r(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 83 || i == 115)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_s(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 84 || i == 116)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_t(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 85 || i == 117)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_u(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 86 || i == 118)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_v(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 87 || i == 119)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_w(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 88 || i == 120)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_x(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 89 || i == 121)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_y(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else if (i == 90 || i == 122)
    {
        set_color(color); // for getting the required symbol in the specified color
        alphabet_z(x, y, size, symbol);
        reset_color(); // for reseting the specified color
    }
    else // add further more
    {
        printf("thanks \n");
    }
}

// 1)  FUNCTION DEFINITION FOR "A" ALPHABET
void alphabet_a(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);
    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((col == 0 || col == size - 1) && row != 0) // ondition to print 1st and last col
            {

                printf("%c", symbol);
            }
            else if ((row == 0 || row == mid) && (col > 0 && col < size - 1)) // condition for 1st, mid and last row
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 2)  FUNCTION DEFINITION FOR "B" ALPHABET
void alphabet_b(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {
        printf("%c", symbol);
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 || row == mid || row == size - 1) && col != size - 1)
            {
                printf("%c", symbol);
            }
            else if (col == size - 1 && !(row == 0 || row == mid || row == size - 1))
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 3)  FUNCTION DEFINITION FOR "C" ALPHABET
void alphabet_c(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((col == 0 && row == 0) || (col == 0 && row == size - 1)) // condition to print asteriks in a format
            {
                printf(" ");
            }
            else if (row == 0 || row == size - 1 || col == 0)
            {
                printf("%c", symbol);
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    y++;
    gotoxy(x, y);
}

// 4)  FUNCTION DEFINITION FOR "D" ALPHABET
void alphabet_d(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        printf("%c", symbol);
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 || row == size - 1) && col != size - 1) // for printing half face
            {
                printf("%c", symbol);
            }
            else if (col == size - 1 && !(row == 0 || row == size - 1)) // for printing another half face
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 5)  FUNCTION DEFINITION FOR "E" ALPHABET
void alphabet_e(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        printf("%c", symbol);
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 || row == mid || row == size - 1) && col != size) // for printing the shape of "E"
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 6)  FUNCTION DEFINITION FOR "F" ALPHABET
void alphabet_f(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        printf("%c", symbol);
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 || row == mid) && col != size) // for printing the shape of "F"
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 7)  FUNCTION DEFINITION FOR "G" ALPHABET
void alphabet_g(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        printf("%c", symbol);
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 || row == size - 1) && col != size) // for upper section
            {
                printf("%c", symbol);
            }
            else if (col == size - 1 && row > mid) // for lower section
            {
                printf("%c", symbol);
            }
            else if (row == mid && (col == size - 1 || col == size - 2 || col == size - 3)) // for printing middle section
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 8)  FUNCTION DEFINITION FOR "H" ALPHABET
void alphabet_h(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((col == 0 || col == size - 1) && !(col > 0 && col < size - 1)) // ondition for upper part
            {
                printf("%c ", symbol);
            }
            else if ((row == mid) && (col > 0 && col < size - 1)) // ondition for lower part
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 9)  FUNCTION DEFINITION FOR "I" ALPHABET
void alphabet_i(int x, int y, int size, char symbol)
{
    int half = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (row == 0 || row == size - 1 || col == half) // for printing upper and lower part
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 10)  FUNCTION DEFINITION FOR "J" ALPHABET
void alphabet_j(int x, int y, int size, char symbol)
{
    int half = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (row == 0 || (row == size - 1 && col < half) || col == half) // for printing upper and lower part
            {
                printf("%c ", symbol);
            }
            else if (row == size - 2 && col == 0)
            {
                printf("%c ", symbol);
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 11)  FUNCTION DEFINITION FOR "K" ALPHABET
void alphabet_k(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (col == (size) / 2 - 1 || (col == size - row - 1 && row <= mid) || (col == row && row >= mid) || (row == mid && col == mid)) // masla
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 12)   FUNCTION DEFINITION FOR "L" ALPHABET
void alphabet_l(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((col == 0) || (row == size - 1))
            {
                printf(" %c", symbol);
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }

    y++;
    y++;
    gotoxy(x, y);
}

// 13)   FUNCTION DEFINITION FOR "M" ALPHABET
void alphabet_m(int x, int y, int size, char symbol)
{
    int mid = (size - 1) / 2;
    int i = 0;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop for rows
    {
        for (int col = 0; col < size; col++) // 2nd loop for coloumns
        {
            if (col == 0 || col == size - 1 || (row <= mid && (row == col || col == size - row - 1))) // conditions
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }

    y++;
    y++;
    gotoxy(x, y);
}

// 14)   FUNCTION DEFINITION FOR "N" ALPHABET
void alphabet_n(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((col == row) || (col == 0) || (col == size - 1))
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 15)   FUNCTION DEFINITION FOR "O" ALPHABET
void alphabet_o(int x, int y, int size, char symbol)
{
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (row == 0 && (col == 0 || col == size - 1)) // for printing first row
            {
                printf("  ");
            }
            else if (row == size - 1 && (col == 0 || col == size - 1)) // for printing  last row
            {
                printf("  ");
            }
            else if (row == 0 || row == size - 1 || col == 0 || col == size - 1) // for printing 1st and last col
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 16)   FUNCTION DEFINITION FOR "P" ALPHABET
void alphabet_p(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 && col != size - 1) || (row == mid && col != size - 1) || (col == 0) || (row < mid && (col == size - 1 && row != 0)))
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 17)   FUNCTION DEFINITION FOR "Q" ALPHABET
void alphabet_q(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (row == 0 && (col == 0 || col == size - 2)) // for printing first row
            {
                printf("  ");
            }
            else if (row == size - 1 && (col == 0)) // for printing (row) upper part of "Q"
            {
                printf("  ");
            }
            else if ((row == 0 && col < size - 2) || row == size - 1 || col == 0 || col == size - 2) // for printing 1st and last col
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 18)   FUNCTION DEFINITION FOR "R" ALPHABET
void alphabet_r(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 && col != size - 1) || (row == mid && col != size - 1) || (col == 0) || (row < mid && (col == size - 1 && row != 0)) || (col == row - mid + 1 && row >= mid))
            {
                printf("%c ", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 19)   FUNCTION DEFINITION FOR "S" ALPHABET
void alphabet_s(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0) || (row == size - 1) || (row == mid) || (row < mid && col == 0) || (row > mid && col == size - 1))
            {
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }

    y++;
    y++;
    gotoxy(x, y);
}

// 20)   FUNCTION DEFINITION FOR "T" ALPHABET
void alphabet_t(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0) || (col == size / 2))
            {
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 21)   FUNCTION DEFINITION FOR "U" ALPHABET
void alphabet_u(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == size) || (col == 0) || (row == size - 1) || (col == size - 1))
            {
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 22)  FUNCTION DEFINITION FOR "V" ALPHABET
void alphabet_v(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    int wth = size + size - 1; // to print the shape accurately  through sizeght and width
    int i = 0;                 // we have  tkaen (i,j) for getting definite shape of v
    int j = wth - 1;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < wth; col++) // 2nd loop
        {
            if (row == col) // condition for 1st half part
            {
                printf("%c", symbol);
            }
            else if ((row == i && col == j)) // condition for 2nd half part
            {
                printf("%c", symbol);
                i++;
                j--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }

    y++;
    y++;
    gotoxy(x, y);
}

// 23)  FUNCTION DEFINITION FOR "W" ALPHABET
void alphabet_w(int x, int y, int size, char symbol)
{
    int mid = (size - 1) / 2;
    int i = 0;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (col == 0 || col == size - 1 || (row > mid && (col == size - row - 1)) || (col == row && row >= mid))
            {
                printf("%c ", symbol);
                i++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    y++;
    gotoxy(x, y);
}

// 24)  FUNCTION DEFINITION FOR "X" ALPHABET
void alphabet_x(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    int i = 0;
    int j = size - 1;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == i) && (col == j)) // condition for 1st half part
            {
                printf("%c", symbol);
                i++;
                j--;
            }
            else if (row == col) // condition for 2nd half part
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }

    y++;
    y++;
    gotoxy(x, y);
}

// 25)  FUNCTION DEFINITION FOR "Y" ALPHABET
void alphabet_y(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    int i = 0; // we have  taken (i,j) for getting definite shape of v
    int j = (size + 2) - 1;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size + 2; col++) // 2nd loop
        {
            if ((row == i) && (col == j)) // condition for 1st half part
            {
                printf("%c", symbol);
                i++;
                j--;
            }
            else if (row == col && col < mid + 1) // condition for 2nd half part
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }

    y++;
    y++;
    gotoxy(x, y);
}

// 26)  FUNCTION DEFINITION FOR "Z" ALPHABET
void alphabet_z(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop

    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0) || (col == size - row - 1) || (row == size - 1))
            {
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        y++;
        gotoxy(x, y);
    }
}