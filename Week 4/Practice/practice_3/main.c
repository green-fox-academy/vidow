#include <stdio.h>
#include <stdlib.h>
#include "factorio.h"
/*
---------------------------------------------------------------------------------------------------------------------
write a function which calculate and print!! the factorial (n!) (define N to 5 at first, 5! is 120)
---------------------------------------------------------------------------------------------------------------------
*/
int main()
{
    factorial(n);

    return 0;
}

void factorial(int number1)
{

    printf("Factorial of %d is: ", number1);

    for (int i = 1; i <= n - 1; i++) {

        number1 *= i;
    }

    printf("%d", number1);

}
