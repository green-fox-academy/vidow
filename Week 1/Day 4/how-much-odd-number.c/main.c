#include <stdio.h>
#include <stdlib.h>

//how much odd numbers are between 179 & 371
//you should be able to change the limits, like from 10 to 234
//and the program should print out the odd numbers between those two numbers
//example from 11 to 27 the program should print out:
// 13, 15, 17, 19, 21, 23, 25 this is 7 odd number between 11 and 27

int main()
{
    int i = 0;
    int a = 11;
    int b = 27;
    int odd_numbers = 0;

    for (i = a + 1; i < b; i++){

        if (i % 2 == 1){

                if (odd_numbers > 0)
                printf(", %d", i);

                else
                printf("%d", i);

                odd_numbers++;
        }
    }
                printf(" this is %d odd numbers between %d and %d.", odd_numbers, a, b);

	return 0;
}
