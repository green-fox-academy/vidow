#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char choise = 0;
char subMenu = 0;
int xyz = "%";
char operator;
char input[50] = "";
float firstNumber = 0;
float secondNumber = 0;
float result = 0;


void main_menu() //Function for the main menu.
{
    char choise = 0;
    char input[50] = "";
    char subMenu = 0;
    int a = "%";

    printf("\tCLI Calculator\n====================================\nusage: [number] [operation] [number]\nCommands:\n\n+  summation\n-  subtraction\n*  multiplication\n/  division\n%s  division with remainder\n^  squaring\n<  square root\n\nlog    logarithm\nbinto  binary to hex or dec\nhexto  hexadecimal to bin or dec\ndecto  decimal to bin or hex\n====================================\nexit   exiting from the program\nclear  clear the screen\nhelp   print usage\n====================================\n\n\tHit enter to start!\n\n====================================\n", xyz);

    if (getchar() == '\n'){
        clear();
    }
    else if (strcmp(input, "exit") == 0){
        exit(0);
    }
    else if (strcmp(input, "help") == 0){
        main_menu();
    }
    else if (strcmp(input, "clear") == 0){
        clear();
    }

    sub_menu();

    operation_func();

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

    if (strcmp(input, "\n") == 0) {
        clear();
    }
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

void operation_func()
{

    scanf("%f %c %f", &firstNumber, &operator, &secondNumber);

    switch(operator){

        case '+':
            printf("= %.2f\n", firstNumber + secondNumber);
            break;
        default:
            printf("Error");
    }

    sub_menu();
}

void back_to_menu()

{
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
