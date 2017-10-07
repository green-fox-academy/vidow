#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

/*
find the greatest common divisor of the two given variables
use Euclid's algorithm, if you don't know it look it up on the internet
*/

int main()
{
    int x = 10;
    int y = 201;
    int temp = 0;
    int r = 0;

    printf("You have entered %d and %d\n", x, y);

    if (x < y){
        temp = x;
        x = y;
        y = temp;
    }
    if (x != 0 && y != 0){

        while (x != 0 || y != 0){
                if(x == 0){
                    r = y;
                    break;
                }
                if (y == 0){
                    r = x;
                    break;
                }
                temp = y;
                y =  x % (x / y * y);
                x = temp;
        }
        printf("The (G)reatest (C)ommon (D)ivisor of these numbers is %d.\n", r);

    }else{
        printf("Warning. Warning. Critical error.\nEither %d or %d is 0. Division by 0 is strictly forbidden!\n", x, y);
    }

    return 0;
}
