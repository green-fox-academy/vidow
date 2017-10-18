#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
#include <stdint.h>
#include <conio.h>

int main()
{
    char operation;
    int firstNumber = 0;
    int secondNumber = 0;
    int result = 0;

    main_and_submenu();

    switch(operation)
    {
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '/':
            if (secondNumber == 0){
                printf("Division by zero is not possible");
                return;
            }
            result = firstNumber / secondNumber;
            break;
        case '%':
            if (secondNumber == 0){
                printf("Division by zero is not possible");
                return;
            result = (firstNumber % secondNumber);
            break;
        case '^':
            result = pow(firstNumber, secondNumber);
            break;
        case '<':
            result = sqrt(firstNumber);
            break;
        case 'log':
            result = firstNumber / secondNumber;
            break;
        case 'binto':
            result = (firstNumber % secondNumber);
            break;
        case 'hexto':
            result = pow(firstNumber, secondNumber);
            break;
        case 'decto':
            result = sqrt(firstNumber);
            break;
        default:
            printf("Unexpected operation, press enter for main menu");
    }
}
    return 0;
}
