#include <stdio.h>
#include <stdlib.h>


/*
Write a program that prints the numbers from 1 to 100.
But for multiples of three print "Fizz" instead of the number
and for the multiples of five print "Buzz".
For numbers which are multiples of both three and five print "FizzBuzz".
But this time, use switch
*/

int main()
{

    int i, h;

    for(i = 1; i <= 100; i++){
        h=i%15;

        switch(h){

        case 0:
            printf("FizzBuzz\n");
            break;
        case 3:
            //printf("Fizz\n");
            //break;
        case 6:
            //printf("Fizz\n");
            //break;
        case 9:
            //printf("Fizz\n");
            //break;
		case 12:
            printf("Fizz\n");
            break;
        case 5:
            //printf("Buzz\n");
            //break;
        case 10:
            printf("Buzz\n");
            break;
        default:
            printf("%d\n", i);
        }
}
    return 0;
}
