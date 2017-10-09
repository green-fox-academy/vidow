#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
// Write a function called `sum` that sum all the numbers
// until the given parameter which you store in a .h file

int main()
{

        Sum();

    return 0;
}

void Sum(){

    int i = 0;
    int sum = 0;

    for(i = 1; i <= NUMBER; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return;
}
