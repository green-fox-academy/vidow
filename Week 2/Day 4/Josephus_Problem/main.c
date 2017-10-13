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

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdint.h>

int msbPos(int winning_position)
{
    int pos = 0;
    while (winning_position != 0) {
        pos++;

        // keeps shifting bits to the right
        // until we are left with 0
        winning_position = winning_position >> 1;
    }
    return pos;
}

// function to return at which place Josephus
// should sit to avoid being killed
int joseph(int winning_position)
{
    /*  Getting the position of the Most Significant
        Bit(MSB). The leftmost '1'. If the number is
       '41' then its binary is '101001'.
        So msbPos(41) = 6   */
    int position = msbPos(winning_position);

    /* 'j' stores the number with which to XOR the
        number 'winning_position'. Since we need '100000'
       We will do 1<<6-1 to get '100000' */
    int j = 1 << (position - 1);

    /* Toggling the Most Significant Bit. Changing
       the leftmost '1' to '0'.
       101001 ^ 100000 = 001001 (9) */
    winning_position = winning_position ^ j;

    /*  Left-shifting once to add an extra '0' to
        the right end of the binary number
        001001 = 010010 (18) */
    winning_position = winning_position << 1;

    /* Toggling the '0' at the end to '1' which
       is essentially the same as putting the
       MSB at the rightmost place. 010010 | 1
       = 010011 (19) */
    winning_position = winning_position | 1;

    return winning_position;
}

// hard coded driver main function to run the program
int main()
{
    int winning_position = 0;

    printf("Please enter a number which represents the participants of the game: ");

    scanf("%d", &winning_position);

    printf("You should stand at the place of %d to survive.\n", joseph(winning_position));
    return 0;
}
