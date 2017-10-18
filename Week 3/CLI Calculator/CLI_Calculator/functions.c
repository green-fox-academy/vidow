#include <Windows.h>
#include <conio.h>

void main_and_submenu()
{
    char choise = 0;
    char subMenu = 0;
    int a = "%";

    while(choise != 'exit'){

    printf("\tCLI Calculator\n====================================\nusage: [number] [operation] [number]\nCommands:\n\n+  summation\n-  subtraction\n*  multiplication\n/  division\n%s  division with remainder\n^  squaring\n<  square root\n\nlog    logarithm\nbinto  binary to hex or dec\nhexto  hexadecimal to bin or dec\ndecto  decimal to bin or hex\n====================================\nexit   exiting from the program\nclear  clear the screen\nhelp   print usage\n====================================\n\n\tHit enter to start!\n\n====================================\n", a);

    scanf("\nc", subMenu);

    switch(subMenu){

        case 'exit':
            set_cursor_pos();
            break;
        case 'clear':
            clrscr();
            break;
        case 'help':
            break;

        case 'enter':
            set_cursor_pos();
            break;
        default:
            printf("Not existing menu");
    getchar();

    }

    }
}
/*
COORD coord = {0,0};
void set_cursor_pos(int x, int y)
{
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
*/
