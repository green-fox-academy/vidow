#include <stdio.h>
#include <stdlib.h>

/*
write a program that decides which number is bigger
use switch-statement
*/
/*nt main()
{
    int num1;
    int num2;

    num1 = 100;
    num2 = 96;

    if (num1 > num2){
        printf("%d is bigger than %d.\n", num1 , num2);
    }   else
    {
        printf("%d is bigger than %d.\n", num2 , num1);
}
    return 0;
}
*/


int main ()
{
    int num1;
    int num2;

    num1 = 100;
    num2 = 96;


    switch(num1<num2){

    case 0:
        printf("%d is bigger than %d.", num1, num2);
        break;
    case !0:
        printf("%d is bigger than %d.", num2 , num1);
        break;
    default:
        printf("Something went terribly wrong");
        break;
    }

    return 0;
}

