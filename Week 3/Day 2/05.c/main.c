#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

//TODO: write a function which returns 485 as unsigned integer value
//put your return value in an integer variable in which you should have 229, and print it out
//try to figure out which type casting you should use


int main()
{
    int printValue = 0;

    printValue = returner();

    printf("%d", printValue);


    return 0;
}

int returner()
{

    uint8_t a = 485;

    return(a);
}
