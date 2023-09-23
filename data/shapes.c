#include "data_header.h"

void create_filled_square(int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // next position from that position
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void create_hollow_square(int size, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void create_Filled_rectangle(int rows, int columns, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                set_color(borderColor);
            }
            else
            {
                set_color(fillColor);
            }
            printf(" %c", symbol);
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void create_hollow_rectangle(int rows, int columns, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void Create_Filled_Diamond(int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    int spaces = size - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
            reset_color();
        }
        printf("\n");
        spaces--;
        gotoxy(x, ++y);
    }
    spaces = 1;
    for (int i = size - 2; i >= 0; i--)
    {
        gotoxy(x, y++); // Move cursor to the next line
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
            reset_color();
        }
        printf("\n");
        spaces++;
    }
    printf("\n");
}

void create_Hollow_Diamond(int size, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    int spaces = size - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        spaces--;
        gotoxy(x, ++y);
    }
    spaces = 1;
    for (int i = size - 2; i >= 0; i--)
    {
        gotoxy(x, y++); // Move cursor to the next line
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        spaces++;
    }
    printf("\n");
}

void create_Filled_Parallelogram(int rows, int columns, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < columns; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
            reset_color();
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void create_Hollow_Parallelogram(int rows, int columns, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < columns; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                set_color(color);
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_filled_oval(int radius, char symbol, char borderColor, char fillColor, int x, int y)
{
    int diameter = radius * 2;
    int i, j;

    gotoxy(x, y);
    for (i = 0; i <= diameter; i++)
    {
        for (j = 0; j <= diameter; j++)
        {
            int distance = (int)sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (distance <= radius)
            {
                if (distance == radius)
                {
                    set_color(borderColor);
                }
                else
                {
                    set_color(fillColor);
                }
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}
void print_hollow_oval(int radius, char symbol, char color, int x, int y)
{
    int diameter = radius * 2;
    int i, j;

    gotoxy(x, y);
    for (i = 0; i <= diameter; i++)
    {
        for (j = 0; j <= diameter; j++)
        {
            int distance = (int)sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius));

            if (distance == radius)
            {
                set_color(color);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_vertical_line(char symbol, int length, char color, int x, int y)
{

    gotoxy(x, y);

    set_color(color);

    for (int i = 0; i < length; i++)
    {

        gotoxy(x, y + i);
        printf("%c\n", symbol);
    }

    reset_color();
    printf("\n");
}

void print_horizontal_line(char symbol, int length, char color, int x, int y)
{

    gotoxy(x, y);

    set_color(color);

    for (int i = 0; i < length; i++)
    {
        printf("%c", symbol);
    }

    reset_color();
    printf("\n");
}

void print_Increasing_Triangle(int size, char fillColor, char borderColor, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == size || j == 1 || j == i)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Inverted_Increasing_Triangle(int size, char borderColor, char fillColor, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == size || j == 1 || j == i)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Inverted_Decreasing_Triangle(int size, char borderColor, char fillColor, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == size)
            {
                set_color(borderColor);
            }
            else
            {
                set_color(fillColor);
            }
            printf("%c ", symbol);
            reset_color();
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Decreasing_Triangle(int size, char borderColor, char fillColor, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == 1 || i == size)
            {
                set_color(borderColor);
            }
            else
            {
                set_color(fillColor);
            }
            printf("%c ", symbol);
            reset_color();
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Hollow_Increasing_Triangle(int size, char color, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == size || j == 1 || j == i)
            {
                set_color(color);
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Hollow_Decreasing_Triangle(int size, char color, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == 1 || i == size)
            {
                set_color(color);
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Inverted_Hollow_Increasing_Triangle(int size, char borderColor, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            set_color(borderColor);
            if (j == 1 || j == i || i == size)
            {
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
            reset_color();
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Inverted_Hollow_Decreasing_Triangle(int size, char color, char symbol, int x, int y)
{

    gotoxy(x, y);
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == size)
            {
                set_color(color);
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
            reset_color();
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void print_Filled_Trapezium(int height, int base, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int row = 0; row < height; row++)
    {
        for (int sp = 0; sp < height - row; sp++)
        {
            printf("  ");
        }
        for (int col = 0; col < base; col++)
        {
            if (col == 0 || col == base - 1 || row == height - 1 || row == 0)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
        }
        base = base + 2;
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

// Function to print a hollow trapezium
void print_Hollow_Trapezium(int height, int base, char symbol, char borderColor, int x, int y)
{

    gotoxy(x, y);
    for (int row = 0; row < height; row++)
    {
        for (int sp = 0; sp < height - row; sp++)
        {
            printf("  ");
        }
        for (int col = 0; col < base; col++)
        {
            if (col == 0 || col == base - 1 || row == height - 1 || row == 0)
            {
                set_color(borderColor);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        base = base + 2;
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_Hollow_Hexagon(int height, int base, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    for (int row = 0; row < height; row++)
    {
        for (int sp = 0; sp < height - row; sp++)
        {
            printf(" ");
        }
        for (int col = 0; col < base; col++)
        {
            if ((col == 0) || (row == 0) || (col == base - 1))
            {
                set_color(color);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        base = base + 2;
        printf("\n");
        gotoxy(x, ++y);
    }

    for (int row = 0; row < height; row++)
    {
        for (int sp = 0; sp < row; sp++)
        {
            printf(" ");
        }
        for (int col = 0; col < base; col++)
        {
            if ((col == 0) || (row == height - 1) || (col == base - 1))
            {
                set_color(color);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        base = base - 2;
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_Filled_Hexagon(int height, int base, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int row = 0; row < height; row++)
    {
        for (int sp = 0; sp < height - row; sp++)
        {
            printf(" ");
        }
        for (int col = 0; col < base; col++)
        {
            if ((col == 0) || (row == 0) || (col == base - 1))
            {
                set_color(borderColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
        }
        base = base + 2;
        printf("\n");
        gotoxy(x, ++y);
    }

    for (int row = 0; row < height; row++)
    {
        for (int sp = 0; sp < row; sp++)
        {
            printf(" ");
        }
        for (int col = 0; col < base; col++)
        {
            if ((col == 0) || (row == height - 1) || (col == base - 1))
            {
                set_color(borderColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
        }
        base = base - 2;
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_Filled_Heart(int size, char symbol, char borderColor, char fillColor, int x, int y)
{
    int i, j;

    gotoxy(x, y);
    for (i = size / 2; i <= size; i += 2)
    {
        for (j = 1; j < size - i; j += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                set_color(borderColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
        }
        for (j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                set_color(borderColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }

    for (i = size; i >= 1; i--)
    {
        for (j = i; j < size; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            if (j == 1 || j == (i * 2) - 1)
            {
                set_color(borderColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_Hollow_Heart(int size, char symbol, char color, int x, int y)
{
    int i, j;

    gotoxy(x, y);
    for (i = size / 2; i <= size; i += 2)
    {
        for (j = 1; j < size - i; j += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                set_color(color);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        for (j = 1; j <= size - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                set_color(color);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }

    for (i = size; i >= 1; i--)
    {
        for (j = i; j < size; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            if (j == 1 || j == (i * 2) - 1)
            {
                set_color(color);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_UpArrow(int size, char symbol, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= 2 * size - 1; j++)
        {
            if (j >= size - (i - 1) && j <= size + (i - 1))
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= 2 * size - 1; j++)
        {
            int color;
            if (j == size)
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_DownArrow(int size, char symbol, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= 2 * size - 1; j++)
        {
            if (j == size)
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }

    // Print the arrowhead
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * size - 1; j++)
        {
            if (j >= size - (i - 1) && j <= size + (i - 1))
            {
                set_color(fillColor);
                printf("%c", symbol);
                reset_color();
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_left_arrow(int size, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == size / 2 || i - j == size / 2 || i + j == size / 2)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_right_arrow(int size, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    int lenght = size / 2 * 3;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j - i == size / 2 || i == size / 2 || i + j == lenght)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void star(int size, char symbol, char color, int x, int y)
{

    gotoxy(x, y);

    set_color(color);
    for (int row = 0; row < size - 2; row++)
    {
        int spaces = size * 2 + (size - row);
        int stars = row == 0 ? 1 : row * 2;
        for (int w_sp = 0; w_sp < spaces; w_sp++)
        {
            printf(" ");
        }
        for (int col = 0; col < stars; col++)
        {
            if (col == 0 || col == stars - 1)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    for (int row = 0; row < (size * 6) - 6 + 1; row++)
    {
        if (row > 3)
        {
            printf("%c", symbol);
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
    gotoxy(x, ++y);
    // Middle section
    for (int row = 1; row < size; row++)
    {
        int spaces = row + 4;
        int stars = (size - 1) * 6 - (row + 3 + row);
        for (int col = 0; col < spaces; col++)
        {
            printf(" ");
        }
        printf("%c", symbol);
        for (int col = 0; col < stars - 2; col++)
        {
            printf(" ");
        }
        printf("%c\n", symbol);
        gotoxy(x, ++y);
    }
    for (int row = 1; row < size; row++)
    {
        int spaces = size + 2 - row;
        int stars = (size - 1) * 4 + (row * 2) - 1;
        for (int col = 0; col < spaces; col++)
        {
            printf(" ");
        }
        for (int col = 0; col < stars; col++)
        {
            if (col == 0 || col == stars - 1 || row == size - 1)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }

    for (int row = 1; row < size; row++)
    {
        int spaces = 3 + (size - 1) * 2 + row;
        int stars = row + 1 != size ? (size - 1) * 2 - (row)*2 - 1 : 0;
        for (int col = 0; col < spaces; col++)
        {
            printf(" ");
        }
        for (int col = 0; col < stars; col++)
        {
            if (col == 0 || col == stars - 1 || row == size - 1)
            {
                printf("%c", symbol);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void hollow_kite(int size, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    int rows, columns;
    // 1st half of kite
    for (rows = 1; rows < size; rows++)
    {
        for (columns = rows; columns <= size; columns++)
        {
            printf("  ");
        }

        for (columns = 1; columns < rows; columns++)
        {
            if (columns == 1)
            {
                set_color(color);
                printf("%c ", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        for (columns = 1; columns <= rows; columns++)
        {
            if (columns == rows || columns == 1)
            {
                set_color(color);
                printf("%c ", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    // 2nd half of kite
    for (rows = 1; rows <= size; rows++)
    {
        for (columns = 1; columns <= rows; columns++)
        {
            printf("  ");
        }

        for (columns = rows; columns < size; columns++)
        {
            if (columns == rows || rows == 1)
            {
                set_color(color);
                printf("%c ", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        for (columns = rows; columns <= size; columns++)
        {
            if (columns == size || columns == rows || rows == 1)
            {
                set_color(color);
                printf("%c ", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    // lower part of kite
    for (rows = 1; rows <= size / 2; rows++)
    {
        for (columns = rows; columns <= size; columns++)
        {
            printf("  ");
        }

        for (columns = 1; columns <= (2 * rows - 1); columns++)
        {
            if (rows == size / 2 || columns == 1 || columns == (2 * rows - 1))

            {
                set_color(color);
                printf("%c ", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void filled_kite(int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    int rows, columns;
    // 1st half of kite
    for (rows = 1; rows < size; rows++)
    {
        for (columns = rows; columns <= size; columns++)
        {
            printf("  ");
        }

        for (columns = 1; columns < rows; columns++)
        {
            if (columns == 1)
            {
                set_color(borderColor);
                printf("%c ", symbol);
            }
            else
            {
                set_color(fillColor);
                printf("%c ", symbol);
            }
        }
        for (columns = 1; columns <= rows; columns++)
        {
            if (columns == rows || columns == 1)
            {
                set_color(borderColor);
                printf("%c ", symbol);
            }
            else
            {
                set_color(fillColor);
                printf("%c ", symbol);
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    // 2nd half of kite
    for (rows = 1; rows <= size; rows++)
    {
        for (columns = 1; columns <= rows; columns++)
        {
            printf("  ");
        }

        for (columns = rows; columns < size; columns++)
        {
            if (columns == rows || rows == 1)
            {
                set_color(borderColor);
                printf("%c ", symbol);
            }
            else
            {
                set_color(fillColor);
                printf("%c ", symbol);
            }
        }
        for (columns = rows; columns <= size; columns++)
        {
            if (columns == size || columns == rows || rows == 1)
            {
                set_color(borderColor);
                printf("%c ", symbol);
            }
            else
            {
                set_color(fillColor);
                printf("%c ", symbol);
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    // lower part of kite
    for (rows = 1; rows <= size / 2; rows++)
    {
        for (columns = rows; columns <= size; columns++)
        {
            printf("  ");
        }

        for (columns = 1; columns <= (2 * rows - 1); columns++)
        {
            if (rows == size / 2 || columns == 1 || columns == (2 * rows - 1))

            {
                set_color(borderColor);
                printf("%c ", symbol);
            }
            else
            {
                set_color(fillColor);
                printf("%c ", symbol);
            }
        }

        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}

void create_Filled_chatbox(int rows, int columns, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
            }
            reset_color();
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void create_hollow_chatbox(int rows, int columns, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_Filled_Butterfly(int size, char symbol, char borderColor, char fillColor, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(borderColor);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
                reset_color();
            }
        }
        for (int j = 1; j <= 2 * (size - i); j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(borderColor);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
                reset_color();
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }

    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(borderColor);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
                reset_color();
            }
        }
        for (int j = 1; j <= 2 * (size - i); j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(borderColor);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                set_color(fillColor);
                printf(" %c", symbol);
                reset_color();
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

// Function to print a hollow butterfly pattern of a given size
void print_Hollow_Butterfly(int size, char symbol, char color, int x, int y)
{

    gotoxy(x, y);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        for (int j = 1; j <= 2 * (size - i); j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }

    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        for (int j = 1; j <= 2 * (size - i); j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || j == size)
            {
                set_color(color);
                printf(" %c", symbol);
                reset_color();
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

// Function to print a circle
void print_filled_circle(int size, char symbol, char borderColor, char fillColor, int x, int y)
{
    // Center of the circle is at (size, size)
    int centerofcircleX = size;
    int centerofcircleY = size;

    gotoxy(x, y);
    for (int i = 0; i <= 2 * size; i++)
    {
        for (int j = 0; j <= 2 * size; j++)
        {
            // Calculate the distance from the center
            double distance = sqrt((i - centerofcircleX) * (i - centerofcircleX) + (j - centerofcircleY) * (j - centerofcircleY));

            if (distance <= size + 0.5)
            {
                if (fabs(distance - size) > 0.5)
                {
                    set_color(borderColor);
                }
                else
                {
                    set_color(fillColor);
                }
                printf(" %c", symbol);
            }
            else
            {
                reset_color();
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    printf("\n");
}

void print_hollow_circle(int size, char symbol, char borderColor, int x, int y)
{
    // Center of the circle is at (size, size)
    int centerofcircleX = size;
    int centerofcircleY = size;

    gotoxy(x, y);
    for (int i = 0; i <= 2 * size; i++)
    {
        for (int j = 0; j <= 2 * size; j++)
        {
            // Calculate the distance from the center
            double distance = sqrt((i - centerofcircleX) * (i - centerofcircleX) + (j - centerofcircleY) * (j - centerofcircleY));

            // Hollow circle  print outline only if the distance is close to the size
            if (fabs(distance - size) <= 0.5)
            {
                set_color(borderColor);
                printf(" %c", symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        gotoxy(x, ++y);
    }
    reset_color();
    printf("\n");
}
