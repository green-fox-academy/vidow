#include <stdio.h>
#include <stdlib.h>

void alphabet_printer (char *alphabet);

//fill and print out abc from a to z, and A to Z in a function with pointers

int main()
{

    char alphabet[51] = {"abcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUWXYZ"};

    alphabet_printer(alphabet);

    return 0;
}

void alphabet_printer(char *alphabet)
{
    for (int i = 0; i < 25; i++) {

            printf("%c\n", alphabet[i]);
    }

    for (int i = 25; i < 51; i++) {

            printf("%c\n", alphabet[i]);
    }
}
