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
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));

    int r = 1 + rand() % 99;
    int number = 0;

    printf("Wanna play? I have a number between 1 and 100. Guess what is that!\n");


    scanf("%d", &number);

        if (number = r)

            printf("\nCongrats, you won!");

            else if (number > r)

                printf("\nToo high, guess again.");

            else

                printf("\nToo low, guess again.");


return 0;
}
