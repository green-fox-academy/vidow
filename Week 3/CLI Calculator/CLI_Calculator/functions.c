#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//char choise = 0;
//char subMenu = 0;
int xyz = "%";
//char operator;
char input[100] = "";
//float firstNumber = 0;
//float secondNumber = 0;
//float result = 0;
float summition();
float substraction();
float multiplication();
float division();
float division_with_remainder();
float squaring();
float square_root();

//Function for main menu begins//
void main_menu() //Function for the main menu.
{
    char choise = 0;
    char input[50] = "";
    char subMenu = 0;
    int a = "%";

    printf("\tCLI Calculator\n====================================\nusage: [number] [operation] [number]\nCommands:\n\n+  summation\n-  subtraction\n*  multiplication\n/  division\n%s  division with remainder\n^  squaring\n<  square root\n\nlog    logarithm\nbinto  binary to hex or dec\nhexto  hexadecimal to bin or dec\ndecto  decimal to bin or hex\n====================================\nexit   exiting from the program\nclear  clear the screen\nhelp   print usage\n====================================\n\n\tHit enter to start!\n\n====================================\n", xyz);

    while (getchar() != '\n');{
        clear();
        if (strcmp(input, "exit") == 0){
            exit(0);
        }
        if (strcmp(input, "help") == 0){
            main_menu();
        }
        if (strcmp(input, "clear") == 0){
            clear();
        }
    }
}
//Function for main menu ends//

//Function for coords begins//
COORD coord = {0,0};
void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//Function to coords ends//

//Function to clear screen begins//
void clear() //Function to clear the screen.
{

    system("cls");

}
//Function to clear screen ends//

//Function for submenu begins//
void sub_menu_and_ops() //Function for the sub menus.
{
    while (strcmp(input, "exit") != 0) {
        gets(input);

        if (strcmp(input, "exit") == 0){
            exit(0);
        }
        if (strcmp(input, "help") == 0){
            main_menu();
        }
        if (strcmp(input, "clear") == 0){
            clear();
        }
        else if (strstr(input, "+")) {
            summition(input);
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
        else if (strstr(input, "-")) {
            substraction(input);
            fflush(stdin);
        }
    }
}
//Function for submenu ends//

/*
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
}
/*
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
*/
float summition(char (input[]))
{
    float a;
    float b;

    char* token = strtok (input, "+");
    char* token2 = strtok (NULL, "+");

    a = atof (token);
    b = atof (token2);

    printf("%.2f\n", a + b);
}

float substraction(char input[])
{
    float a;
    float b;
    char* token;
    char* token2;
    char* token_minus;

    if (input[0] == '-'){
        token = strtok (input, " ");
        token_minus = strtok (NULL, " ");
        token2 = strtok (NULL, " ");
    }
    else{
        token = strtok (input, "-");
        token2 = strtok (NULL, "-");
    }

    a = atof (token);
    b = atof (token2);

    printf("%.2f\n", a - b);
}

float multiplication(char input[])
{
    float a;
    float b;

    char* token = strtok (input, "*");
    char* token2 = strtok (NULL, "*");

    a = atof (token);
    b = atof (token2);

    printf("%.2f\n", a * b);
}

float division(char input[])
{
    float a;
    float b;

    char* token = strtok (input, "/");
    char* token2 = strtok (NULL, "/");

    a = atof (token);
    b = atof (token2);



    if (b == 0){
        printf("Division by 0 is not allowed\n");
    }
        else{
            printf("%.2f\n", a / b);
        }
}

float division_with_remainder(char input[])
{

    float a;
    float b;

    char* token = strtok (input, "%");
    char* token2 = strtok (NULL, "%");

    a = atof (token);
    b = atof (token2);

    printf("%.2f\n", fmod(a, b));
}

float squaring(char input[])
{

    float a;
    float b;

    char* token = strtok (input, "^");
    char* token2 = strtok (NULL, "^");

    a = atof (token);
    b = atof (token2);

    printf("%.2f\n", powf(a, b));
}

float square_root(char input[])
{

    float a;

    char* token = strtok (input, "<");

    a = atof (token);

    printf("%.2f\n", sqrt(a));
}
