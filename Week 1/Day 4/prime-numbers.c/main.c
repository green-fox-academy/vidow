#include <stdio.h>
#include <stdlib.h>

/*
Create a program which prints out oll the prime numbers
aslo add a feature where you can tell the from - to limits
for example :
from = 11;
to = 34;
output :
13, 17, 19, 23, 29, 31 , this is 6 prime numbers
*/

int main()
{
    int from = 11;
    int to = 34;
    int optimus_prime = 0;
    int j = 0;
    int i = 0;

    for (i = from + 1; i <= to; i++){
        optimus_prime = 1;
        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                optimus_prime == 0;
                break;
            }
        }
        if (optimus_prime == 1){
            printf("%d, ", i);
        }

    }

    return 0;
}
