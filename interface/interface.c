#include "interface_header.h"

#define ESCAPE 27
#define BACKSPACE 8

void writeShapeToFile(struct Shapes *shape)
{
    if (shape == NULL)
    {
        printf("Invalid shape pointer\n");
        return;
    }

    // Open the file for appending
    fptr = fopen("data.txt", "w");
    if (fptr == NULL)
    {
        perror("Error opening file for appending");
        return;
    }

    // Write the data to the file

    fprintf(fptr, "Name: %s\n", shape->name);
    fprintf(fptr, "Choice: %d\n", shape->choice);
    fprintf(fptr, "X Coordinate: %d\n", shape->x);
    fprintf(fptr, "Y Coordinate: %d\n", shape->y);
    fprintf(fptr, "Size: %d\n", shape->size);
    fprintf(fptr, "Length: %d\n", shape->length);
    fprintf(fptr, "Symbol: %c\n", shape->symbol);
    fprintf(fptr, "Fill Color: %c\n", shape->fillColor);
    fprintf(fptr, "Border Color: %c\n", shape->borderColor);
    fprintf(fptr, "Start: %c\n", shape->start);
    fprintf(fptr, "End: %c\n", shape->end);
    fprintf(fptr, "Radius: %d\n", shape->radius);
    fprintf(fptr, "Rows: %d\n", shape->rows);
    fprintf(fptr, "Columns: %d\n", shape->columns);
    fprintf(fptr, "Height: %d\n", shape->height);
    fprintf(fptr, "Base: %d\n", shape->base);
    fprintf(fptr, "\n"); // Add a separator between entries

    // Close the file
    fclose(fptr);
}

void printCentered(const char *text)
{
    int width = 100;
    int len = strlen(text);
    int padding = (width - len - 2) / 2;

    printf("|");

    for (int i = 0; i < padding; i++)
    {
        printf(" ");
    }

    printf("%s", text);

    for (int i = 0; i < padding + 1; i++)
    {
        printf(" ");
    }

    printf("|\n");
}

void main_menu()
{
    system("cls");
    int width = 100;
    for (int a = 0; a < width; a++)
    {
        printf("-");
    }

    printf("\n");

    printCentered("Welcome to MS Paint");

    for (int a = 0; a < width; a++)
    {
        printf("-");
    }
    printf("\n\n"); // for creating a couple of space between two menu bars

    for (int a = 0; a < width; a++)
    {
        printf("-");
    }
    printf("\n");

    printCentered("Options");

    for (int a = 0; a < width; a++)
    {
        printf("-");
    }
    printf("\n");

    printf("\n1) Press 1 to make shapes\n");
    printf("2) Press 2 to draw on terminal\n");
    printf("3) Press 3 to Save the file\n");
    printf("4) Press 4 to view existing file\n");
    printf("5) Press 5 to edit an existing file\n");
    printf("ESC) Press Esc to quit\n");

    for (int a = 0; a < width; a++)
    {
        printf("-");
    }

    printf("\n");

    char key;
    while (1)
    {
        key = getch();

        if (key == '1')
        {
            Shapes_menu();
        }

        else if (key == '2')
        {
            drawing_module();
        }
        else if (key == '3')
        {
            savefile();
        }

        else if (key == '4')
        {
            existing_file();
        }

        else if (key == '5')
        {
            edit_existing_file();
        }

        else if (key == ESCAPE)
        {
            exit(0);
        }

        else
        {
            main_menu();
        }
    }
}

void Shapes_menu()
{
    system("cls");
    int width = 100;
    for (int a = 0; a < width; a++)
    {
        printf("-");
    }
    printf("\n");

    printCentered("Options");

    for (int a = 0; a < width; a++)
    {
        printf("-");
    }
    printf("\n");

    printf("\n1) Press 1 to make Square\n");
    printf("2) Press 2 to make rectangle\n");
    printf("3) Press 3 to make diamond\n");
    printf("4) Press 4 to make paralellogram\n");
    printf("5) Press 5 to make oval\n");
    printf("6) Press 6 to make line\n");
    printf("7) Press 7 to make triangle\n");
    printf("8) Press 8 to make trapezium\n");
    printf("9) Press 9 to make hexagon\n");
    printf("10) Press h to make heart\n");
    printf("11) Press a to make arrows\n");
    printf("12) Press s to make star\n");
    printf("13) Press k to make kite\n");
    printf("14) Press t to make chatbox\n");
    printf("15) Press b to make butterfly\n");
    printf("16) Press c to make circle\n");
    printf("17) Press l to print alphabets\n");
    printf("18) Press n to print numbers\n");
    printf("19) Press Backspace to go to main menu\n");
    printf("ESC) Press ESC to quit\n");

    for (int a = 0; a < width; a++)
    {
        printf("-");
    }

    printf("\n");
    gotoxy(40, 25);
    printf("Canvas starts from here");
    printf("\n");

    char key;
    while (1)
    {
        key = getch();

        if (key == '1')
        {
            square_module();
        }
        else if (key == '2')
        {
            rectangle_module();
        }
        else if (key == '3')
        {
            diamond_module();
        }
        else if (key == '4')
        {
            parallelogram_module();
        }
        else if (key == '5')
        {
            oval_module();
        }
        else if (key == '6')
        {
            line_module();
        }

        else if (key == '7')
        {
            triangle_module();
        }
        else if (key == '8')
        {
            trapezium_module();
        }
        else if (key == '9')
        {
            hexagon_module();
        }
        else if (key == 'h')
        {
            heart_module();
        }
        else if (key == 'a')
        {
            arrow_module();
        }

        else if (key == 's')
        {
            star_module();
        }
        else if (key == 'k')
        {
            kite_module();
        }
        else if (key == 't')
        {
            chatbox_module();
        }

        else if (key == 'b')
        {
            butterfly_module();
        }

        else if (key == 'c')
        {
            circle_module();
        }

        else if (key == 'l')
        {
            alphabets_module();
        }

        else if (key == 'n')
        {
            numbers_module();
        }

        else if (key == ESCAPE)
        {
            exit(0);
        }

        else if (key == BACKSPACE)
        {
            main_menu();
        }
        else
        {
            Shapes_menu();
        }
    }
}

void Interface()
{
    main_menu();
}

void clear_inputs(int input_p, int input_q)
{
    for (int i = 0; i < 12; i++)
    { // Adjust the number of lines to clear as needed

        inputs_pos(input_p, input_q + i);
        printf("                                               "); // Clear a line
    }
}

void square_module()
{
    struct Shapes square;

    strcpy(square.name, "square");
    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a filled square\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a hollow square\n");
    inputs_pos(input_p, ++input_q);
    printf("Choice: ");
    scanf(" %d", &square.choice);
    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &square.x);
    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &square.y);

    if (square.y < 25)
    {
        exit(0);
    }
    inputs_pos(input_p, ++input_q);
    printf("Enter size: ");
    scanf(" %d", &square.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &square.symbol);

    if (square.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &square.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &square.fillColor);
    }

    else if (square.choice == 2)
    {

        square.fillColor = '`';

        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &square.borderColor);
    }
    square.length = -1;
    square.start = '`';
    square.end = '`';
    square.radius = -1;
    square.rows = -1;
    square.columns = -1;
    square.height = -1;
    square.base = -1;

    writeShapeToFile(&square);
    call_square(square.choice, square.size, square.symbol, square.borderColor, square.fillColor, square.x, square.y);
}

void rectangle_module()
{
    struct Shapes rectangle;

    strcpy(rectangle.name, "rectangle");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a filled rectangle\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a hollow rectangle\n");
    inputs_pos(input_p, ++input_q);
    printf("Choice: ");
    scanf("%d", &rectangle.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &rectangle.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &rectangle.y);

    if (rectangle.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter rows: ");
    scanf("%d", &rectangle.rows);

    inputs_pos(input_p, ++input_q);
    printf("Enter columns: ");
    scanf("%d", &rectangle.columns);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &rectangle.symbol);
    if (rectangle.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &rectangle.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &rectangle.fillColor);
    }

    else if (rectangle.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &rectangle.borderColor);
        rectangle.fillColor = '`';
    }

    // Set other attributes to -1
    rectangle.size = -1;
    rectangle.length = -1;
    rectangle.start = '`';
    rectangle.end = '`';
    rectangle.radius = -1;
    rectangle.height = -1;
    rectangle.base = -1;

    writeShapeToFile(&rectangle);
    call_rectangle(rectangle.choice, rectangle.rows, rectangle.columns, rectangle.symbol, rectangle.borderColor, rectangle.fillColor, rectangle.x, rectangle.y);
}

void diamond_module()
{
    struct Shapes diamond;

    strcpy(diamond.name, "diamond");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a filled diamond\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a hollow diamond\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &diamond.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &diamond.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &diamond.y);

    if (diamond.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the size of the diamond: ");
    scanf("%d", &diamond.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &diamond.symbol);

    if (diamond.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &diamond.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &diamond.fillColor);
    }

    else if (diamond.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &diamond.borderColor);
        diamond.fillColor = '`';
    }

    diamond.length = -1;
    diamond.start = '`';
    diamond.end = '`';
    diamond.rows = -1;
    diamond.columns = -1;
    diamond.height = -1;
    diamond.base = -1;
    diamond.radius = -1;
    diamond.height = -1;

    writeShapeToFile(&diamond);
    call_diamond(diamond.choice, diamond.size, diamond.symbol, diamond.borderColor, diamond.fillColor, diamond.x, diamond.y);
}

void oval_module()
{
    struct Shapes oval;

    strcpy(oval.name, "oval");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a filled oval\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a hollow oval\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &oval.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &oval.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &oval.y);

    if (oval.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the radius: ");
    scanf("%d", &oval.radius);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &oval.symbol);

    if (oval.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &oval.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &oval.fillColor);
    }
    else if (oval.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &oval.borderColor);
        oval.fillColor = '`'; // Set fill color to '`' for hollow oval
    }
    else
    {
        // Invalid choice, set defaults
        oval.borderColor = '`';
        oval.fillColor = '`';
    }

    // Set other attributes to -1
    oval.size = -1;
    oval.length = -1;
    oval.start = '`';
    oval.end = '`';
    oval.rows = -1;
    oval.columns = -1;
    oval.height = -1;
    oval.base = -1;

    writeShapeToFile(&oval);
    // Call the function to do something with the oval
    call_oval(oval.choice, oval.radius, oval.symbol, oval.borderColor, oval.fillColor, oval.x, oval.y);
}

void line_module()
{
    struct Shapes line;

    strcpy(line.name, "line");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &line.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &line.y);

    if (line.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the symbol: ");
    scanf(" %c", &line.symbol);

    inputs_pos(input_p, ++input_q);
    printf("Enter color (r/g/b/y/w): ");
    scanf(" %c", &line.borderColor);

    inputs_pos(input_p, ++input_q);
    printf("Enter the length: ");
    scanf("%d", &line.length);

    inputs_pos(input_p, ++input_q);
    printf("Enter 1 for vertical, 0 for horizontal: ");
    scanf("%d", &line.choice);

    // Set other attributes to -1
    line.size = -1;
    line.radius = -1;
    line.rows = -1;
    line.columns = -1;
    line.height = -1;
    line.base = -1;
    line.fillColor = '`';

    writeShapeToFile(&line);
    // Call the function to do something with the line
    call_line(line.symbol, line.length, line.choice, line.borderColor, line.x, line.y);
}
void triangle_module()
{
    struct Shapes triangle;

    strcpy(triangle.name, "triangle");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select a shape:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Increasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Inverted Increasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    printf("3. Inverted Decreasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    printf("4. Decreasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    printf("5. Hollow Increasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    printf("6. Hollow Decreasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    printf("7. Inverted Hollow Increasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    printf("8. Inverted Hollow Decreasing Triangle\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &triangle.choice);

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &triangle.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &triangle.y);

    if (triangle.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter size: ");
    scanf(" %d", &triangle.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &triangle.symbol);

    if (triangle.choice == 1 || triangle.choice == 2 || triangle.choice == 3 || triangle.choice == 4)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &triangle.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &triangle.fillColor);
    }
    else if (triangle.choice == 5 || triangle.choice == 6 || triangle.choice == 7 || triangle.choice == 8)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &triangle.borderColor);
        triangle.fillColor = '`'; // Set fill color to '`' for hollow triangles
    }
    else
    {
        // Invalid choice, set defaults
        triangle.borderColor = '`';
        triangle.fillColor = '`';
    }

    // Set other attributes to -1
    triangle.length = -1;
    triangle.start = '`';
    triangle.end = '`';
    triangle.radius = -1;
    triangle.rows = -1;
    triangle.columns = -1;
    triangle.height = -1;
    triangle.base = -1;

    writeShapeToFile(&triangle);
    // Call the function to do something with the triangle
    call_triangle(triangle.choice, triangle.size, triangle.fillColor, triangle.borderColor, triangle.symbol, triangle.x, triangle.y);
}

void trapezium_module()
{
    struct Shapes trapezium;

    strcpy(trapezium.name, "trapezium");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Choose a trapezium pattern:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Filled Trapezium\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Hollow Trapezium\n");
    inputs_pos(input_p, ++input_q);
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &trapezium.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &trapezium.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &trapezium.y);

    if (trapezium.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the height: ");
    scanf(" %d", &trapezium.height);

    inputs_pos(input_p, ++input_q);
    printf("Enter the base: ");
    scanf(" %d", &trapezium.base);

    inputs_pos(input_p, ++input_q);
    printf("Enter the symbol: ");
    scanf(" %c", &trapezium.symbol);

    if (trapezium.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &trapezium.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &trapezium.fillColor);
    }
    else if (trapezium.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &trapezium.borderColor);
        trapezium.fillColor = '`'; // Set fill color to '`' for hollow trapezium
    }
    else
    {
        // Invalid choice, set defaults
        trapezium.borderColor = '`';
        trapezium.fillColor = '`';
    }

    // Set other attributes to -1
    trapezium.size = -1;
    trapezium.length = -1;
    trapezium.start = '`';
    trapezium.end = '`';
    trapezium.radius = -1;
    trapezium.rows = -1;
    trapezium.columns = -1;

    writeShapeToFile(&trapezium);
    // Call the function to do something with the trapezium
    call_trapezium(trapezium.choice, trapezium.height, trapezium.base, trapezium.symbol, trapezium.borderColor, trapezium.fillColor, trapezium.x, trapezium.y);
}
void hexagon_module()
{
    struct Shapes hexagon;

    strcpy(hexagon.name, "hexagon");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Choose a hexagon pattern:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Filled Hexagon\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Hollow Hexagon\n");
    inputs_pos(input_p, ++input_q);
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &hexagon.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &hexagon.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &hexagon.y);

    if (hexagon.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter height: ");
    scanf("%d", &hexagon.height);

    inputs_pos(input_p, ++input_q);
    printf("Enter base: ");
    scanf("%d", &hexagon.base);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &hexagon.symbol);

    if (hexagon.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &hexagon.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &hexagon.fillColor);
    }
    else if (hexagon.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &hexagon.borderColor);
        hexagon.fillColor = '`'; // Set fill color to '`' for hollow hexagon
    }
    else
    {
        // Invalid choice, set defaults
        hexagon.borderColor = '`';
        hexagon.fillColor = '`';
    }

    // Set other attributes to -1
    hexagon.size = -1;
    hexagon.length = -1;
    hexagon.start = '`';
    hexagon.end = '`';
    hexagon.radius = -1;
    hexagon.rows = -1;
    hexagon.columns = -1;

    writeShapeToFile(&hexagon);
    // Call the function to do something with the hexagon
    call_hexagon(hexagon.choice, hexagon.height, hexagon.base, hexagon.symbol, hexagon.borderColor, hexagon.fillColor, hexagon.x, hexagon.y);
}

void heart_module()
{
    struct Shapes heart;

    strcpy(heart.name, "heart");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a Filled Heart\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a Hollow Heart\n");
    inputs_pos(input_p, ++input_q);
    printf("Choice: ");
    scanf(" %d", &heart.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &heart.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &heart.y);

    if (heart.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the size of the heart: ");
    scanf("%d", &heart.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter the symbol you want to use: ");
    scanf(" %c", &heart.symbol);

    if (heart.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &heart.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &heart.fillColor);
    }
    else if (heart.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &heart.borderColor);
        heart.fillColor = '`'; // Set fill color to '-1' for hollow heart
    }
    else
    {
        // Invalid choice, set defaults
        heart.borderColor = '`';
        heart.fillColor = '`';
    }

    // Set other attributes to -1
    heart.length = -1;
    heart.start = '`';
    heart.end = '`';
    heart.radius = -1;
    heart.rows = -1;
    heart.columns = -1;
    heart.height = -1;
    heart.base = -1;

    writeShapeToFile(&heart);
    // Call the function to do something with the heart
    call_heart(heart.choice, heart.size, heart.symbol, heart.borderColor, heart.fillColor, heart.x, heart.y);
}
void arrow_module()
{
    struct Shapes arrow;

    strcpy(arrow.name, "arrow");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Up Arrow\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Down Arrow\n");
    inputs_pos(input_p, ++input_q);
    printf("3. Left Arrow\n");
    inputs_pos(input_p, ++input_q);
    printf("4. Right Arrow\n");
    inputs_pos(input_p, ++input_q);
    printf("Choice: ");
    scanf(" %d", &arrow.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &arrow.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &arrow.y);

    if (arrow.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the size of the arrows: ");
    scanf("%d", &arrow.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter the symbol for the arrow: ");
    scanf(" %c", &arrow.symbol);

    inputs_pos(input_p, ++input_q);
    printf("Enter color (r/g/b/y/w): ");
    scanf(" %c", &arrow.borderColor);

    // Set other attributes to -1
    arrow.length = -1;
    arrow.start = '`';
    arrow.end = '`';
    arrow.radius = -1;
    arrow.rows = -1;
    arrow.columns = -1;
    arrow.height = -1;
    arrow.base = -1;
    arrow.fillColor = '`';

    writeShapeToFile(&arrow);
    // Call the function to do something with the arrow
    call_arrow(arrow.choice, arrow.size, arrow.symbol, arrow.borderColor, arrow.x, arrow.y);
}
void star_module()
{
    struct Shapes star;

    strcpy(star.name, "star");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &star.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &star.y);

    if (star.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter size: ");
    scanf("%d", &star.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &star.symbol);

    inputs_pos(input_p, ++input_q);
    printf("Enter color (r/g/b/y/w): ");
    scanf(" %c", &star.borderColor);

    // Set other attributes to -1
    star.choice = -1;
    star.length = -1;
    star.start = '`';
    star.end = '`';
    star.radius = -1;
    star.rows = -1;
    star.columns = -1;
    star.height = -1;
    star.base = -1;
    star.fillColor = '`';

    writeShapeToFile(&star);
    // Call the function to do something with the star
    call_star(star.size, star.symbol, star.borderColor, star.x, star.y);
}
void kite_module()
{
    struct Shapes kite;

    strcpy(kite.name, "kite");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a filled kite\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a hollow kite\n");
    inputs_pos(input_p, ++input_q);
    printf("Choice: ");
    scanf("%d", &kite.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &kite.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &kite.y);

    if (kite.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter size:");
    scanf("%d", &kite.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol:");
    scanf(" %c", &kite.symbol);

    if (kite.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &kite.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &kite.fillColor);
    }
    else if (kite.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &kite.borderColor);
        kite.fillColor = '`'; // Set fill color to '`' for hollow kite
    }
    else
    {
        // Invalid choice, set defaults
        kite.borderColor = '`';
        kite.fillColor = '`';
    }

    // Set other attributes to -1
    kite.length = -1;
    kite.start = '`';
    kite.end = '`';
    kite.radius = -1;
    kite.rows = -1;
    kite.columns = -1;
    kite.height = -1;
    kite.base = -1;

    writeShapeToFile(&kite);
    // Call the function to do something with the kite
    call_kite(kite.choice, kite.size, kite.symbol, kite.borderColor, kite.fillColor, kite.x, kite.y);
}
void chatbox_module()
{
    struct Shapes chatbox;

    strcpy(chatbox.name, "chatbox");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a filled chatbox\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a hollow chatbox\n");
    inputs_pos(input_p, ++input_q);
    printf("Choice: ");
    scanf("%d", &chatbox.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &chatbox.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &chatbox.y);

    if (chatbox.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter rows: ");
    scanf("%d", &chatbox.rows);

    inputs_pos(input_p, ++input_q);
    printf("Enter columns: ");
    scanf("%d", &chatbox.columns);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &chatbox.symbol);

    if (chatbox.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &chatbox.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &chatbox.fillColor);
    }
    else if (chatbox.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &chatbox.borderColor);
        chatbox.fillColor = '`'; // Set fill color to '`' for hollow chatbox
    }
    else
    {
        // Invalid choice, set defaults
        chatbox.borderColor = '`';
        chatbox.fillColor = '`';
    }

    // Set other attributes to -1
    chatbox.size = -1;
    chatbox.length = -1;
    chatbox.start = '`';
    chatbox.end = '`';
    chatbox.radius = -1;
    chatbox.height = -1;
    chatbox.base = -1;

    writeShapeToFile(&chatbox);
    // Call the function to do something with the chatbox
    call_chatbox(chatbox.choice, chatbox.rows, chatbox.columns, chatbox.symbol, chatbox.borderColor, chatbox.fillColor, chatbox.x, chatbox.y);
}

void parallelogram_module()
{
    struct Shapes parallelogram;

    strcpy(parallelogram.name, "parallelogram");

    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Select an option:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Create a filled parallelogram\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Create a hollow parallelogram\n");
    inputs_pos(input_p, ++input_q);
    scanf(" %d", &parallelogram.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &parallelogram.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &parallelogram.y);

    if (parallelogram.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the number of rows: ");
    scanf("%d", &parallelogram.rows);

    inputs_pos(input_p, ++input_q);
    printf("Enter the number of columns: ");
    scanf("%d", &parallelogram.columns);

    inputs_pos(input_p, ++input_q);
    printf("Enter symbol: ");
    scanf(" %c", &parallelogram.symbol);

    if (parallelogram.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &parallelogram.borderColor);
        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &parallelogram.fillColor);
    }
    else if (parallelogram.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &parallelogram.borderColor);
        parallelogram.fillColor = '`'; // Set fill color to '`' for hollow parallelogram
    }
    else
    {
        // Invalid choice, set defaults
        parallelogram.borderColor = '`';
        parallelogram.fillColor = '`';
    }

    // Set other attributes to -1
    parallelogram.size = -1;
    parallelogram.length = -1;
    parallelogram.start = '`';
    parallelogram.end = '`';
    parallelogram.radius = -1;
    parallelogram.height = -1;
    parallelogram.base = -1;

    writeShapeToFile(&parallelogram);
    // Call the function to do something with the parallelogram
    call_parallelogram(parallelogram.choice, parallelogram.rows, parallelogram.columns, parallelogram.symbol, parallelogram.borderColor, parallelogram.fillColor, parallelogram.x, parallelogram.y);
}

void butterfly_module()
{
    struct Shapes butterfly;

    strcpy(butterfly.name, "butterfly");

    int input_p = 40, input_q = 3; // default position for the input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Choose a butterfly pattern type:\n");
    inputs_pos(input_p, ++input_q);
    printf("1. Filled Butterfly\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Hollow Butterfly\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &butterfly.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &butterfly.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &butterfly.y);

    if (butterfly.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter the size of butterfly: ");
    scanf("%d", &butterfly.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter the symbol of butterfly: ");
    scanf(" %c", &butterfly.symbol);

    if (butterfly.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %c", &butterfly.borderColor);

        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %c", &butterfly.fillColor);
    }
    else if (butterfly.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %c", &butterfly.borderColor);
        butterfly.fillColor = '`'; // Set fill color to '`' for a hollow butterfly
    }
    else
    {
        // Invalid choice, set defaults
        butterfly.borderColor = '`';
        butterfly.fillColor = '`';
    }

    // Set other attributes to -1
    butterfly.length = -1;
    butterfly.start = '`';
    butterfly.end = '`';
    butterfly.radius = -1;
    butterfly.rows = -1;
    butterfly.columns = -1;
    butterfly.height = -1;
    butterfly.base = -1;

    writeShapeToFile(&butterfly);
    // Call the function to do something with the butterfly
    call_butterfly(butterfly.choice, butterfly.size, butterfly.symbol, butterfly.borderColor, butterfly.fillColor, butterfly.x, butterfly.y);
}
void circle_module()
{
    struct Shapes circle;

    strcpy(circle.name, "circle");

    int input_p = 40, input_q = 3; // default position for the input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("1. Filled Circle\n");
    inputs_pos(input_p, ++input_q);
    printf("2. Hollow Circle\n");
    inputs_pos(input_p, ++input_q);
    printf("Enter your choice (1/2): ");
    scanf("%d", &circle.choice);

    inputs_pos(input_p, ++input_q);
    printf("Enter x coordinate: ");
    scanf("%d", &circle.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y coordinate (>= 25): ");
    scanf("%d", &circle.y);

    if (circle.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter size: ");
    scanf("%d", &circle.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter shape symbol: ");
    scanf(" %c", &circle.symbol);

    if (circle.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter border color (r/g/b/y/w): ");
        scanf(" %d", &circle.borderColor);

        inputs_pos(input_p, ++input_q);
        printf("Enter fill color (r/g/b/y/w): ");
        scanf(" %d", &circle.fillColor);
    }
    else if (circle.choice == 2)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter color (r/g/b/y/w): ");
        scanf(" %d", &circle.borderColor);
        circle.fillColor = '`'; // Set fill color to '`' for a hollow circle
    }
    else
    {
        // Invalid choice, set defaults
        circle.borderColor = '`';
        circle.fillColor = '`';
    }

    // Set other attributes to -1
    circle.length = -1;
    circle.start = '`';
    circle.end = '`';
    circle.radius = -1;
    circle.rows = -1;
    circle.columns = -1;
    circle.height = -1;
    circle.base = -1;

    writeShapeToFile(&circle);
    // Call the function to do something with the circle
    call_circle(circle.choice, circle.size, circle.symbol, circle.borderColor, circle.fillColor, circle.x, circle.y);
}

void drawing_module()
{
    int input_p = 40, input_q = 7;
    char symbol;
    inputs_pos(input_p, input_q);
    printf("Press arrow key and spacebar to print symbol\n");
    inputs_pos(input_p, ++input_q);
    printf("Press (r/g/b/y) to print respective colors\n");
    inputs_pos(input_p, ++input_q);
    printf("Enter a Symbol: ");
    inputs_pos(input_p, ++input_q);
    scanf(" %c", &symbol);

    call_drawing(symbol);
    main_menu();
}

void alphabets_module()
{
    struct Shapes alphabets;
    strcpy(alphabets.name, "alphabets");
    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Enter the symbol: \n");
    inputs_pos(input_p, ++input_q);
    scanf(" %c", &alphabets.symbol);

    inputs_pos(input_p, ++input_q);
    printf("Enter size :\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &alphabets.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter color (r/g/b/y/w): ");
    scanf(" %c", &alphabets.borderColor);

    inputs_pos(input_p, ++input_q);
    printf("Enter x-axis :\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &alphabets.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y-axis (>25) :\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &alphabets.y);

    if (alphabets.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter '0' for printing all alphabets \n");
    inputs_pos(input_p, ++input_q);
    printf("Enter '1' for printing alphabets in a range \n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &alphabets.choice);

    if (alphabets.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter the first alphabet of your range \n");
        inputs_pos(input_p, ++input_q);
        alphabets.start = getch();
        inputs_pos(input_p, ++input_q);
        printf("Enter the last alphabet of your range \n");
        inputs_pos(input_p, ++input_q);
        alphabets.end = getch();
        inputs_pos(input_p, ++input_q);
        printf("Characters are %c and %c \n", alphabets.start, alphabets.end);
    }
    else if (alphabets.choice == 0)
    {
        alphabets.start = '`';
        alphabets.end = '`';
    }

    // Set remaining attributes to default values
    alphabets.length = -1;
    alphabets.radius = -1;
    alphabets.rows = -1;
    alphabets.columns = -1;
    alphabets.height = -1;
    alphabets.base = -1;
    alphabets.fillColor = '`';

    writeShapeToFile(&alphabets);
    call_alphabets(alphabets.symbol, alphabets.borderColor, alphabets.x, alphabets.y, alphabets.size, alphabets.choice, alphabets.start, alphabets.end);
}

void numbers_module()
{
    struct Shapes numbers;
    strcpy(numbers.name, "numbers");
    int input_p = 40, input_q = 3; // default position for input section

    clear_inputs(input_p, input_q);

    inputs_pos(input_p, input_q);
    printf("Enter the symbol:\n");
    inputs_pos(input_p, ++input_q);
    scanf(" %c", &numbers.symbol);

    inputs_pos(input_p, ++input_q);
    printf("Enter size :\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &numbers.size);

    inputs_pos(input_p, ++input_q);
    printf("Enter the color:\n");
    inputs_pos(input_p, ++input_q);
    scanf(" %c", &numbers.borderColor);

    inputs_pos(input_p, ++input_q);
    printf("Enter x-axis =\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &numbers.x);

    inputs_pos(input_p, ++input_q);
    printf("Enter y-axis (>25) :\n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &numbers.y);

    if (numbers.y < 25)
    {
        exit(0);
    }

    inputs_pos(input_p, ++input_q);
    printf("Enter '0' for printing all numbers \n");
    inputs_pos(input_p, ++input_q);
    printf("Enter '1' for printing numbers in a range \n");
    inputs_pos(input_p, ++input_q);
    scanf("%d", &numbers.choice);

    if (numbers.choice == 1)
    {
        inputs_pos(input_p, ++input_q);
        printf("Enter the first number of your range \n");
        inputs_pos(input_p, ++input_q);
        scanf("%d", &numbers.start);
        inputs_pos(input_p, ++input_q);
        printf("Enter the last number of your range \n");
        inputs_pos(input_p, ++input_q);
        scanf("%d", &numbers.end);
    }
    else if (numbers.choice == 0)
    {
        numbers.start = '`';
        numbers.end = '`';
    }

    // Set remaining attributes to default values
    numbers.length = -1;
    numbers.radius = -1;
    numbers.rows = -1;
    numbers.columns = -1;
    numbers.height = -1;
    numbers.base = -1;
    numbers.fillColor = '`';

    writeShapeToFile(&numbers);
    call_numbers(numbers.symbol, numbers.borderColor, numbers.x, numbers.y, numbers.size, numbers.choice, numbers.start, numbers.end);
}