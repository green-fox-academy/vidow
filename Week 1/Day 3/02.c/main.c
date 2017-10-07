#include <stdio.h>
#include <stdlib.h>


/*
write a program to check whether a given number is positive or negative
*/
/*
int main()
{
    int a = 211;

    if (a % 2 == 0)
    {
        printf("%d is positive.", a);
        }
        else{
            printf("%d is negative.", a);
    }

    return 0;
}
*/

int main()
{
    int a = 212;

    switch(a % 2)
    {
        case 0:
            printf("%d is even.", a);
            break;

        case 1:
            printf("%d is odd.", a);
            break;
        default:
            printf("Something went terribly wrong");
    }

    return 0;
}

