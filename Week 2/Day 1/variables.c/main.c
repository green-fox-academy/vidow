#include <stdio.h>

/*
Write a program where you have five functions
first the program should ask for an integer, then
these functions should do various mathematical operations on a given integer
last but not least there should be a variable which counts how many operations
have been done on the given integer
*/

int a = 0;

int main()
{

    function_1();

    function_2();

    function_3();

    function_4();

    function_5()

    return 0;
}

void function_1(){

    a = a + 1;

    printf("%d\n", a);

    return;
}

void function_2(){

    a = a + 11;

    printf("%d\n", a);

    return;
}

void function_3(){


    a = a + 111;

    printf("%d\n", a);

    return;
}

void function_4(){


    a = a + 1111;

    printf("%d\n", a);

    return;
}

void function_5(){


    a = a + 1111;

    printf("%d operations have been done\n", a);

    return;
}
