#include <stdio.h>
#include <stdlib.h>

/*
create a program which generates numbers from 0 to 100
for each number write if the number is odd or even (don't print out the numbers)
*/

int main()
{
    int i = 0;

    for (i = 0; i <= 100; i++)
    {

        if (i % 2 == 0)
    {
        printf("The number is even.\n");
    }
        else
        {
            printf("The number is odd.\n");
        }
    }


    return 0;
}
