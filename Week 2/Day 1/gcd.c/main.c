#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

// create a function to find the greatest common divisor of two numbers (a andd b)
// again the parameters value should be stored in a .h file
// use recursion


int main()
{
    int a;
    int b;
    int temp = 0;
    int r = 0;

    printf("You have entered %d and %d\n", a, b);

    if (a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a != 0 && b != 0){

        while (a != 0 || b != 0){
                if(a == 0){
                    r = b;
                    break;
                }
                if (b == 0){
                    r = a;
                    break;
                }
                temp = b;
                b =  a % (a / b * b);
                b = temp;
        }
        printf("The (G)reatest (C)ommon (D)ivisor of these numbers is %d.\n", r);

    }else{
        printf("Warning. Warning. Critical error.\nEither %d or %d is 0. Division by 0 is strictly forbidden!\n", a, b);
    }

    return 0;
}
