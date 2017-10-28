#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fill and print out abc from a to z, and A to Z in a function

int main()
{

//    char alphabet[25] = {"abcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUWXYZ"};

    alphabet_printer();


    return 0;
}

void alphabet_printer ()
{

    char alphabet[51] = {"abcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUWXYZ"};

    for (int i = 0; i < 25; i++) {

            printf("%c\n", alphabet[i]);
    }

    for (int i = 25; i < 51; i++) {

            printf("%c\n", alphabet[i]);
    }

}
