#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int xyz = "%";
char input[100] = "";
float summition();
float subtraction();
float multiplication();
float division();
float division_with_remainder();
float squaring();
float square_root();

//Function for main menu begins.

void main_menu()
{
    char input[50] = "";
    int a = "%";

    printf("\tCLI Calculator\n====================================\nusage: [number] [operation] [number]\nCommands:\n\n+  summation\n-  subtraction\n*  multiplication\n/  division\n%s  division with remainder\n^  squaring\n<  square root\n\nlog    logarithm\nbinto  binary to hex or dec\nhexto  hexadecimal to bin or dec\ndecto  decimal to bin or hex\n====================================\nexit   exiting from the program\nclear  clear the screen\nhelp   print usage\n====================================\n\n\tHit enter to start!\n\n====================================\n", xyz);

    while (getchar() != '\n');{
        clear();
    }
}
//Function for main menu ends

//Function for coords begins

COORD coord = {0,0};
void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//Function to coords ends.

//Function to clear screen begins.

void clear()
{
    system("cls");
}
//Function to clear screen ends

//Function for choosing submenu options and math operators begins.

void sub_menu_and_ops()
{
    //Gets the input from user:
    //exit, help, clear and
    //math operations, see below from line 71
    while (strcmp(input, "exit") != 0) {
        gets(input);

        if (strcmp(input, "exit") == 0) {
            exit(0);
        }
        if (strcmp(input, "help") == 0) {
            main_menu();
        }
        if (strcmp(input, "clear") == 0) {
            clear();
        }
        //The function searches for " " value and if it finds
        //loads the function from below
        //then clears the cache
        else if (strstr(input, "+")) {
            summation(input);
            fflush(stdin);
        }
        else if (strstr(input, "*")) {
            multiplication(input);
            fflush(stdin);
        }
        else if (strstr(input, "/")) {
            division(input);
            fflush(stdin);
        }
        else if (strstr(input, "^")) {
            squaring(input);
            fflush(stdin);
        }
        else if (strstr(input, "<")) {
            square_root(input);
            fflush(stdin);
        }
        else if (strstr(input, "%")) {
            division_with_remainder(input);
            fflush(stdin);
        }
        if (strstr(input, "binto")) {
            binto(input);
            fflush(stdin);
        if (strstr(input, "hexto")) {
            binto(input);
            fflush(stdin);
        if (strstr(input, "decto")) {
            binto(input);
            fflush(stdin);
        }
        else if (strstr(input, "-")) {
            subtraction(input);
            fflush(stdin);
        }
    }
}
//Function for submenu and math ops ends.

//Function for addition begins.

float summation(char (input[]))
{
    float a;
    float b;
    //Puts char value into token and token 2 until "+".
    char* token = strtok(input, "+");
    char* token2 = strtok(NULL, "+");

    a = atof(token);
    b = atof(token2);

    printf("%.2f\n", a + b);
}
//Function for addition ends.

//Function for subtraction ends.

float subtraction(char input[])
{
    float a;
    float b;
    char* token;
    char* token2;
    char* token_minus;
    //Puts char value into token and token 2 until " " because
    //we need to handle if 3 "-" appears like case -5 - -5.
    //For this we need if and else where if means "negating" the first "-"
    //while if means puts char value into token and token 2 until "-"
    if (input[0] == '-'){
        token = strtok(input, " ");
        token_minus = strtok(NULL, " ");
        token2 = strtok(NULL, " ");
    }
    else{
        token = strtok(input, "-");
        token2 = strtok(NULL, "-");
    }
    a = atof(token);
    b = atof(token2);

    printf("%.2f\n", a - b);
}
//Function for subtraction ends.

//Function for multiplication begins.

float multiplication(char input[])
{
    float a;
    float b;
    //Puts char value into token and token 2 until "*".
    char* token = strtok(input, "*");
    char* token2 = strtok(NULL, "*");

    a = atof (token);
    b = atof (token2);

    printf("%.2f\n", a * b);
}
//Function for multiplication ends.

//Function for division begins.

float division(char input[])
{
    float a;
    float b;
    //Puts char value into token and token 2 until "/".
    char* token = strtok(input, "/");
    char* token2 = strtok(NULL, "/");

    a = atof(token);
    b = atof(token2);
    //Need an exepction, division by 0 is not allowed.
    if (b == 0){
        printf("Division by 0 is not allowed\n");
    }
        else{
            printf("%.2f\n", a / b);
        }
}
//Function for division ends.


//Function for division with remainder begins.

float division_with_remainder(char input[])
{
    float a;
    float b;
    //Puts char value into token and token 2 until "%".
    char* token = strtok(input, "%");
    char* token2 = strtok(NULL, "%");

    a = atof(token);
    b = atof(token2);

    printf("%.2f\n", fmod(a, b));
}
//Function for division with remainder ends.

//Function for squaring with remainder begins.

float squaring(char input[])
{
    float a;
    float b;
    //Puts char value into token and token 2 until "^".
    char* token = strtok(input, "^");
    char* token2 = strtok(NULL, "^");

    a = atof(token);
    b = atof(token2);

    printf("%.2f\n", powf(a, b));
}
//Function for squaring with remainder ends.

//Function for square root with remainder begins.

float square_root(char input[])
{
    float a;
    //Puts char value into token and token 2 until "<".
    //Two variables are needed since square rooting
    //negative number resulting - and + value of the number.

    char* token = strtok(input, "<");

    a = atof(token);
    float b = 0;

    if (a >= 0) {

        printf("%.2f\n", sqrt(a));
    }
    if (a < 0){
        b = a;
        b = b * -1;
        printf("Square rooting %.2f gives two results, -%.2f and +%.2f.\n", a, sqrt(b), sqrt(b));
    }
}

//Function for square root with remainder ends.

//Function for binto begins.

void binto(char input[])
{
    int a;
    int b;
    int bin_to_check;

    char* token = strtok (input, "binto");
    char* token2 = strtok ('\0', "binto");

    bin_to_check = atoi (token);
    a = strtol (token, 0, 2);
    b = atoi (token2);

    if (bin_to_check % 10 == 0 || bin_to_check % 10 == 1) {
        if (b == 10) {
            printf(" = %s\n", ltoa (a, input, 10));
        }
        if (b == 16) {
            printf(" = %s\n", ltoa (a, input, 16));
        }
    } else
        printf(" Invalid input.");
}
//Function for binto ends.

//Functions for hexto begins.

void hexto(char input[])
{
    int a;
    int b;

    char* token = strtok (input, "hexto");
    char* token2 = strtok ('\0', "hexto");

    a = strtol (token, 0, 16);
    b = atoi (token2);

    if (b != 2 || b != 10) {
        if (b == 2) {
            printf(" = %s\n", ltoa (a, input, 2));
        }
        if (b == 10) {
            printf(" = %s\n", ltoa (a, input, 10));
        }
    } else
        printf(" Invalid input.");
}
//Function for hexto ends.

//Function for decto begins.

void decto(char input[])
{
    int a;
    int b;

    char* token = strtok (input, "decto");
    char* token2 = strtok ('\0', "decto");

    a = atoi (token);
    b = atoi (token2);

    if (b != 2 || b != 16) {
        if (b == 2) {
            printf(" = %s\n", itoa (a, input, 2));
        }
        if (b == 16) {
            printf(" = %s\n", itoa (a, input, 16));
        }
    } else
        printf(" Invalid input.");
}
