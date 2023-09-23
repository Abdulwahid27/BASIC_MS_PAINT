#include "data_header.h"

void print_number_range(char symbol, char color, int x, int y, int size, char start, char end)
{
    if (start >= 48 && start <= 57)
    {
        for (int i = start; i <= end; i++)
        {
            y = y + size + 3;
            switch (i)
            {
            case 48:
                set_color(color);
                number_0(x, y, size, symbol);
                reset_color();
                break;
            case 49:
                set_color(color);
                number_1(x, y, size, symbol);
                reset_color();
                break;
            case 50:
                set_color(color);
                number_2(x, y, size, symbol);
                reset_color();
                break;
            case 51:
                set_color(color);
                number_3(x, y, size, symbol);
                reset_color();
                break;
            case 52:
                set_color(color);
                number_4(x, y, size, symbol);
                reset_color();
                break;
            case 53:
                set_color(color);
                number_5(x, y, size, symbol);
                reset_color();
                break;
            case 54:
                set_color(color);
                number_6(x, y, size, symbol);
                reset_color();
                break;
            case 55:
                set_color(color);
                number_7(x, y, size, symbol);
                reset_color();
                break;
            case 56:
                set_color(color);
                number_8(x, y, size, symbol);
                reset_color();
                break;
            case 57:
                set_color(color);
                number_9(x, y, size, symbol);
                reset_color();
                break;
            default:
                break;
            }
        }
    }
}

void print_all_number(char symbol, char color, int x, int y, int size)
{
    char c = 0, start = 48, end = 57;

    for (int i = start; i <= end; i++)
    {
        y = y + size + 3;
        switch (i)
        {
        case 48:
            set_color(color);
            number_0(x, y, size, symbol);
            reset_color();
            break;
        case 49:
            set_color(color);
            number_1(x, y, size, symbol);
            reset_color();
            break;
        case 50:
            set_color(color);
            number_2(x, y, size, symbol);
            reset_color();
            break;
        case 51:
            set_color(color);
            number_3(x, y, size, symbol);
            reset_color();
            break;
        case 52:
            set_color(color);
            number_4(x, y, size, symbol);
            reset_color();
            break;
        case 53:
            set_color(color);
            number_5(x, y, size, symbol);
            reset_color();
            break;
        case 54:
            set_color(color);
            number_6(x, y, size, symbol);
            reset_color();
            break;
        case 55:
            set_color(color);
            number_7(x, y, size, symbol);
            reset_color();
            break;
        case 56:
            set_color(color);
            number_8(x, y, size, symbol);
            reset_color();
            break;
        case 57:
            set_color(color);
            number_9(x, y, size, symbol);
            reset_color();
            break;
        default:
            break;
        }
    }
}

//  DEFINITION OF "0":

void number_0(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 && col != 0) || (row == size - 1 && col != 0) || (col == 0) || (col == size - 1)) // condition to print the required shape
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "1":
void number_1(int x, int y, int size, char symbol)
{
    int mid = (size) / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop fro row
    {
        for (int col = 0; col < size; col++) // 2nd loop for col
        {
            if ((row == size - 1) || (col == size / 2) || (col == mid - row && row != mid)) // condition to print the required shape
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "2":
void number_2(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop for row
    {
        for (int col = 0; col < size; col++) // 2nd loop for col
        {
            if ((row == 0) || (row == size - 1) || (row == mid) || (row > mid && col == 0) || (row < mid && col == size - 1)) // condition to print the required shape
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "3":
void number_3(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop for row
    {
        for (int col = 0; col < size; col++) // 2nd loop for col
        {
            if ((row == 0 || row == mid || row == size - 1) && col != size - 1) // condition to print the required shape
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "4":
void number_4(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {

        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (col == 0 && row < mid + 1) // condition to print 1st half col
            {
                printf("%c", symbol);
            }
            else if (row == mid || col == size - 1) // ondition to print mid row and last col
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "5":
void number_5(int x, int y, int size, char symbol)
{
    int mid = (size - 1) / 2;

    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {

        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0) || (row == size - 1) || (row == mid) || (row < mid && col == 0) || (row > mid && col == size - 1)) // condition to print the required shape
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "6":
void number_6(int x, int y, int size, char symbol)
{
    int mid = (size - 1) / 2;

    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {

        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0) || (row == size - 1) || (row == mid) || col == 0 || (row < mid && col == 0) || (row > mid && col == size - 1)) // condition to print the required shape
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "7":
void number_7(int x, int y, int size, char symbol)
{
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (row == 0 || col == size - 1) // ondition to print 1st row and last col
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "8":
void number_8(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if ((row == 0 && col != 0) || (row == size - 1 && col != 0) || (row == mid) || (col == 0) || (col == size - 1)) // condition to print the required shape
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
    gotoxy(x, y); // to show that from  their the shape is ended
}

//  DEFINITION OF "9":
void number_9(int x, int y, int size, char symbol)
{
    int mid = size / 2;
    gotoxy(x, y);

    for (int row = 0; row < size; row++) // 1st loop
    {
        for (int col = 0; col < size; col++) // 2nd loop
        {
            if (row == 0 || (col == 0 && row < mid + 1)) // ondition to print 1st row and 1st half col
            {
                printf("%c", symbol);
            }
            else if (row == mid || col == size - 1) // ondition to print mid row and last col
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
    gotoxy(x, y); // to show that from  their the shape is ended
}