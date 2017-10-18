#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    char choise = 0;
    char input[50] = "";
    char subMenu = 0;
    int a = "%";

void main_menu() //Function for the main menu.
{
    char choise = 0;
    char input[50] = "";
    char subMenu = 0;
    int a = "%";

    printf("\tCLI Calculator\n====================================\nusage: [number] [operation] [number]\nCommands:\n\n+  summation\n-  subtraction\n*  multiplication\n/  division\n%s  division with remainder\n^  squaring\n<  square root\n\nlog    logarithm\nbinto  binary to hex or dec\nhexto  hexadecimal to bin or dec\ndecto  decimal to bin or hex\n====================================\nexit   exiting from the program\nclear  clear the screen\nhelp   print usage\n====================================\n\n\tHit enter to start!\n\n====================================\n", a);

    while (getchar() != '\n');{

        clear();
    }
}

COORD coord = {0,0};
void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clear() //Function to clear the screen.
{

    system("cls");

}

void sub_menu() //Function for the sub menus.
{

    while (strcmp(input, "exit") != 0) {
        gets(input);

        if (strcmp(input, "clear") == 0) {
            clear();
        }
        if (strcmp(input, "help") == 0) {
            main_menu();
        }
        if (strcmp(input, "exit") == 0){
            exit(0);
        }
    }

}
