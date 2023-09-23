#include "brain_header.h"

void call_square(int choice, int size, char symbol, char borderColor, char fillColor, int x, int y)
{
    if (choice == 1)
    {
        create_filled_square(size, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        create_hollow_square(size, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_rectangle(int choice, int rows, int columns, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        create_Filled_rectangle(rows, columns, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        create_hollow_rectangle(rows, columns, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_diamond(int choice, int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        Create_Filled_Diamond(size, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        create_Hollow_Diamond(size, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_oval(int choice, int radius, int symbol, int borderColor, int fillColor, int x, int y)
{
    if (choice == 1)
    {
        print_filled_oval(radius, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        print_hollow_oval(radius, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_line(char symbol, int length, int choice, char borderColor, int x, int y)
{

    if (choice == 1)
    {
        print_vertical_line(symbol, length, borderColor, x, y);
    }

    else if (choice == 0)
    {
        print_horizontal_line(symbol, length, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_triangle(int choice, int size, char fillColor, char borderColor, char symbol, int x, int y)
{

    if (choice == 1)
    {
        print_Increasing_Triangle(size, fillColor, borderColor, symbol, x, y);
    }

    else if (choice == 2)
    {
        print_Inverted_Increasing_Triangle(size, borderColor, fillColor, symbol, x, y);
    }

    else if (choice == 3)
    {
        print_Inverted_Decreasing_Triangle(size, fillColor, borderColor, symbol, x, y);
    }

    else if (choice == 4)
    {
        print_Decreasing_Triangle(size, fillColor, borderColor, symbol, x, y);
    }

    else if (choice == 5)
    {

        print_Hollow_Increasing_Triangle(size, borderColor, symbol, x, y);
    }

    else if (choice == 6)
    {

        print_Hollow_Decreasing_Triangle(size, borderColor, symbol, x, y);
    }

    else if (choice == 7)
    {

        print_Inverted_Hollow_Increasing_Triangle(size, borderColor, symbol, x, y);
    }

    else if (choice == 8)
    {

        print_Inverted_Hollow_Decreasing_Triangle(size, borderColor, symbol, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_trapezium(int choice, int height, int base, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        print_Filled_Trapezium(height, base, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        print_Hollow_Trapezium(height, base, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_hexagon(int choice, int height, int base, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        print_Filled_Hexagon(height, base, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        print_Hollow_Hexagon(height, base, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}
void call_heart(int choice, int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        print_Filled_Heart(size, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        print_Hollow_Heart(size, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}
void call_arrow(int choice, int size, char symbol, char borderColor, int x, int y)
{

    if (choice == 1)
    {
        print_UpArrow(size, symbol, borderColor, x, y);
    }

    else if (choice == 2)
    {
        print_DownArrow(size, symbol, borderColor, x, y);
    }

    else if (choice == 3)
    {
        print_left_arrow(size, symbol, borderColor, x, y);
    }

    else if (choice == 4)
    {
        print_right_arrow(size, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}
void call_star(int size, char symbol, char borderColor, int x, int y)
{

    star(size, symbol, borderColor, x, y);
}

void call_kite(int choice, int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        filled_kite(size, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        hollow_kite(size, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_chatbox(int choice, int rows, int columns, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        create_Filled_chatbox(rows, columns, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        create_hollow_chatbox(rows, columns, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}
void call_parallelogram(int choice, int rows, int columns, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        create_Filled_Parallelogram(rows, columns, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        create_Hollow_Parallelogram(rows, columns, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}
void call_butterfly(int choice, int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        print_Filled_Butterfly(size, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        print_Hollow_Butterfly(size, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}
void call_circle(int choice, int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    if (choice == 1)
    {
        print_filled_circle(size, symbol, borderColor, fillColor, x, y);
    }

    else if (choice == 2)
    {
        print_hollow_circle(size, symbol, borderColor, x, y);
    }

    else
    {
        exit(1);
    }
}

void call_drawing(char symbol)
{
    free_hand_drawings(symbol);
}

void call_alphabets(char symbol, char color, int x, int y, int size, int choice, char start, char end)
{
    if (choice == 0)
    {
        print_all_alphabets(symbol, color, x, y, size);
    }
    else if (choice == 1)
    {
        print_alphabets_range(symbol, color, x, y, size, start, end);
    }

    else
    {
        exit(1);
    }
}

void call_numbers(char symbol, char borderColor, int x, int y, int size, int choice, int start, int end)
{

    if (choice == 0)
    {
        print_all_number(symbol, borderColor, x, y, size);
    }
    else if (choice == 1)
    {
        print_number_range(symbol, borderColor, x, y, size, start, end);
    }

    else
    {
        exit(1);
    }
}