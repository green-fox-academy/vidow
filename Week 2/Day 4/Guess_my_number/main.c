/*

Exercise

Write a program where the program chooses a number between 1 and 100.
The player is then asked to enter a guess.
If the player guesses wrong, then the program gives feedback
and ask to enter an other guess until the guess is correct.

Make the range customizable (ask for it before starting the guessing).
You can add lives. (optional)
Example

I've the number between 1-100. You have 5 lives.

20
Too high. You have 4 lives left.

10
Too low. You have 3 lives left.

15
Congratulations. You won!

*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
srand(time(NULL));

    int r = 1 + rand() % 99;
    int number = 0;
    int correct = 0;
    int lives = 5;

    printf("Wanna play? I have a number between 1 and 100. Guess what is that in 5 attempts!\n");

    do {
        scanf("%d", &number);
        if (number == r){
            printf("\nCongrats, you won! You have %d live(s) remaining.", lives);
            correct = 1;
            break;
        }
        if (number > r){
            lives--;
            printf("\nToo high. You have %d live(s) remaining.", lives);
        }

        if (number < r){
            lives--;
            printf("\nToo low. You have %d live(s) remaining.", lives);
        }
        if (lives == 0){
            printf(" The correct number was %d\n. Press any key to continue", r);
            correct = 1;
        }
    } while (correct == 0);

    return 0;
}
