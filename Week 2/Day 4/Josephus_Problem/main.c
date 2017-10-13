/*

What the hell is Josephus Problem?

Flavius Josephus was a famous historian of the first century.
During the Jewish-Roman war, he was among a band of 41 Jewish rebels trapped
in a cave by the Romans. Preferring suicide to capture, the rebels decided to
kill themselves. Using a method to form a circle and
in clockwise direction everybody kills the person on his left side until
everyone dies. But Josephus, wanted none of this suicide nonsense and
therefore quickly calculated where he should stand in the circle
so that he will be the last one (he knew who is the first one).
So basically Josephus Problem is when you have a circle of n people standing
and you want to cross out every second person step-by-step until only one remains.
[for more detail check Josephus Problem on Wikipedia]

Exercise

Write a function to solve Josephus Problem. The program should ask for a number,
this number represents how many people are in the "game".
The return value should be the number of the "winning" seat.

Examples

number of people	number of the winning seat

        1	                    1
        2	                    1
        3	                    3
        7	                    7
        12	                    9
        41	                    19



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>

int msbPos(int winning_number)
{
    int pos = 0;
    while (winning_number != 0) {
        pos++;

        // keeps shifting bits to the right
        // until we are left with 0
        winning_number = winning_number >> 1;
    }
    return pos;
}

int main()
{

    int total_number = 0;
    int winning_number = 0;
    int position = 0;

    printf("Enter the number of the circle: \n");

    scanf("%d", &total_number);

    if (total_number % 2 == 1){

    total_number = winning_number;

    winning_number = msbPos(winning_number);

    int a = 1 << (winning_number - 1);

    winning_number = winning_number ^ a;

    winning_number = winning_number << 1;

    winning_number = winning_number | 1;


 //       winning_number = BinaryFromDecimal(total_number) << 1;

        printf("%d", winning_number);
    }

        else if (total_number % 2 == 0){

            printf("1");
        }

    return winning_number;
}

int Josephus (int n)
{
    int position = msbPos(n);

    int a = 1 << (position - 1);

    n = n ^ a;

    n = n << 1;

    n = n | 1;
}

*/
